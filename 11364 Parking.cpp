#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;cin>>t;
    while(t--){
           int n;cin>>n;int sum=0; int arr[n];
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            arr[i]=e;
            //sum=sum+e;
        }

        sort(arr,arr+n);
        for(int j=n-1; j>0; j--)
            {
                sum+=arr[j]-arr[j-1];
            }
            sum*=2;
            printf("%d\n",sum);

    }





}
