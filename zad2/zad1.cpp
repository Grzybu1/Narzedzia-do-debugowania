#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>

void heap_sort(std::vector<int> &tab)
{
	int size = tab.size();
	int i,j,k,m,x;
	for(i = 2; i < size; i++)
	{
		j = i;
		k = (j / 2);
		x = tab[i];
		while(k>0 and tab[k]<x)
		{
			tab[j] = tab[k];
			j = k;
			k = (j / 2);
		}
		tab[j] = x;
	}
	for(i = size; i >= 1; i--)
	{
		x = tab[0];
		tab[0] = tab[i];
		tab[i] = x;
		j = 0;
		k = 1;
		while(k < i)
		{
			if(k+1 < i and tab[k + 1] > tab[k])
			{
				m = k+1;
			}
			else
			{
				m = k;
			}
			if(tab[m] <= tab[j])
			{
				break;
			}
			x = tab[j];
			tab[j] = tab[m];
			tab[m] = x;
			j = m;
			k = j+j;
		}
	}
}

int main()
{
	srand(time(NULL));
	long long int n;
	std::cout << "How long should array be?" << std::endl;
	std::cin >> n;
	std::cout<<"Counting..."<<std::endl;
	std::vector<int> tab;
	std::vector<int> tab2;
	std::vector<int> tab3;
	for(int i = 0; i < n; i++)
	{	
		tab.push_back(5);
	}
	heap_sort(tab);
	for(int i = 0; i < n; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl << "Random number: " << rand()%1000 + 1 << std::endl;

}