#include<bits/stdc++.h>
using namespace std;
int last(int arr[],int n,int k){
    int c=1;
    int s=0,e=n-1,m,ans=-1;
    while(s<=e){
        m = s+(e-s)/2;
        if(arr[m]==k) {
            ans = m;
            s=m+1;
        }
        else if(arr[m]<k){
            s=m+1;
        }
        else e=m-1;
    }
    return ans;
}
int first(int arr[],int n,int k){
    int c=1;
    int s=0,e=n-1,m,ans=-1;
    while(s<=e){
        m = s+(e-s)/2;
        if(arr[m]==k) {
            ans = m;
            e=m-1;
        }
        else if(arr[m]<k){
            s=m+1;
        }
        else e=m-1;
    }
    return ans;
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
    if(last(arr,n,k)==-1 || first(arr,n,k)==-1) cout<<"not present";
    else cout<<k<<" "<<last(arr,n,k)-first(arr,n,k)+1;
    return 0;
}


