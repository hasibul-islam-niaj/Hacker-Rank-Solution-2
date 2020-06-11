#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class VeryBigSum{
private:
    int n;
    long summation = 0;

public:
    void setN(int n){
        this->n = n;
    }

    void setData(){
        long data;
        for (int i = 0; i < this->n; ++i) {
            cin >> data;
            this->summation += data;
        }
    }

    long getSummation(){
        return summation;
    }
};

int main(){
    int n;
    VeryBigSum veryBigSum;

    cin >> n;
    veryBigSum.setN(n);
    veryBigSum.setData();
    cout << veryBigSum.getSummation() << endl;

    return 0;
}