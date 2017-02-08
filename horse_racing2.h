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
int GetMinValue(int Data[]);
 
int main()
{
    cin >> N; cin.ignore();
    int array[N] = {};
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        array[i] = Pi;
    }
    
    int mindiff = GetMinValue(array);
    cout<<mindiff<<endl;
}

int GetMinValue(int array[])
{
    int *b = new int[N-1];
    for ( int i=0; i<N-1; i++ ) {
		b[i] = array[i+1] - array[i];
		if ( b[i] == 0)
			return 0;
	}
	
	int mindiff = 0x7fffffff;
	for ( int i=0; i<N-1; ++i ) {
		int diff = b[i];
		int absdiff = abs(diff);
		for ( int j=i+1; j<N-1; ++j ) {
			diff += b[j];
			if ( abs(diff) < absdiff )
				absdiff = abs(diff);
		}
		if ( absdiff < mindiff )
			mindiff = absdiff;
	}
	delete[] b;

	return mindiff;
}
