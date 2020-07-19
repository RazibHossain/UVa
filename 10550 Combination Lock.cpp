#include<bits/stdc++.h>
using namespace std;
int main(){


    int a,b,c,d,x,y,z;
    while((scanf("%d%d%d%d",&a,&b,&c,&d)),(a||b||c||d)){
        if(a<b) x=40-(b-a);
        else x= a-b;
        if(b>c) y=40-(b-c);
        else y= c-b;
        if(c<d) z=40-(d-c);
        else z=c-d;

        cout << 360*3+(x+y+z)*9 << endl;


    }






}
