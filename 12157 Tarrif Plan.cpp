#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;
        int mile=0,juice=0;
        while(n--){
            int e;cin>>e;

            {
                if(e%60==0){
                int mul2=(e/60)+1;
                juice=juice+(mul2*15);

             }


            else{

                double x=(e*1.0/60);
                int mul2 =ceil(x);
                juice=(mul2*15)+juice;
        }
            }


        {

            if(e%30==0){

               int mul=(e/30)+1;

                mile=(mul*10)+mile;

        }


            else{

                double y=(e*1.0/30);
                int  mul=ceil(y);
                mile=mile+(mul*10);



            }
            }

        }
                if(mile<juice){
                cout<<"Case "<<i<<": Mile "<<mile<<endl;
            }
                else if(mile==juice){
                cout<<"Case "<<i<<": Mile Juice "<<juice<<endl;
            }
                else{
                 cout<<"Case "<<i<<": Juice "<<juice<<endl;
            }

    }












}
