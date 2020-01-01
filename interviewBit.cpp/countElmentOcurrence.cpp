int Solution::findCount(const vector<int> &A, int B) {
    int left = 0;
    int right = A.size()-1;
    int mid;
    int firstElementIndex = -1;
    int lastElementIndex = -1;
    int numsOfOccurences;
    //5 6 7 10 15 20
    while(left <= right){
        mid = left + (right - left)/2;
        if(A[mid] == B && (mid == 0 || A[mid-1] != B)){
            firstElementIndex = mid;
            break;
        }
        if(A[mid] >= B){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    if(firstElementIndex == -1) return 0;
    left = 0;
    right = A.size()-1;
    while(left <= right){
        mid = left + (right - left)/2;
        if(A[mid] == B && (mid == A.size()-1 || A[mid+1] != B)){
            lastElementIndex = mid;
            break;
        }
        if(A[mid] > B){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    numsOfOccurences = lastElementIndex - firstElementIndex + 1;
    return numsOfOccurences;
}
