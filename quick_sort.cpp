//implementation of quick sort

#include<bits/stdc++.h>
using namespace std;

void qs(vector<int>& arr, int low, int high );
int partation(vector<int>& arr , int low, int high );

void qs(vector<int>& arr, int low, int high ){
    if(low<high){
        int pIndex = partation(arr,low,high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}

int partation(vector<int>& arr , int low, int high ){
    int i= low;
    int j= high;
    int pivot= arr[low];
    while(i<=j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);

        }
        
    }
    swap(arr[low],arr[j]);
    return j;

}

int main (){
    vector<int> arr ={1, 23, 5 ,45 ,8 ,6 ,79, 5};
    qs(arr, 0, arr.size() - 1);

    cout << "Sorted array in acending  order: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}