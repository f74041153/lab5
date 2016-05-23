#include"hugelnt.h"
#include<iomanip>
using namespace std;
int main()
{
   hugelnt x;
   hugelnt y(28825252);
   hugelnt z("314159265358979323846");
   hugelnt result;

   cin>>x;
   result=x+y;
   cout<<setprecision(25)<<x<<"+"<<y<<"="<<result<<endl;

   result=z-x;
   cout<<setprecision(25)<<z<<"-"<<x<<"="<<result<<endl;
   //cout<<result<<endl;
   return 0;
}
