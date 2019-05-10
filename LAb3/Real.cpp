#include <iostream>

using namespace std;

class Real {
private:
    float value;

public:
    Real(float v = 0)
    {
        value = v;
    }

    Real operator+(Real& A)
    {
        Real temp;
            temp.value = this->value + A.value;
        return temp;

    }
    Real operator-(Real& A)
    {
        Real temp;
            temp.value = this->value - A.value;
        return temp;

    }
    Real operator*(Real& A)
    {
        Real temp;
            temp.value = this->value * A.value;
        return temp;

    }
    Real operator/(Real& A)
    {
        Real temp;
            temp.value = this->value / A.value;
        return temp;

    }
    void display()
    {
        cout << value;
    }
};
main()
{
    Real a(3);
	Real b(2);
	Real c(4);
	Real cong, tru, nhan, saochep;

	cong = a + b;
	tru = a - b;
	nhan = a * b;
	saochep = a;

	cout << "cong: " << endl;
	cong.display();
	cout << "tru: " <<endl;
	tru.display();
	cout << "nhan: " << endl;
	nhan.display();
	cout << "copy: " <<endl;
	 saochep.display();


}
