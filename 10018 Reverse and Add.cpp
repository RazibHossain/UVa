
#include<bits/stdc++.h>
using namespace std;

long long reversNum(long long n){
    long long remainder,result=0;
    while(n!=0){
    long long remainder=n%10;
    n/=10;
    result=(result*10)+remainder;
    }
    return result;
}

bool isPalindromic(long long m){


    long long n=reversNum(m);
    if(m==n){return true;}
    return false;


}


int main(){

    long long t;cin>>t;
    while(t--){
    long long num;cin>>num;

    long long revnum=reversNum(num);

    long long add=num+revnum;

    if(isPalindromic(add)==1){cout<<1<<" "<<add<<endl;}
    else{
        //cout<<"Entering else loop currently counter value is 1"<<endl;
        long long counter=1;
        while(isPalindromic(add)!=1){
            long long p=add;
            long long q= reversNum(p);
            add=p+q;
           // cout<<"After reverse and add value is : "<<add<<endl;

            counter++;
           // cout<<"counter value "<<counter<<endl;
        }

        cout<<counter<<" "<<add<<endl;






    }




    }


}

