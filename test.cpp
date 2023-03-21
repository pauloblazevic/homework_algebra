#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
struct Ljubimci {
	string ime;
	string vrsta;
};

//

int main() {
	Ljubimci polje[4];

	polje[0].ime = "Garfiled";
	polje[0].vrsta = "Macka";

	polje[1].ime = "odie";
	polje[1].vrsta = "Pas";

	polje[2].ime = "Nemo";
	polje[2].vrsta = "Riba";

	polje[3].ime = "Tom";
	polje[3].vrsta = "Macka";

	string unos;
	cout << "Unesite vrstu: ";

		getline(cin, unos);

		cout << "ljubimci vrste " << unos << endl;
	for (int i = 0; i < 4; i++)
	{
		if (polje[i].vrsta==unos)
		{
			cout << polje[i].ime << endl;
		}
	}
	return 0;
}