#include <iostream>
using namespace std;

class DiagonalDifference {
private:
    int n, leftDiagonal, rightDiagonal;

public:
    void setN(){
        cin >> n;
    }

    void setData(){
        int data;
        for (int i=0; i<this -> n; i++){
            for (int j=0; j<this -> n; j++){
                cin >> data;

                if (i == j)
                    leftDiagonal += data;
                if(j+1 == this->n - i)
                    rightDiagonal += data;
            }
        }
    }

    int getDifference() {
        return abs(this->leftDiagonal - this->rightDiagonal);
    }

    DiagonalDifference(){
        leftDiagonal = rightDiagonal = n = 0;
    }
};

int main() {
    DiagonalDifference diagonalDifference;
    diagonalDifference.setN();
    diagonalDifference.setData();
    cout << diagonalDifference.getDifference() << endl;
}