#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <fstream>
#include <iomanip>
#include <sys/types.h>
#include <sys/stat.h>
#include <algorithm>
#include <set>
using namespace std;
default_random_engine e(199161);
uniform_real_distribution<> u(0, 1);

int main()
{
	const int n = 15;
	int Array[n];
	int i, k, temp, j;
	for (i = 0; i < n; i++) Array[i] = u(e) * 20;
	for (i = 0; i < n; i++) printf("%d\t", Array[i]);
	cout << endl;
	do{
		k = 0;
		for (i = 0; i < n - 1; i++)
		{

			if (Array[i] > Array[i + 1])
			{
				temp = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = temp;
				k = k + 1;
			}
		}
	} while (k != 0);
	for (j = 0; j < n; j++) printf("%d\t", Array[j]);
	return 0;
}