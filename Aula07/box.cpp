#include <iostream>
#include <iomanip>

using namespace std;


void line(int t)
{
	cout << "*-";
	for (int i = 1 ; i <= t ; i++)
	{
		cout << "-";
	}
	cout << "-*" << endl;
}


void box(string s)
{
	int tam = s.size();

	line(tam);

	cout << "| " << s << " |" << endl;

	line(tam);

	cout << endl;

}

