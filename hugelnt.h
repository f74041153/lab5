#include<iostream>
#include<cstring>
using namespace std;
class hugelnt
{
	friend ostream& operator<<(ostream&,const hugelnt&);
	friend istream& operator>>(istream&,hugelnt&);
   public:
	   hugelnt(int input=0);
	   hugelnt(string input);

	   const hugelnt& operator=(const hugelnt&right);
	   const hugelnt& operator+(const hugelnt&x);
       const hugelnt& operator-(const hugelnt&x);
   private:
	   double num;
       double total;

};
