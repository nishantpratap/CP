#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int sumT=0;
sumT= n*(n+1)/2;
int arr[n-1];
 for(int i=0;i<n-1;i++)
    {
       cin>>arr[i];
       sumT -= arr[i];
    }
    cout<<sumT<<endl;
}