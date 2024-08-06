#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b);

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int gcd = a[0];
    for(int i=1;i<n;i++){
        gcd=GCD(gcd,a[i]);
    }
    cout << gcd;
    return 0;
}

int GCD(int a,int b){
   if(a==0)return b;
   if(b==0)return a;
   if(a>b){
       int t=a;
       a=b;
       b=t;
   }
   if(b%a==0)return a;
   
   while(a!=0){
       int temp=b%a;
       b=a;
       a=temp;
   }
   return b;
}
