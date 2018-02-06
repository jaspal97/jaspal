#include<iostream>
using namespace std;
class devil
{
 public:
  inline int gcd(int a,int b)
  {
   if(a==0)
   return b;
   return gcd(b%a,a);
   }
 };
 int main()
 {
 cout<<"JASPAL SINGH"<<endl<<" 161210022"<<endl;
  devil jas;
  int a,b,ans;
  cout<<"enter 2 no's"<<endl;
  cin>>a>>b;  
  ans=jas.gcd(a,b);
  cout<<"gcd of "<<a<<" and "<<b<<" is "<<ans<<endl;
  return 0;
  }
  
