#include <iostream>

using namespace std;

int  main(int argc, char** argv)
{
    int a = 100;
    int b = 500;
    int c = 1000;

    if ( a > b)
	{
        if ( a > c)
		{
            cout << "A es el mayor";
        } 
		más 
		{
            cout << "C es el mayor";
        }
    }
	más 
	{ 
      if  (b > c)
	  	{
        cout << "B es el mayor";
      	}
	  más
		{
        cout << "C es el mayor";
    	}
	}

    return 0;
}
