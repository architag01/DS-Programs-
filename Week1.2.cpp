#include<bits/stdc++.h>
using namespace std;
void binary_search(int arr[],int n,int k){
    int c=1;
    int s=0,e=n-1,m;
    while(s<=e){
        m = s+(e-s)/2;
        if(arr[m]==k) {
            cout<<"present "<<c;
            return ;
        }
        else if(arr[m]<k){
            s=m+1;
        }
        else e=m-1;
        c++;
    }
    cout<<"not present "<<c;
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted form"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched = ";
    int k;
    cin>>k;
    binary_search(arr,n,k);
    retURN 0;
}
