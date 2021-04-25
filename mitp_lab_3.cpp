#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

class Vector {
// public: do zad 6
	double data_[3] = { 0, 0, 0 };
public:
	int dimension_;

	Vector(double);
	Vector(double, double);
	Vector(double, double, double);

	Vector operator + (Vector& rhs) {
		return Vector(
			this->data_[0] += rhs.data_[0],
			this->data_[1] += rhs.data_[1],
			this->data_[2] += rhs.data_[2]);
	}

	void write();
	void write(Vector);
	
	friend double length(Vector);
};	

Vector::Vector(double element1)
{
	cout << "\nTworzenie obiektu klasy Vector w przestrzeni R1" << endl;
	dimension_ = 1;
	data_[0] = element1;
}
Vector::Vector(double elem1, double elem2){
	cout << endl <<"Tworzenie obiektu klasy Vector w przestrzeni R2" << endl;
	dimension_ = 2;
	data_[0] = elem1;
	data_[1] = elem2;
}
Vector::Vector(double elem1, double elem2, double elem3) {
	cout << endl << "Tworzenie obiektu klasy Vector w przestrzeni R3" << endl;
	dimension_ = 3;
	data_[0] = elem1;
	data_[1] = elem2;
	data_[2] = elem3;
}

void Vector::write() {
	cout << "Vector: ( ";
		for (int i = 0; i < dimension_; i++)
			cout << data_[i] << " ";
		cout << ")" << endl;
}
void Vector::write(Vector v) {
	cout << "Vector: ( ";
	for (int i = 0; i < v.dimension_; i++)
		cout << data_[i] << " ";
	cout << ")" << endl;
}

double length(Vector v) {
	return sqrt(v.data_[0] * v.data_[0] + v.data_[1] * v.data_[1] + v.data_[2] * v.data_[2]);
}

double length(double* arr) {
	return sqrt(arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2]);
}

/* do zadania 6
Vector operator + (Vector& lhs, Vector& rhs){
	Vector ans( lhs.data_[0] += rhs.data_[0],
				lhs.data_[1] += rhs.data_[1],
			    lhs.data_[2] += rhs.data_[2]);
	return ans;

*/

int main()
{
	Vector  r1(1.0),
			r2(1.0, 2.0),
			r3(1.0, 2.0, 3.0), 
			r5(1.0, 2.0, 3.0);
	double  r4[3] = { 3.0, 3.0, 3.0 };
	cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
	cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
	cout << "Obiekt klasy Vector o wymiarze:" << r3.dimension_ << endl;

	r2.write();
	r2.write(r3);
	
	cout << "Length: " << length(r3) << endl;
	cout << "Length ptr: " << length(r4);

	(r3 + r5).write();
}
