#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Data {
private:
    long minSum, maxSum;

public:
    long getMinSum (){
        return minSum;
    }

    void setMinSum(long minSum){
        this->minSum = minSum;
    }

    long getMaxSum (){
        return maxSum;
    }

    void setMaxSum(long maxSum){
        this->maxSum = maxSum;
    }

    Data() {
        minSum = maxSum = 0;
    }
};

class MinMaxSum{
private:
    Data data;

public:
    Data getData(){
        return data;
    }

    void generate(vector<long> source) {
        for (int i=0; i<source.size(); i++){
            if (i > 0)
                data.setMaxSum(data.getMaxSum()+source[i]);
            if (i<4){
                data.setMinSum(data.getMinSum()+source[i]);
            }
        }
    }

    MinMaxSum(){
        long n;
        vector<long> temp;

        for (int i=0; i<5; i++){
            cin >> n;
            temp.push_back(n);
        }
        sort(temp.begin(), temp.end());
        this->generate(temp);
    }
};

int main (){
    MinMaxSum minMaxSum;
    Data data = minMaxSum.getData();
    cout << data.getMinSum() << " " << data.getMaxSum() << endl;
}