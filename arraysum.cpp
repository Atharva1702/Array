#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    for(i=0;i<n;i++){

        s=s+a[i];
    }
    cout<<endl<<"sum: "<<s;
    return 0;
}
