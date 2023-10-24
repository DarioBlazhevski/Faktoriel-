#include <iostream>

using namespace std;

int main()
{
	/*

	int i, n, m, F, S;

	S = 0;

	cout << "Vnesi vrednost na m : ";
	cin >> m;

		F = 1;

		for (i = 1; i <= m; i++)
		{

			F *= i;
			cout << "\n " << i << " != " << F;

			S += F;
			cout << "\n S = " << S;

		}
	
		cout << "\nKrajnata suma iznesuva : " << S;

		*/

	/*


	int n, br_cifri, cifra, rez;

	cout << "Vnesi vrednost na n : ";
	cin >> n;

	br_cifri = 0;

	rez = n;

	while (n > 0)
	{
		cifra = n % 10;

		n /= 10;

		br_cifri++;

		cout << "cifra : " << cifra;
	}
	cout << "\n Brojot " << rez << " e " << br_cifri << " cifri";

	*/

	/*

	int n, cifra, rez, F, S;

	cout << "Vnesi vrednost na n : ";
	cin >> n;

	rez = n;

	S = 0;

	while (n > 0)
	{
		cifra = n % 10;

		n /= 10;

		F = 1;

		for (int i = 1; i <= cifra; i++)
		{

			F *= i;
		}

		S += F;

	}

	if (rez == S)

		cout << "\n Brojot " << rez << " e specijalen " << endl;

    */

	cin.get(); cin.get();

	return 0;

}