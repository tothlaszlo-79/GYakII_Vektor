#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <int> jegyek(3);
	char betu;
	int szam, i;

	for ( i = 0; i < 3; i++)
	{
		cout << "Adja meg az " << i + 1 << "tanulo jegyet (1-5):";
		cin>> jegyek[i];
	}

	cout << "\nSzeretne plsz jegyet felvenni? (igen => i): " 
		<< endl;
	cin >> betu;

	if (betu == 'i')
	{
		do
		{
			cout << "Adja meg a "<< i+1 << "jegyet(1 - 5) : ";
			cin >> szam;
			jegyek.push_back(szam);
			cout << "Szeretne meg jegyet felvenni? (igen => i): ";
			cin >> betu;
			i++;
		} while (betu == 'i');
	}
	cout << "\nA jegyek szama: " << jegyek.size() << endl;
	cout << "Az osztaly jegyei: ";
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << " ";
	}
	//utolso elem torlese
	jegyek.pop_back();
	cout << "\nA jegyek a torles utan: " << endl;
	for (i = 0; i < jegyek.size(); i++)
	{
		cout << jegyek.at(i) << " ";
	}
	system("pause");
	return 0;
}
