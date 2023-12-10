#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    vector<vector<int>> result(matrix[0].size(), vector<int> (matrix.size()));
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

int main(){
    cout<<"Enter m: ";
    int m;
    cin>>m;
    cout<<"Enter n: ";
    int n;
    cin>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    cout<<"Enter matrix"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> tMatrix(n,vector<int>(m));
    tMatrix = transpose(matrix);
    cout<<"\nresultant matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<tMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
