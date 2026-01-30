#include<bits/stdc++.h>
using namespace std;
void printStep(vector<int>& arr, int step) {
    for(int x : arr) cout << x << " ";
    cout << endl;
}

void largest(vector<int>& arr){
    int mx = arr[0];
    for (int x : arr){
        if (x > mx) mx = x;
    }
    cout << "Largest: " << mx << endl;
}

void selSort(vector<int> arr){
    cout << "SelS" << endl;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        int min_idx = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
        printStep(arr, i + 1);
    }
}

void InsertionSort(vector<int> arr){
    cout << "\nInsS" << endl;
    int n = arr.size();
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printStep(arr, i); 
    }
}

void bubbleSort(vector<int> arr){ 
    cout << "\nBubbleS" << endl;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        bool sorted =true;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                sorted = false;
            }
        }
        printStep(arr, i + 1);
        if (sorted){break;}
    }
}
int linearSearch(vector<int> &arr,int x){
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int binarySearch(vector<int> &arr,int x){
    sort(arr.begin(), arr.end());
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;

} 
int main(){
    int n;
    if (cin >> n) {
        vector<int> original_arr(n);
        for(int i = 0; i < n; i++){ cin >> original_arr[i]; }
        largest(original_arr);
        selSort(original_arr);
        InsertionSort(original_arr);
        bubbleSort(original_arr);
        int x;cin>>x;
        cout<<"linear";
        int res=linearSearch(original_arr,x);
        cout<<"binary"
        int res=binarySearch(original_arr,x);
        if (res==-1) cout<<"not found";
        else cout<<res;
    }
    return 0;
}