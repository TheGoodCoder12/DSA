#include<iostream>
#include<vector>

using namespace std;
int n;
void spiralMatrix(vector<vector<int>> &matrix){
    int direction=0;
    int left=1;
    int right=matrix[0].size();
    int top=1;
    int bottom=matrix.size();

    while (left<=right && top<=bottom)
    {
        if (direction==0)
        {
            for (int i = 0; i < matrix[0].size(); i++)
            {
                for (int j = 0; j < matrix.size(); j++)
                {
                    
                }
                
            }
            
        }
        
    }
    
    
}

int main(){
    cin>>n;
    vector<vector<int>> M (n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>M[i][j];
        }
        
    }
    cout<<"The matrix entered by you is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    spiralMatrix(M);   
    return 0;
}