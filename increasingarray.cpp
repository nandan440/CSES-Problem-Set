#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<ll> vl;
typedef unsigned long long ull;
typedef string st;


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

   int n;
   cin>>n;
   vl rr(n);
   ull count=0;
   for(int i=0;i<n;i++)
   {cin>>rr[i];
    if(i>0 && rr[i]<rr[i-1])
    {
         while(rr[i]!=rr[i-1])
         {
            rr[i]++;
            count++;
         }
    }
    }
    cout<<count<<"\n";


}