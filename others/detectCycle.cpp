#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<int> visitedNodes; //almacenaremos los nodos que hemos visitado
int matrixSize;
vector<vector<int> > matrix; //creamos nuestra matriz
bool traverse(int currentNode){
    visitedNodes.insert(currentNode); //Agregamos numero de nodo en el que estamos parados a nuestro vector de nodos visitados
    for(int adyacentNode = 0; adyacentNode < matrixSize; adyacentNode++){ //recorremos los nodos a los que se pudo haber conectado nuestro nodo
        if(matrix[currentNode][adyacentNode] == 1){ //En caso de que podamos ir al nodo ayacente tenemos que hacer ciertas preguntas
            if(visitedNodes.find(adyacentNode) != visitedNodes.end()){ //En caso de que el nodo adyacente ya haya sido visitado regresamos falso, indicando que es un grafo con ciclos
                cout << "Detecte pedos en el nodo "<< currentNode << " con el " << adyacentNode<< endl; 
                return false;
            }
            bool hasDetectedNoCycle = traverse(adyacentNode); //Nos vamos a hacer el recorrido en el nodo adyacente
            if(!hasDetectedNoCycle) return false;//si el nodo adyacente detectó ciclo entonces regresamos false, indicando que no es un grafo valido, pues tiene ciclo
        }
    }
    visitedNodes.erase(currentNode);//Una vez que terminamos de analizar un nodo, lo eliminamos de nuestro almacén
    return true;
}
int main(){
    cout << "introduce el numero de nodos: " ;
    cin >> matrixSize;
    matrix.assign(matrixSize, vector<int>(matrixSize)); //le asignamos las dimensiones a la matriz
    
    for(int currentNode = 0; currentNode < matrixSize; currentNode++){
        cout << "Indica con 0's y 1's los nodos a los que se puede dirigir el nodo " << currentNode << " : "; 
        for(int adyacentNode = 0; adyacentNode < matrixSize; adyacentNode++){
            cin >> matrix[currentNode][adyacentNode];
        }
    }
    //las filas nos indican el nodo en el que estamos parados, las columnas indican el nodo al que podemos ir y no ir, con un 1 y 0
    //si nuestra matriz tiene 1 significa que el nodo currentNode puede ir al nodo adyacentNode
    //Para este programa suponemos que siempre existirán n nodos, y cada uno de ellos estará conectado con algún otro. Pues no pueden haber varios grafos representados en la matriz
    //comenzamos con el nodo 0;
    for(int currentNode = 0; currentNode < matrixSize; currentNode++){
        //visitedNodes.clear(); //Limpiamos nuestro almacen de nodos visitados
        if(traverse(currentNode) == false) { // si identificamos que hay un ciclo comenzando con el nodo actual, terminamos nuestro programa
            cout << "Si hay ciclo" << endl;
            return 0;
        }
    }
    cout << "No había cilo" << endl;//si llegamos hata aquí, entonces no había ciclo, porque se hubiera terminado el programa al entrar en el if, por lo cual imprimimos que no había ciclo
    return 0;
}