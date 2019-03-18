#include <iostream>

using namespace std;

bool czyWiekszaDruga(string max, string bin)
{
	for(int j=0; j<bin.length(); j++)
	{
		if(bin[j] > max[j])
			return true;
		else if (bin[j] < max[j])
			return false;
	}


}
bool czyMniejszaDruga (string min, string bin)
{
	for(int a=0; a<bin.length(); a++)
	{
		if(bin[a] < min[a])
			return true;
		else if (bin[a] > min[a])
			return false;
	}
}

int main()
{
	string bin, max="0", min="11110111111011101"; // negacja (MAX)
	int linia = 0;
	int maxlinia, minlinia;

	for (int i=0; i<1000; i++)
	{
		cin >> bin;

		linia++;

		//MAX
		if (max.length() < bin.length())
		{
			max = bin;
			maxlinia = linia;
		}

		else if(max.length() == bin.length())
		{
			//	if(czyWiekszaDruga(max, bin))		rownowazne z tym na dole
			if(czyWiekszaDruga(max, bin) == true)
			{
				max = bin;
				maxlinia = linia;
			}
		}

		// MIN
		if (min.length() > bin.length())
		{
			min = bin;
			minlinia = linia;
		}

		else if(min.length() == bin.length())
		{
			if(czyMniejszaDruga(min, bin) == true)
			{
				min = bin;
				minlinia = linia;
			}
		}

	}

	cout << "Numer wiersza w ktorym jest najwieksza liczba: " << maxlinia << endl;
	cout << "Numer wiersza w ktorym jest najmniejsza liczba: " << minlinia << endl;

	return 0;
}
