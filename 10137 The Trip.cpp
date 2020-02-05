#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){


    int n;
    while(cin >> n, n){

        double c[1010];
        double avg = 0;
        for(int i = 0; i < n; i++) {
            scanf("%lf", &c[i]);
            avg += c[i];
        }
        avg = avg / n;
        double pos = 0, neg = 0;
        for(int i = 0; i < n; i++) {
            double v = (long) ((c[i] - avg) * 100.0) / 100.0;
            if(v > 0) pos += v;
            else neg += v;
        }

        neg = -neg;

        printf("$%.2f\n", neg > pos? neg : pos);
    }
}




















       /* vector<double> arr;
        vector< int>::iterator it;
        double e;
        for(int i=0;i<n;i++){
           cin>>e;
           arr.push_back(e);
        }

        sort(arr.begin(),arr.end());

        int index=(arr.size()-1)/2;


        double result= ( arr[index+1]) -( arr[index]);

        cout<<"$" <<fixed << setprecision(2)<<result<<endl;

*/





