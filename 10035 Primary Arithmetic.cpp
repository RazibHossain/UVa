#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    while(scanf("%d%d",&a,&b),(a || b)){
            int max,min;if(a>b){max=a;min=b;}else{max=b;min=a;}


        int carry=0,precarry=0;
        while(max!=0){

            int aa=max%10;
            max/=10;
            int bb=min%10;
            min/=10;

            int j=aa+bb;
            if((j+precarry)>9){
                carry++;
                precarry=1;
            }
            else{
                precarry=0;
            }


        }



        if(carry==1)
        {
          printf("%d carry operation.\n",carry);
        }
        else if(carry>1)
        {
            printf("%d carry operations.\n",carry);
        }
        else if(carry==0)
        {
            printf("No carry operation.\n");
        }



    }





}
