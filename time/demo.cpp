#include<iostream>
using namespace std;
class box
{
	int l, h;
public:
	box(): l(2),h(3){ }
	box(const reference& a)l(a.l),h(a.h){ }
	void display()
	{
		cout << l, y;
	}

};
int main()
{
	box b1;
	box b2(b1);
	b2.display();

}