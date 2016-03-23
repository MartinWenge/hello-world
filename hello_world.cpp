#include <iostream>
using namespace std;


template<int idx = 0>
void print_step(const char * arr)
{
	print_step<idx+1>(arr+1);
	cout << *arr;
}

template<>
void print_step<3>(const char * arr)
{
	cout << *arr;
}

void print() {}

template<typename First, typename ...Args>
void print(First first, Args... args)
{
	print_step(reinterpret_cast<char*>(&first));
	print(args...);
};

int main() 
{
	print('hell', 'o wo', 'rld!', 0);
	
	return 0;
}
