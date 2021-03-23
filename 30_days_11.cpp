#include <bits/stdc++.h>

using namespace std;

int summm(int iidx, int jidx, vector<vector<int>> arry, int max)
{
	int ii, jj;
	int sum;

	sum = 0;
	for (ii = iidx; ii < iidx+3; ii++)
	{
		for (jj = jidx; jj < jidx+3; jj++)
		{  
			if (ii == iidx+1 && (jj == jidx || jj == jidx+2))
				continue;
			sum+=arry[ii][jj];
		} 
	}
	if (iidx == 0 && jidx == 0)
		return (sum);
	if (max < sum)
		max = sum;

	return (max); 
}

int main()
{
	int max = 0;
	int ii, jj;

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	for (ii = 0; ii <4; ii++)
		for (jj = 0; jj < 4; jj++)
			max = summm(ii,jj,arr,max);

	cout << max;

	return (0);
}

