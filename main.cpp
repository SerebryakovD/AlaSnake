#include<iostream>

using namespace std;

int main() {
	int map[10][10] = {
		{1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
	int posX = 0;
	int posY = 0;
	bool isRun = true;
	char move;

	while (isRun) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cout << map[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl << "enter move direction: ";
		cin >> move;
		cout << endl;

		map[posY][posX] = 0;
		switch (move) {
			case 'u':
				if (posY != 0) posY--;
				break;
			case 'd':
				if (posY != 9) posY++;
				break;
			case 'l':
				if (posX != 0) posX--;
				break;
			case 'r':
				if (posX != 9) posX++;
				break;
			case 's':
				isRun = false;
				continue;
				break;
			default:
				cout << "Error!!!";
				isRun = false;
				continue;
				break;
		}
		map[posY][posX] = 1;
		system("cls");
	}

	return 0;
}