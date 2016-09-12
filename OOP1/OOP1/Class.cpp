#include "stdafx.h"
#include "Class.h"

int FirstClass::length(char *name)
{
	
	for (int i = 0; name[i]; i++)
		counter++;
	cout << "Your name is - " << name << "\n Name length = " << counter << "\n";
	counter = 0;
	return 0;
}
void FirstClass::messageBox()
{
	cout << "Enter your name plz!\n";
	cin >> name;
}

void FirstClass::answer()
{
	cout << "\nHello - " << name << endl;
}