#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DiagonalDifference {
private:
    int n;
    vector<vector<int>> data;

public:
    void setN(){
        cin >> n;
    }

    int getN() {
        return n;
    }

    void setData(){
        vector<int> data(this->n);
        for (int i=0; i<this -> n; i++){
            for (int j=0; j<this -> n; j++){
                cin >> data[j];
            }
            this -> data.push_back(data);
        }
    }

    int getDifference() {
        int leftDiagonal = 0, rightDiagonal = 0;
        for (int i=0; i<this->n; i++){
            for (int j=0; j<this->n; j++){
                if (i == j)
                    leftDiagonal += this->data[i][j];
                if(j+1 == this->n - i)
                    rightDiagonal += this->data[i][j];
            }
        }
        return abs(leftDiagonal - rightDiagonal);
    }
};

int main() {
    DiagonalDifference diagonalDifference;
    diagonalDifference.setN();
    diagonalDifference.setData();
    cout << diagonalDifference.getDifference() << endl;
}