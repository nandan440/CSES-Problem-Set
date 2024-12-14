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
   if(n==1)
   cout<<1;
   else if(n<=3)
   {
      cout<<"NO SOLUTION";
   }
   else
   {if(n%2==0)
   cout<<n/2<<" ";
   else
   cout<<n/2+1<<" ";
   bool b=0;
   int a=0;
   for(int i=0;i<n-1;i++)
   { 
      if(b==0)
      {cout<<n-a<<" ";b=1; a++;continue;}

      else if(b==1)
      {cout<<a<<" ";b=0;}
     
   }
   }
}