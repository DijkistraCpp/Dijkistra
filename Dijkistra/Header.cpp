#include"Header.h"
#include<vector>
#include<algorithm>

int Min(map<int, int> Map[],int source, int destination)
{
	int minG=0, minL = 0;
	vector<int> * TabMin = new vector<int>();

	if (source != destination)
	{
		for (auto it : Map[source])
		{
			minL += it.second + Min(Map,it.first, destination);
			TabMin->push_back(minL);
			minL = 0;
		}
		if(TabMin->size()!=0)
			minG = *min_element(TabMin->begin(), TabMin->end());
		return minG;
	}
	else
		return 0;

	delete TabMin;
}


void Dijkistra(map<int, int> graphe[] , int Precedent[4], int Distance[4], int  source)
{
	vector<int> Vect;
	Distance[source] = 0;
	Precedent[source] = -1;
	for (int i = 0; i < 4; i++)
	{
		if (i != source) {
			Distance[i] = -1;
		}
		Vect.push_back(i);
	}

	for (int i = 0; i < 4; i++)
	{
		Distance[Vect[i]] = Min(graphe, source, Vect[i]);

		for (auto it :graphe[Vect[i]])
		{
			if (Distance[it.first] == -1)
			{
				Distance[it.first] = Distance[Vect[i]] + it.second;
				Precedent[it.first] = Vect[i];
			}else
				if (Distance[it.first] > Distance[Vect[i]] + it.second)
				{
					Distance[it.first] = Distance[Vect[i]] + it.second;
					Precedent[it.first] = Vect[i];
				}
		}

	}
	cout << endl << "la distance : " << endl;
	for (int i = source; i < 4; i++)
		cout << Distance[i]<< "   " ;

	cout << endl << "les precedents : " << endl;
	for (int i = source; i < 4; i++)
		cout << Precedent[i] << "   ";
	cout << endl;
}
