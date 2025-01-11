// implementation of merge sort 
#include<bits/stdc++.h>
using namespace std;

void mergesort(vector<int>&arr, int low ,int high);
void merge_array(vector<int>&arr, int low ,int mid, int high);

void mergesort(vector<int>&arr, int low ,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergesort(arr, low ,mid);
    mergesort(arr,  mid+1 , high);
    merge_array(arr, low , mid , high);

    }

void merge_array(vector<int>&arr, int low ,int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    
    }

}


int main (){
    vector<int> arr ={1, 23, 5 ,45 ,8 ,6 ,79, 5};
    mergesort(arr, 0, arr.size() - 1);

    cout << "Sorted array in acending  order: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}