#include <iostream>
using namespace std;

int main()
{
	while (true) 
	{
		int choose_graph;

		cout << "Choose the graph:" << endl;
		cout << "1. tan(sqrt(x))\n";
		cout << "2. x / pow( (x-3), 2 )\n";

		cin >> choose_graph;
		cout << "\n";
		if (choose_graph == 1)
		{
			float result_1;
			for (double x = 4.5; x <= 18.5; x=x+0.4)
			{
				result_1 = tan(sqrt(x));
				cout << result_1 << endl;
			}
		
		}
	}
	
	
}

