#include <vector>

using namespace std;

bool valid(vector<vector<int>> A, vector<vector<int>> B)
{
	if(A.size() > 0 && B.size() > 0 &&
			A[0].size() > 0 && B[0].size() > 0 &&
			A[0].size() == B.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}

vector<vector<int>> multiply(vector<vector<int>> A, vector<vector<int>> B)
{
	if(!valid(A,B)) return {};

	size_t m = A.size();
	size_t n = A[0].size();
	size_t p = B[0].size();

	vector<vector<int>> C(m, vector<int> (p));

	for(int i = 0; i < m; i++)
	{
		for(int k = 0; k < p; k++)
		{
			for(int j = 0; j < n; j++)
			{
				C[i][k] += A[i][j]*B[j][k];
			}
		}
	}
	return C;
}
