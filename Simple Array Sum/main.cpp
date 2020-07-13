#include<iostream>
using namespace std;

class SimpleArraySum{
private:
    short sizeOfArray;
    int arraySummationResult;
public:
    short getSizeOfArray(){
        return sizeOfArray;
    }

    void setSizeOfArray(short sizeOfArray){
        this->sizeOfArray = sizeOfArray;
    }

    void sumOfArray(){
        int n;
        for(int i=0; i<this->getSizeOfArray(); i++){
            cin >> n;
            arraySummationResult += n;
        }
    }

    int getArraySummationResult(){
        return arraySummationResult;
    }

    SimpleArraySum(){
        arraySummationResult = 0;
    }
};

int main(){
    SimpleArraySum simpleArraySum;
    short n;
    cin >> n;

    simpleArraySum.setSizeOfArray(n);
    simpleArraySum.sumOfArray();
    cout << simpleArraySum.getArraySummationResult() << endl;

    return 0;
}