/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #1 Section 4
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double POUNDS =2.2;

int main()
{
   double weightInKilograms;
   double weightInPounds;
   
   cout<<"Enter Weight in kilograms: ";
   cin>>weightInKilograms;
  
   weightInPounds = weightInKilograms * POUNDS;
  
   cout<<fixed<<setprecision(2);
  
   cout<<"Weight in Pounds is : "<<weightInPounds<<endl;
   
   return 0;
}



