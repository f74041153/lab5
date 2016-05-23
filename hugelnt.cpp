#include"hugelnt.h"
#include<cstdlib>
hugelnt::hugelnt(int input)
{
  num=input;   

}
hugelnt::hugelnt(string input)
{
  const char *str=input.c_str();	
  num=strtod(str,NULL);
}
const hugelnt& hugelnt::operator=(const hugelnt& right)
{
   num=right.total;
   return *this;
}
const hugelnt& hugelnt::operator+(const hugelnt&x)
{
   total=num+x.num;
   return *this;
}
const hugelnt& hugelnt::operator-(const hugelnt&x)
{
   total=num-x.num;
   return *this;
}
ostream& operator<<(ostream& out,const hugelnt& a)
{
  out<<a.num;
  return out;
}
istream& operator>>(istream& in,hugelnt &a)
{
   in>>a.num;
   return in;
}
