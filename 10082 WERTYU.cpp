#include<iostream>
#include<stdio.h>
using namespace std;
int main(){


    char ch;
	while (scanf("%c", &ch) != EOF) {

        if(ch==' '){
            cout<<" ";
        }
        else if(ch=='1'){
            cout<<'`';
        }
        else if(ch=='2'){
            cout<<'1';
        }
        else if(ch=='3'){
            cout<<'2';
        }
        else if(ch=='4'){
            cout<<'3';
        }
        else if(ch=='5'){
            cout<<'4';
        }
        else if(ch=='6'){
            cout<<'5';
        }
        else if(ch=='7'){
            cout<<'6';
        }
        else if(ch=='8'){
            cout<<'7';
        }else if(ch=='9'){
            cout<<'8';
        }
        else if(ch=='0'){
            cout<<'9';
        }
        else if(ch=='-'){
            cout<<'0';
        }
        else if(ch=='='){
            cout<<'-';
        }
        else if(ch=='W'){
            cout<<'Q';
        }
        else if(ch=='E'){
            cout<<'W';
        }
        else if(ch=='R'){
            cout<<'E';
        }
        else if(ch=='T'){
            cout<<'R';
        }
        else if(ch=='Y'){
            cout<<'T';
        }
        else if(ch=='U'){
            cout<<'Y';
        }
        else if(ch=='I'){
            cout<<'U';
        }
        else if(ch=='O'){
            cout<<'I';
        }
        else if(ch=='P'){
            cout<<'O';
        }
        else if(ch=='['){
            cout<<'P';
        }
        else if(ch==92){
            printf("%c", 93);
        }
        else if(ch==39){
            cout<<';';
        }

        else if(ch==']'){
            cout<<'[';
        }
        else if(ch=='S'){
            cout<<'A';
        }
        else if(ch=='D'){
            cout<<'S';
        }
        else if(ch=='F'){
            cout<<'D';
        }
        else if(ch=='G'){
            cout<<'F';
        }
        else if(ch=='H'){
            cout<<'G';
        }
        else if(ch=='J'){
            cout<<'H';
        }
        else if(ch=='K'){
            cout<<'J';
        }
        else if(ch=='L'){
            cout<<'K';
        }
        else if(ch==';'){
            cout<<'L';
        }
        else if(ch=='X'){
            cout<<'Z';
        }
        else if(ch=='C'){
            cout<<'X';
        }
        else if(ch=='V'){
            cout<<'C';
        }
        else if(ch=='B'){
            cout<<'V';
        }
        else if(ch=='N'){
            cout<<'B';
        }
        else if(ch=='M'){
            cout<<'N';
        }
        else if(ch==','){
            cout<<'M';
        }
        else if(ch=='.'){
            cout<<',';
        }
        else if(ch=='/'){
            cout<<'.';
        }
        else {
            cout<<endl;
        }


    }



}
