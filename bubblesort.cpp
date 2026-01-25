#include<bits/stdc++.h>
using namespace std;
void selSort(vector<int>&arr){
    int n=arr.size(); //size = len(arr)
    bool swap;
    for (int i=0;i<n-1;i++){
        swap=false;

    }
    
    for (int i=0;i<n-1;i++){
        int min_idx=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
    swap(arr[i],arr[min_idx]);
    }
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    selSort(arr);
    for (int x:arr) cout<<x<<" ";
    return 0;
}
