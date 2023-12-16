#include<iostream>
#include<vector>

using namespace std;
int N;
void upper(vector<vector<int>>&squareMatrix){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i<=j)
            {
                cout<<squareMatrix[i][j]<<" ";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}
int main(){
    cout<<"Enter the size of the matrix: ";
    cin>>N;  
    vector<vector<int>>Matrix (N, vector<int> (N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>Matrix[i][j];
        }
    }
    //Printing the matrix entered by the user
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout<<Matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //Printing upper half matrix
    upper(Matrix);
    return 0;
}