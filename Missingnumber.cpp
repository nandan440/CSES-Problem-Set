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

    int n;
    cin>>n;
    
    vi count(n,0);
    for(int i=0;i<n-1;i++)
    {  int a;
    cin>>a;
    count[a-1]++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[i]==0)
        {cout<<i+1;break;}
    }
}