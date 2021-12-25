#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <ctime>
#include "Account.hpp"

using namespace std;

class test{
	private:
		int value;
	public:
		typedef test	t;
		test(int value)
		{
			this->value = value;
		}
		void	print_value()
		{
			cout << this->value << endl;
		}
		void	timestamp()
		{
			std::time_t t = std::time(0);
			std::tm *now = std::localtime(&t);

			cout << now->tm_year << now->tm_mon << "_" << now->tm_hour << endl;
		}
};

int main(){
	int arr[] = {42, 10, 71, 4};
	typedef vector<test> test_t;

	test_t tests (arr, arr + 4);
	tests[2].print_value();
	tests[1].timestamp();
}