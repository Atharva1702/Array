#include<iostream>
using namespace std;
void bubbl_sort(int arr[],int n){
    for(int itr=0;itr<=n;itr++){
        for(int j=0;j<=(n-itr-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbl_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
