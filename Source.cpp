#include<iostream>
#define SIZE 70

using namespace std;

class Safearray {
	int l[SIZE];
public:
	void setter(int data, int pos);
	int getter(int pos);
	int& operator[](int pos);
};
void Safearray::setter(int data, int pos)
{
	if (pos >= 0 && pos < SIZE)
	{
		l[pos] = data;
	}
	else
		cout << "\n Index Out Of Bound ... !!!\n";
}
int Safearray::getter(int pos)
{
	if (pos >= 0 && pos < SIZE)
		return l[pos];
	else
		cout << "\n Index Out Of Bound ... !!!\n";
}

int& Safearray::operator[](int pos)
{
	if (pos >= 0 && pos < SIZE)
		return l[pos];
	else
		cout << "\n Index Out Of Bound ... !!!\n";
}
int main()
{
	Safearray sa;
	sa.setter(100,0);
	cout << sa.getter(0) << endl;

	sa[1] = 200; // setter
	int n = sa[1]; // getter
	cout << n << endl;

}












