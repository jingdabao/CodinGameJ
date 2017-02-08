#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int N;
int GetMinValue(int Data[], int count);
 
int main()
{
    cin >> N; cin.ignore();
    int Array[N] = {};
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        Array[i] = Pi;
    }
    int result = GetMinValue(Array, 0);
    cout<<result<<endl;
}

int GetMinValue(int Data[], int count)
{
    if (count == N-2)
        return abs(Data[count] - Data[count+1]);
    else
        return abs(Data[count]-Data[count+1])<GetMinValue(Data,count+1) ? abs(Data[count]-Data[count+1]) : GetMinValue(Data,count+1);
}