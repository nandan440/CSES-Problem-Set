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

  
     	long long n;
        cin>>n;
        cout<<n<<" ";
        while(n!=1)
        {
            if(n%2==0)
            {n/=2;cout<<n<<" ";}
            else
            {n=n*3+1;cout<<n<<" ";}
        }
   
}