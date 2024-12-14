#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef string st;


int main(){
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int first=0,second=1,count=1,ans=1;
    while(second<s.size())
    {
      if(s[first]==s[second])
      {
        second++;
        count++;
        ans=max(ans,count);
      }
      else{
        
        count=1;
        first=second;
        second++;
      }

    }
    cout<<ans<<"\n";
}