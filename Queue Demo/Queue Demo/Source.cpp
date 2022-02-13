#include "Functions.h"

using namespace std;


int main()
{
	int ch;
	cout << "1.) Insert element in queue (enqueue)" << endl;
	cout << "2.) Delete element from queue (dequeue)" << endl;
	cout << "3.) Print the queue (no fancy term)" << endl;
	cout << "4.) Exit Queue Program." << endl;

	do
	{
		cout << "\n\nEnter your selection: " << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			Insert();
			break;
		case 2:
			Delete();
			break;
		case 3:
			Display();
			break;
		case 4:
			cout << "Exiting queue program." << endl;
			break;
		default:
			cout << "Please choose an integer 1-4." << endl;
		}
	} while (ch != 4);

	return 0;
}