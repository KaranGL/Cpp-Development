#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	input.open("passphrase.txt");
	ofstream output;
	output.open("NewPassPhrase.txt", ios::app);
	
	int userGuess = 0;
	string passPhrase;
	
	if (!input.fail())
    {
   		while(input >> passPhrase)
 		{
			cout << "The pass phrase is: " << passPhrase << endl;
			cout << "What is your answer?\n";
			cin >> userGuess;
			if (userGuess == passPhrase.length())
			{
				cout << "Congrats\n";
			}
			else
			{
				cout << "Sorry try again later\n";
				output << passPhrase << endl;
			}
		}
	}
	input.close();
	output.close();

}
