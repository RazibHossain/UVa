#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(scanf("%d",&n)!=EOF){
        int c=0;
        vector<int> v,v2;
        set<int>s;
        set<int>:: iterator it;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            v.push_back(e);
        }




        for(int i=0;i<n-1;i++){
            int res=0;res=abs(v[i+1]-v[i]);
            if(res!=0){
            s.insert(res);}
        }
        for(it=s.begin();it!=s.end();it++){
            v2.push_back(*it);
        }

        if(n==1){cout<<"Jolly"<<endl;}
        else{
                if(v2.size()==(n-1)){
            for(int k=1;k<n;k++){
                if(k==v2[k-1]){c++;}
            }
        }


        if(c==n-1){cout<<"Jolly"<<endl;}
        else{cout<<"Not jolly"<<endl;}






        }





       }




    }




