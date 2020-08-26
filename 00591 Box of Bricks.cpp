#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;int sett=1;
    while(scanf("%d",&t),t){

        int n=t;
        int arr[t];
        int k=0;
        int sum=0;
        int j=1;
        for( j=1;j<=n;j++){
            int e;cin>>e;
            sum+=e;
            arr[k]=e;
            k++;
        }
        int avg=sum/t;
        int s=0;
        for(int i=0;i<t;i++){
            s=s+abs(avg-arr[i]);
        }
        s=s/2;
        printf("Set #%d\n",sett);
    printf("The minimum number of moves is %d.\n",s);
     printf("\n");
    sett++;
    }




}
