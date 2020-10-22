#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(ll a, ll b){
  if(a<b)
    return gcd(b,a);
  if(b==1)
    return a;
   else return gcd(b,a%b);
}

int main(){
  ll a;
  cin>>a;
  ll b;
  cin>>b;
  cout<<gcd(a,b)<<endl;
}
