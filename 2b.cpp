#include<iostream>
using namespace std;
 {
 
//declare variables
double averageTemperature
int degrees
string title
 
//Initialize variables
degrees = 0;
 
//Display The Program Title
     cout << "          Temperature Counter\n";
     cout << "          -------------------------\n";
 
//Ask the user for temperature in fahrenheit
     cout << "Enter the degrees in fahrenheit or -99 to quit: ";
     cin >> degrees;
 
//Repeat the following instructions while degrees is not -99.
while (degrees != -99)
 
{
 
//Increment the count for temperature
      if (degrees > 10)
             (averageTemperature = degrees / 10);
 
//ask for another temperature to repeat the loop
      cout << "Enter the degrees Fahrenheit or -99 to quit: ";
      cin >> degrees;
 
}
 
//display the report
      cout << endl;
      cout << "The average temperature is : " << averageTemperture << endl;
 
//display the histogram plot for each category
      cout << endl;
      title = "Degrees";
      plot(title, degrees);
 
return 0;
 
}

