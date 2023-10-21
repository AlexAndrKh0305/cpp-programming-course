#include <iostream>
#include <map>

struct StudentGrade {
	std::string name;
	char grade;
};

int main() {

	StudentGrade studentGrade1 = { "Alex", 'A' };
	StudentGrade studentGrade2 = { "Ben", 'B' };
	StudentGrade studentGrade3 = { "Alex", 'C' };

	std::map<std::string, char> grades;

	grades[studentGrade1.name] = studentGrade1.grade;
	grades[studentGrade2.name] = studentGrade2.grade;
	grades[studentGrade3.name] = studentGrade3.grade;

	for (auto grade : grades) {
		std::cout << grade.first << " " << grade.second << "\n";
	}
	return 0;
}