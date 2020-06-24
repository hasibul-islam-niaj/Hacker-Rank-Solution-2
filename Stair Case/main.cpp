#include <iostream>
using namespace std;

class StairCase {
private:
    short sizeOfStairCase;

public:
    void setSizeOfStairCase (short sizeOfStairCase) {
        this->sizeOfStairCase = sizeOfStairCase;
    }

    string getDrawnCase(){
        string drawnCase = "";
        for (int i = 0; i < sizeOfStairCase; i++) {
            for (int j = 0; j < sizeOfStairCase; j++) {
                if(j >= sizeOfStairCase - 1 - i)
                    drawnCase += "#";
                else
                    drawnCase += " ";
            }
            drawnCase += "\n";
        }
        return drawnCase;
    }
};

int main() {
    StairCase stairCase;
    short n;
    cin >> n;
    stairCase.setSizeOfStairCase(n);
    cout << stairCase.getDrawnCase() << endl;
}