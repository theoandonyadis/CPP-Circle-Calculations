//Theo Andonyadis
//ECE 2620 Section 001
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int distance(double a,double b,double c,double d) //Distance function used to find the distance from (x1,y1) to (x2,y2)
{
	double run = c-a;
	double rise = d-b;
	double sum = run*run + rise*rise;
	double distance = sqrt(sum);
	return distance;
}
int radius(double e,double f,double g,double h) //Radius function calls distance function to use this value as a radius
{
	double r = distance(e,f,g,h);
	return r;
}
int circumference(double x) //Circumference function uses r from Radius function to compute circumference
{
	double c = M_PI*x*2;
	return c;
}
int area(double x) //Area function uses r from Radius function to compute area
{
	double a = M_PI*x*x;
	return a;
}
int main()
{
	double x1, y1, x2, y2;
	cout << "Enter value for circle center x1" << endl; //Prompts user for values for x1,y1,x2,y2 in order
	cin >> x1;
	cout << "Enter value for circle center y1" << endl;
	cin >> y1;
	cout << "Enter value for point on circle x2" << endl;
	cin >> x2;
	cout << "Enter value for point on circle y2" << endl;
	cin >> y2;
	double d;
	d = distance(x1,y1,x2,y2); //defines d as the distance between (x1,y1) and (x2,y2)
	double r;
	r = radius(x1,y1,x2,y2);
	double c = circumference(r); //Calls circumference function and stores it in variable c
	double a = area(r); //Calls area function and stores it in variable a
	char choice;
	while(choice != 4) //While loop to run the menu repeatedly
	{
	cout << "Do you wish to compute (1) Radius, (2) Circumference, (3) Area, or do you wish to Exit (4)?" << endl;
	cout << "Please select a number from the previous options." << endl;
	cin >> choice;
	switch(choice) {
		case '1' : cout << "Radius: " << r << endl; //Switch menu with 4 cases for the three calculations and exit, as well as default
		break;
		case '2' : cout << "Circumference: " << c << endl;
		break;
		case '3' : cout << "Area: " << a << endl;
		break;
		case '4' : cout << "Exit. Have a nice day!" << endl;
		return 0;
		default : cout << "Invalid input." << endl;
		break;
	}
	}
	return 0;
}

