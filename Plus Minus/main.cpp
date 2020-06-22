#include <iostream>
#include <stdio.h>
using namespace std;

class PlusMinus {
private:
    double countedPlus, countedMinus, countedZero;
    int sizeOfArray;

public:
    void setSizeOfArray (int sizeOfArray){
        this->sizeOfArray = sizeOfArray;
    }

    double getCountedPlus(){
        return countedPlus;
    }

    double getCountedMinus(){
        return countedMinus;
    }

    double getCountedZero(){
        return countedZero;
    }

    void setData () {
        double data;
        for (int i=0; i<this->sizeOfArray; i++){
            cin >> data;
            if (data == 0)
                this->countedZero += 1;
            else if (data < 0)
                this->countedMinus += 1;
            else
                this->countedPlus += 1;
        }
    }

    double getFractions (double data){
        double fraction = data/this->sizeOfArray;
        return fraction;
    }

    PlusMinus(){
        countedPlus = countedMinus = countedZero = 0;
    }
};

int main(){
    PlusMinus plusMinus;
    int n; cin >> n;

    plusMinus.setSizeOfArray(n);
    plusMinus.setData();

    printf("%.6lf\n", plusMinus.getFractions(plusMinus.getCountedPlus()));
    printf("%.6lf\n", plusMinus.getFractions(plusMinus.getCountedMinus()));
    printf("%.6lf\n", plusMinus.getFractions(plusMinus.getCountedZero()));
}