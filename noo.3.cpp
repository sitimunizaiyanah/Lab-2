/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #2 Section 4
*/

#include <iostream>  
#include <cmath>  
#include <iomanip>  

using namespace std;   

int main () 
{
	double speedA,speedB;
	int hour,minutes;
	double distanceA,distanceB;  
	double mins,hours;
	double shortDistance;
	
	cout << "Enter average speed of car A: ";
	cin >> speedA;
	
	cout << "Enter average speed of car B: ";
	cin >> speedB;
	
	cout << "Enter elapsed time (in hours and minutes, separated by a space): ";  //prompts user to enter elapsed time
	cin>> hour >> minutes;
	
	mins = hour*60;
	hours = (minutes+mins)/60;
	distanceA = speedA*(hours);
	distanceB = speedB*(hours);
	
	shortDistance =sqrt((distanceA * distanceA) + (distanceB * distanceB));
	
	cout << "The (shortest) distance between the cars is: "<<fixed<<setprecision(2)<<shortDistance;
	
	return 0 ;
	
}


  
