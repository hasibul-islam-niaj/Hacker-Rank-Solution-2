#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BirthdayCakeCandles {
private:
    int age;
    vector<int> candlesHeight;

public:
    void setAge(int age){
        this->age = age;
    }

    int getAge(){
        return age;
    }

    void setCandleHeight(){
        int data;
        for (int i = 0; i < this->getAge(); i++){
            cin >> data;
            candlesHeight.push_back(data);
        }
    }

    void sortCandlesHeight(){
        sort(candlesHeight.begin(), candlesHeight.end(), greater<int>());
    }

    int getCanBeBlown(int i){
        return candlesHeight.size() == 0 ?
            0 : candlesHeight[i-1] == candlesHeight[i] ? getCanBeBlown(i+1) : i;
    }
};

int main (){
    BirthdayCakeCandles birthdayCakeCandles;
    int age;
    cin >> age;

    birthdayCakeCandles.setAge(age);
    birthdayCakeCandles.setCandleHeight();
    birthdayCakeCandles.sortCandlesHeight();

    cout << birthdayCakeCandles.getCanBeBlown(1) << endl;
}