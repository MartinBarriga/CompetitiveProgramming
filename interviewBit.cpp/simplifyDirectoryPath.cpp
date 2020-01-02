void insertNewDirectory(deque<string> &absPath, int &index, string &A){
    string folderName = "";
    while(index < A.size() && A[index] != '/'){
        folderName += A[index];
        index++;
    }
    absPath.push_back(folderName);
}

string Solution::simplifyPath(string A) {
    bool lastCharWasASlash = true;
    deque<string> absPath;
    string absPathWithSlash = "";
    for(int index = 0; index < A.size(); index++){
        if(lastCharWasASlash){
            if(A[index] == '.'){
                lastCharWasASlash = false;
            }
            else if(A[index] != '/'){
                insertNewDirectory(absPath, index, A);
            }
        }
        else{
            if(A[index] == '.'){
                if(!absPath.empty())absPath.pop_back();
            }
            
            lastCharWasASlash = true;
        }
    }
    if(absPath.empty()){
        return "/";
    }
    while(!absPath.empty()){
        absPathWithSlash += "/" + absPath.front();
        absPath.pop_front();
    }
    return absPathWithSlash;
}
