// #include <iostream>
// using namespace std;
// template <class T, class U>
// class A
// {
//     T x;
//     U y;

// public:
//     void input(T a, U b)
//     {
//         x = a;
//         y = b;
//     }
//     void output()
//     {
//         cout << x;
//     }
// };
// main()
// {

//     A<int, char> a1;
//     a1.input(12, 'a');
//     a1.output();
// }
// main()
// {

//     A<int, char> a1;
//     a1.input(12, 'a');
//     a1.output();
// }

//another program
#include <iostream>
using namespace std;

template <class T>
class Swapp
{
private:
	T mem1, mem2;

public:
	Swapp(T t1, T t2)
	{
		mem1 = t1;
		mem2 = t2;
	}
	void display()
	{
		cout << "mem1 = " << mem1 << " and mem2 = " << mem2 << endl;
	}
	void swapp()
	{
		T temp;
		temp = mem1;
		mem1 = mem2;
		mem2 = temp;
	}
};
int main()
{
	Swapp<int> S1(2, 6);
	Swapp<float> S2(6.7777, 8.5555);
	cout << "Before swapping integer member data  :" << endl;
	S1.display();
	cout << "Before swapping float member data :" << endl;
	S2.display();
	S1.swapp();
	cout << endl;
	S2.swapp();
	cout << "After swapping integer member data :" << endl;
	S1.display();
	cout << "After swapping float member data :" << endl;
	S2.display();
	return 0;
}