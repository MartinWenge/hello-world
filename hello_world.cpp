#include <iostream>
using namespace std;


template<int idx = 0>
void print_step(const char * arr)
{
	cout << (3-idx)[arr];
	print_step<idx+1>(arr);
}

template<>
void print_step<3>(const char * arr)
{
	cout << 0[arr];
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
