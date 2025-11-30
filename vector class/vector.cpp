#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point() { x = y = 0; }
	Point(int a, int b) { x = a; y = b; }
	void Print()
	{
		cout << "X: " << x << "Y: " << y << endl;
	}
	friend ostream& operator<<(ostream& os, Point obj);

	bool operator>(int a)
	{
		if (x > a && y > a)
		{
			return true;
		}
		return false;
	}

	bool operator<(int a)
	{
		if (x < a && y < a)
		{
			return true;
		}
		return false;
	}

	Point& operator+=(int a)
	{
		x += a;
		y += a;
		return *this;
	}

	Point operator++(int)
	{
		Point temp = *this;
		x++;
		y++;
		return temp;
	}
};

ostream& operator<<(ostream& os, Point obj)
{
	os << "X: " << obj.x << "\tY: " << obj.y << endl;
	return os;
}


int main()
{
	vector<Point> arr;
	arr.push_back(Point(1, 2));
	arr.push_back(Point(3, 4));
	arr.push_back(Point(5, -6));
	arr.push_back(Point(-7, -8));
	arr.push_back(Point(-9, 10));

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;

	arr.push_back(Point(12, 455));
	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		if (*ptr > 0)
		{
			cout << "cnjvjbvjbvjhb\n";
		}
		else
		{
			cout << "vnjnvjfnb 0\n";
		}
	}

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		if (*ptr < 2)
		{
			cout << "cnjvjbvjbvjhb\n";
		}
		else
		{
			cout << "vnjnvjfnb 0\n";
		}
	}
	cout << endl;

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		*ptr += 10;
	}
	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;

	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		(*ptr)++;
	}
	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;

}