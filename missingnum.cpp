#include<bits/stdc++.h>
using namespace std;
int main() {
int max=0;
string s;
cin>>s;
int k=s.length();
unordered_map<char, int> freq;
unordered_map<char ,int>::iterator itr;
for(int  i=0;i<k;i++)
    { freq[s[i]]++;}
for(itr=freq.begin();itr!=freq.end();itr++)
    {
        if(max<itr->second)
        {
            max=itr->second;
        }
    }
  cout<<max<<endl;
  return 0;
}