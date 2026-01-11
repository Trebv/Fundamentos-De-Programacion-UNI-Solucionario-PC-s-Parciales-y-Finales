#include <iostream>
int main()
{
	int n = 8;
	int array[n];
	for (int i = 0; i < n; i++){
		int num = 0;
		std::cin >> num;
		array[i] = num;
	}

	int numAparece1Vez = 0;
	int countNum = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (array[i] == array[j]){
				countNum++;
				if (countNum == 2){
					break;
				}
			}
		}
		if (countNum == 1){
			numAparece1Vez = array[i];
			break;
		}
		countNum = 0;
	}
	if (countNum == 0){
		std::cout << -1 << "\n";
	}
	else{
		std::cout << numAparece1Vez << "\n";
	}
	return 0;
}
