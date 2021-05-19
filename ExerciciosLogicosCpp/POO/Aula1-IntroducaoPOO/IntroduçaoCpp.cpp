#include <iostream>
#include <iomanip>
#include <ctime>



using namespace std;
int main()
{
std::time_t t = std::time(nullptr);
std::tm tm = *std::localtime(&t);
std::stringstream buffer;
buffer << std::put_time(&tm, "%d/%m/%Y");
cout << buffer.str();
}
