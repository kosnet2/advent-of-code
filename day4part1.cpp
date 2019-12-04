#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int min = 231832, max = 767346;
	int count = 0;

	for (; min <= max; min++) {

		string num = to_string(min);
		bool has2Adjacent = false, isIncreasing = true;
		int adjacentCount = 0;

		for (int i = 1; i < 6; i++)
		{
			if (num[i] == num[i - 1])
				has2Adjacent = true;

			if (num[i] < num[i - 1])
				isIncreasing = false;
		}


		if (has2Adjacent && isIncreasing)
			count++;
	}

	cout << count;
	return 0;
}
