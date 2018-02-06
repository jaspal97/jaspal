#include<iostream>
using namespace std;
class convertor
{
 float l;
 public:
 convertor(float len)
 {
  l=len;
  }
  friend void convert(convertor c,int);
 };
  void convert(convertor c,int n)
  {
   float ans;
   switch(n)
   {
   case 1:ans=2.54*c.l;
   cout<<"converted length is :"<<ans<<" cm"<<endl;
   break;
   case 2:ans=0.3937*c.l;
   cout<<"converted length is :"<<ans<<" inch"<<endl;
   break;
   case 3:ans=1.60934*c.l;
   cout<<"converted length is :"<<ans<<" km"<<endl;
   break;
   case 4:ans=0.6213*c.l;
   cout<<"converted length is :"<<ans<<" miles"<<endl;
   break;
   default:cout<<"wrong choice entered"<<endl;
   }
  }
 int main()
 {
 cout<<"JASPAL SINGH"<<endl<<"161210022"<<endl;
 float len;
 int n;
 cout<<"enter length"<<endl;
 cin>>len;
 cout<<" 1 for inches to cm:"<<endl;
 cout<<" 2 for cm to inches:"<<endl;
 cout<<" 3 for miles to km:"<<endl;
 cout<<" 4 for km to miles:"<<endl;
 cin>>n;
 convertor c(len);
 convert(c,n);
 return 0;
 }
 
