#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int min = 231832, max = 767346;
	int count = 0;

	for (; min <= max; min++) {
		string num = to_string(min) + 'a';
		
		bool has2Adjacent = false, isIncreasing = true;
		int adjacentCount = 1;

		for (int i = 1; i < size(num); i++)
		{
			if (num[i] == num[i - 1]) 
				adjacentCount++;
			else {
				if(adjacentCount == 2)
					has2Adjacent = true;
				adjacentCount = 1;
			}

			if (num[i] < num[i - 1])
				isIncreasing = false;
		}

		if (has2Adjacent && isIncreasing) 
			count++;
	}

	cout << count;
	return 0;
}
