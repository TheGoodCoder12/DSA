#include <iostream>
#include <vector>

using namespace std;

int rectSumPreBoth(vector<vector<int>> &mat, int l1, int r1, int l2, int r2)
{
    int ans = 0;
    // Prefix Sum row-wise
    for (int i = 0; i < mat.size(); i++)
    {

        for (int j = 0; j < mat[0].size(); j++)
        {

            if (j != 0)
            {
                mat[i][j] = mat[i][j]+mat[i][j-1];
            }
        }
    }
    //Prefix Sum Row+column wise
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            // 1 3 6
            // 4 9 15
            // 7 15 24
            if (i!=0)
            {
                mat[i][j] = mat[i][j]+mat[i-1][j];
            }
            
        }
        
    }
        
    //printing the matrix
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //Coordinate-area method

    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the size of the array: " << endl;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the coordinates: " << endl;
    int l1, l2, r1, r2;
    cin >> l1 >> r1;
    cin >> l2 >> r2;

    rectSumPreBoth(arr, l1, r1, l2, r2);

    return 0;
}