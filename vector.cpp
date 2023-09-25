#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,q;
    cin>>n>>q;
    vector<vector<int>> a(n);//create a vector of vector of int
    for(int i = 0; i <n; i++){
        int k;
        cin>>k;
        a[i].resize(k);//resize the inner vector to have k elements
        for(int j = 0; j<k; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < q; i++){
        int x, y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;//print the value of the element at index the vector
    }

    return 0;

}

