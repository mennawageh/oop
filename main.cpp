#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
class rectangle {

private:
	double m_len;
	double m_width;
	double area;
	double perimeter;
public:
	rectangle(int x, int y)
	{
		m_len = x;
		m_width = y;
	}
	double getm_len() {
		return m_len;
	}
	double getm_width() {
		return m_width;
	}
	double getarea() {
		area = m_len * m_width;
		return area;
	}
	double getperimeter() {
		perimeter =2* m_len * m_width;
		return perimeter;
	}
	void print() {
		cout << " m_len = " << m_len <<endl;
		cout << " m_width = " << m_width<<endl;
		cout << "the area =" << getarea() << endl;
		cout << "the perimeter =" << getperimeter() << endl;
	}


};


int main() {
	rectangle r(6,1);
	r.print();

	return 0;
}