//cmps335 exam 1 framework
//Write a unit test to check the validity of the milesToKm function. 
//@name: Jacob French
//CS335
//Mid-term 1
#include <iostream>
#include <cstdlib>
using namespace std;

double milesToKm(double miles);

double testValues[200][2] = {
    {0.1, 0.070595},
    {0.2, 0.127778},
    {0.3, 0.193219},
    {0.4, 0.256047},
    {0.5, 0.320338},
    {0.6, 0.377179},
    {0.7, 0.437968},
    {0.8, 0.502869},
    {0.9, 0.566453},
    {1.0, 0.627338},
    {1.1, 0.687828},
    {1.2, 0.750056},
    {1.3, 0.812044},
    {1.4, 0.872742},
    {1.5, 0.939051},
    {1.6, 0.999317},
    {1.7, 1.057795},
    {1.8, 1.122426},
    {1.9, 1.184569},
    {2.0, 1.245477},
    {2.1, 1.306479},
    {2.2, 1.370552},
    {2.3, 1.431963},
    {2.4, 1.500516},
    {2.5, 1.562474},
    {2.6, 1.622408},
    {2.7, 1.679902},
    {2.8, 1.747587},
    {2.9, 1.808442},
    {3.0, 1.868826},
    {3.1, 1.931736},
    {3.2, 1.993311},
    {3.3, 2.058741},
    {3.4, 2.114956},
    {3.5, 2.177221},
    {3.6, 2.244804},
    {3.7, 2.305723},
    {3.8, 2.366640},
    {3.9, 2.426989},
    {4.0, 2.489355},
    {4.1, 2.549020},
    {4.2, 2.617720},
    {4.3, 2.680177},
    {4.4, 2.739693},
    {4.5, 2.796955},
    {4.6, 2.863584},
    {4.7, 2.921229},
    {4.8, 2.984832},
    {4.9, 3.053955},
    {5.0, 3.111606},
    {5.1, 3.173981},
    {5.2, 3.231968},
    {5.3, 3.301554},
    {5.4, 3.363203},
    {5.5, 3.417607},
    {5.6, 3.487014},
    {5.7, 3.546460},
    {5.8, 3.606221},
    {5.9, 3.671176},
    {6.0, 3.729340},
    {6.1, 3.797348},
    {6.2, 3.853076},
    {6.3, 3.920678},
    {6.4, 3.981979},
    {6.5, 4.041785},
    {6.6, 4.109515},
    {6.7, 4.166262},
    {6.8, 4.234851},
    {6.9, 4.291360},
    {7.0, 4.356319},
    {7.1, 4.415136},
    {7.2, 4.479174},
    {7.3, 4.540696},
    {7.4, 4.599834},
    {7.5, 4.661250},
    {7.6, 4.727898},
    {7.7, 4.791527},
    {7.8, 4.848451},
    {7.9, 4.916565},
    {8.0, 4.977180},
    {8.1, 5.039618},
    {8.2, 5.097969},
    {8.3, 5.164436},
    {8.4, 5.224322},
    {8.5, 5.282185},
    {8.6, 5.350919},
    {8.7, 5.408075},
    {8.8, 5.473248},
    {8.9, 5.539605},
    {9.0, 5.599579},
    {9.1, 5.660778},
    {9.2, 5.723007},
    {9.3, 5.786572},
    {9.4, 5.843236},
    {9.5, 5.904629},
    {9.6, 5.965863},
    {9.7, 6.028120},
    {9.8, 6.094124},
    {9.9, 6.151809},
    {10.0, 6.218438},
    {10.1, 6.277264},
    {10.2, 6.341629},
    {10.3, 6.400159},
	{10.4, 6.468370},
	{10.5, 6.529736},
	{10.6, 6.587545},
	{10.7, 6.650267},
	{10.8, 6.713125},
	{10.9, 6.775721},
	{11.0, 6.844419},
	{11.1, 6.905757},
	{11.2, 6.968653},
	{11.3, 7.023566},
	{11.4, 7.089232},
	{11.5, 7.149879},
	{11.6, 7.210517},
	{11.7, 7.272780},
	{11.8, 7.338446},
	{11.9, 7.402120},
	{12.0, 7.458603},
	{12.1, 7.522106},
	{12.2, 7.584842},
	{12.3, 7.651417},
	{12.4, 7.706348},
	{12.5, 7.773612},
	{12.6, 7.829443},
	{12.7, 7.893471},
	{12.8, 7.960854},
	{12.9, 8.020551},
	{13.0, 8.080128},
	{13.1, 8.142003},
	{13.2, 8.208389},
	{13.3, 8.270194},
	{13.4, 8.328461},
	{13.5, 8.390922},
	{13.6, 8.451956},
	{13.7, 8.515895},
	{13.8, 8.578941},
	{13.9, 8.640696},
	{14.0, 8.705094},
	{14.1, 8.764701},
	{14.2, 8.825657},
	{14.3, 8.890815},
	{14.4, 8.953197},
	{14.5, 9.017682},
	{14.6, 9.081349},
	{14.7, 9.142233},
	{14.8, 9.196844},
	{14.9, 9.264040},
	{15.0, 9.326461},
	{15.1, 9.385418},
	{15.2, 9.453980},
	{15.3, 9.507000},
	{15.4, 9.570395},
	{15.5, 9.631752},
	{15.6, 9.699898},
	{15.7, 9.756987},
	{15.8, 9.820235},
	{15.9, 9.883626},
	{16.0, 9.948276},
	{16.1, 10.008963},
    {16.2, 10.072093},
    {16.3, 10.130992},
    {16.4, 10.191348},
    {16.5, 10.260607},
    {16.6, 10.31987},
    {16.7, 10.379083},
    {16.8, 10.440144},
    {16.9, 10.510276},
    {17.0, 10.569147},
    {17.1, 10.632470},
    {17.2, 10.690071},
    {17.3, 10.757761},
    {17.4, 10.814104},
    {17.5, 10.881951},
    {17.6, 10.941990},
    {17.7, 10.999862},
    {17.8, 11.066456},
    {17.9, 11.128969},
    {18.0, 11.191900},
    {18.1, 11.248778},
    {18.2, 11.318111},
    {18.3, 11.377467},
    {18.4, 11.435228},
    {18.5, 11.495819},
    {18.6, 11.564395},
    {18.7, 11.628164},
    {18.8, 11.683708},
    {18.9, 11.753395},
    {19.0, 11.808419},
    {19.1, 11.876475},
    {19.2, 11.934712},
    {19.3, 12.000728},
    {19.4, 12.055547},
    {19.5, 12.122003},
    {19.6, 12.185142},
    {19.7, 12.247047},
    {19.8, 12.310618},
    {19.9, 12.372681},
    {20.0, 12.432581}
};


int main(int argc,char *argv[])
{
	double miles = 0.0;
	double tolerance = 0;
	double functionValue;
	double myValue;
	int counter = 1;
	if (argc > 1) {
	  miles = atof(argv[1]);
	  tolerance = atof(argv[2]);
	  cout << "\tMiles\tFunction" << endl;
	  cout << "\t-----\t--------" << endl;
	  for(int i = 0; i < 200; i++){
	    functionValue = milesToKm(testValues[i][0]);
	    myValue = testValues[i][1];
	    
	    if(myValue >= functionValue-tolerance && myValue <= functionValue+tolerance){
	      cout << counter << "\t" << testValues[i][0] << "\t"
	      << milesToKm(testValues[i][0])<<"\t<--bad value" << endl;
	    }
	    else{
	     cout << counter << "\t" << testValues[i][0] <<
	     "\t" << milesToKm(testValues[i][0]) << endl;
 
	    }
	   counter++; 
	  }
	}

	
	return 0;
}

double milesToKm(double miles)
{
	return (miles * 0.62137);
}


