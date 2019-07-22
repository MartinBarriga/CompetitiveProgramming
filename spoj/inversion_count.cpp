#include<iostream>
#include<vector>
using namespace std;
long long int merge(vector <int> &v, int ini, int fin){
    if(ini!= fin){
        int mid = (ini + fin)/2;
        long long int acum;
        acum = merge(v,ini,mid);
        acum += merge(v, mid+1, fin);
        int izq = ini;
        int der = mid+1;
        int aux;
        vector <int> v2;
        while(izq <= mid && der<=fin){
            if(v[izq] > v[der]){
                v2.push_back(v[der]);
                der++;
                acum+=mid-izq+1;
            }
            else{ 
                v2.push_back(v[izq]);
                izq++;
            }
        }
        while(izq <= mid){
            v2.push_back(v[izq]);
            izq++;
        }
        while(der <= fin){
            v2.push_back(v[der]);
            der++;
        }
        while(!v2.empty()){
            v[fin] = v2.back();
            v2.pop_back();
            fin--;
        }
        return acum;
    }
    return 0;
}
int main(){
    int p,n,i,j,num;
    long long int acum;
    cin >> p;
    for(i = 0; i < p; i++){
        cin >> n;
        vector <int> v;
        for(j = 0; j < n; j++){
            cin >> num;
            v.push_back(num);
        }
        acum = merge(v, 0, v.size()-1);
        /*for(j=0; j <n; j++){
            cout << v[j] <<" ";
        }*/
        cout << acum << endl;
    }
    return 0;
} 