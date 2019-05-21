#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;



int main()
{
	cout << "Programm zu Uebung14.2" << endl << endl;

	string inputLine = "";
	string pathToOutputFile = "";
	string dateiName = "";
	ofstream ausgabeDatei;
	vector<string> lines;
	char weitermachen = 'j';
	int anzahlLines = 0;

	cout << "Tippen Sie eine Zeile Text ein: " << endl;
	
	while (weitermachen == 'j')
	{
		getline(cin,inputLine);
		lines.push_back(inputLine);
		
		anzahlLines++;

		cout << "Moechten Sie noch eine Zeile schreiben? [j,n]: ";
		cin >> weitermachen;
		cin.ignore();
	}


	cout << "Geben Sie einen Namen fuer diese Datein an: ";
	cin >> dateiName;

	pathToOutputFile = dateiName + ".txt";

	ausgabeDatei.open(pathToOutputFile);

	for (int i = 0; i < lines.size(); i++)
	{

		ausgabeDatei << lines[i] << endl;
	}

	ausgabeDatei.close();

	cout << "Die Datei >>" << pathToOutputFile << "<< wurde erstellt" << endl;

	system("pause");
	return 0;
}