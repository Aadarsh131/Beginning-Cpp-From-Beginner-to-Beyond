// Class  templates
#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "Array.h"

// Template classes(or structs) are typically completely contained in header files, because technically, the templates are kind of like the declaration
// So, we would have the template class in Item.h and no Item.cpp file(there might be some problems that can occur if we use create .cpp for the templates, misc topic) would be used
template <typename T>
class Item {
private:
	std::string name;
	T value;
public:
	Item(std::string name, T value) : name{ name }, value{ value }
	{}
	std::string get_name() const { return name; }
	T get_value() const { return value; }
};

template <typename T1, typename T2>
struct My_Pair {
	T1 first;
	T2 second;
};

int main() {

	Item<int> item1{ "Frank", 100 };
	std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

	Item  <std::string> item2{ "Frank", "Professor" };
	std::cout << item2.get_name() << " " << item2.get_value() << std::endl;

	Item <Item<std::string>> item3{ "Frank",  {"C++", "Professor"} };
	std::cout << item3.get_name() << " "
		<< item3.get_value().get_name() << " "
		<< item3.get_value().get_value() << std::endl;

	std::cout << "\n================================" << std::endl;
	std::vector<Item<double>> vec{};
	vec.push_back(Item<double>("Larry", 100.0));
	vec.push_back(Item<double>("Moe", 200.0));
	vec.push_back(Item<double>("Curly", 300.0));

	for (const auto& item : vec) {
		std::cout << item.get_name() << " " << item.get_value() << std::endl;
	}

	std::cout << "\n================================" << std::endl;
	My_Pair <std::string, int> p1{ "Frank", 100 };
	My_Pair <int, double> p2{ 124, 13.6 };

	std::cout << p1.first << ", " << p1.second << std::endl;
	std::cout << p2.first << ", " << p2.second << std::endl;

	std::cout << "\n==================Tried to implement some complex(complex, for a beginner me) pair================" << std::endl;
	std::vector<Item<Item<int>>> vec1{};
	std::pair<std::string, My_Pair<int, double>> pair1;
	vec1.push_back(Item<Item<int>>{"aadarsh", { "atul", 30 }});
	std::pair<std::pair<std::string, My_Pair<int, double>>, std::vector<Item<Item<int>>>> utility_pair;

	pair1.first = "Why am I doing this";
	pair1.second = My_Pair<int, double>{ 1,4.5 };
	utility_pair.first = pair1;
	utility_pair.second = vec1;

	for (const auto& item : utility_pair.second) {
		std::cout << item.get_value().get_name() << std::endl;
	}

	std::cout << "\n================================UserDefinedArray==================================" << std::endl;
	Array<int, 4> arr;
	arr.fillAllWith(90);
	arr[1] = 33;
	arr.getValues();
	std::cout << "Value from the index: " << arr[3] << std::endl;

	Array < std::string, 10 > arr1{ "start" };
	arr1[2] = "cool";
	arr1.getValues();
	std::cout << "Value from the index: " << arr1[2] << std::endl;

	return 0;
};


//utility_pair.first(vec1.push_back({ "aadarsh",{"atul","shah"} }));
