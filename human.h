#pragma once
#include <string>
#include <sstream>

class human {

public:

	human(std::string last_name, std::string name, std::string second_name) {
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	virtual std::string get_information() {
		std::ostringstream full_information;
		full_information << "Full name: " << this->last_name << " "
			<< this->name << " "
			<< this->second_name << "\n";
		return full_information.str();
	}

private:

	std::string name;
	std::string last_name;
	std::string second_name;
};
