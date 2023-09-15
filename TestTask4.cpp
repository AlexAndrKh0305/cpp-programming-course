#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Вариант 2

	// Базовая реализация
	/*
	int numberOfAttempts;
	std::cout << "Введите количество попыток: ";
	std::cin >> numberOfAttempts;

	int scoreForHigh = std::ceil(numberOfAttempts * 10 * 0.9);
	int scoreForMiddle = std::ceil(numberOfAttempts * 10 * 0.5);

	int totalScore = 0;

	for (int i = 1; i <= numberOfAttempts; i++) {
		double x, y;
		std::cout << "Попытка " << i << ":\n";
		std::cout << "x = ";
		std::cin >> x;
		std::cout << "y = ";
		std::cin >> y;
		std::cout << std::endl;

		if (x * x + y * y <= 1) {
			totalScore += 10;
		} else if (x * x + y * y <= 4) {
			totalScore += 5;
		} else if (x * x + y * y <= 9) {
			totalScore += 1;
		}
	}

	std::cout << "Ваш результат: " << totalScore << "\n";
	if (totalScore >= scoreForHigh) {
		std::cout << "Вы снайпер";
	} else if (totalScore >= scoreForMiddle) {
		std::cout << "Вы стрелок";
	} else {
		std::cout << "Вы новичок";
	}
	std::cout << std::endl;
	*/
	
	int totalScore = 50, currentScore = 0;

	int numberOfAttempts = 0;
	int attemptsForHigh = std::ceil(totalScore / 10.0) + 2;
	int attemptsForMiddle = std::ceil(totalScore / 10.0) + 5;

	std::cout << "Необходимо набрать " << totalScore << " очков\n\n";

	while (currentScore < totalScore) {
		numberOfAttempts++;

		double x, y;
		std::cout << "Попытка " << numberOfAttempts << ":\n";
		std::cout << "x = ";
		std::cin >> x;
		std::cout << "y = ";
		std::cin >> y;
		std::cout << std::endl;

		if (x * x + y * y <= 1) {
			currentScore += 10;
		} else if (x * x + y * y <= 4) {
			currentScore += 5;
		} else if (x * x + y * y <= 9) {
			currentScore += 1;
		}
	}
	
	std::cout << "Ваш результат: " << currentScore << "\n";
	std::cout << "Вы использовали " << numberOfAttempts << " попыток\n";
	if (numberOfAttempts <= attemptsForHigh) {
		std::cout << "Вы снайпер";
	} else if (numberOfAttempts <= attemptsForMiddle) {
		std::cout << "Вы стрелок";
	} else {
		std::cout << "Вы новичок";
	}
	std::cout << std::endl;
	return 0;
}