#include <iostream>
#include <math.h>

using namespace std;
/*----------------------------------zadanie 1----------------------------------*/
class Circle {
public:
	float radius_;
};
/*----------------------------------koniec zadania 1----------------------------------*/


/*----------------------------------zadanie 2----------------------------------*/
class Circleconstr {
public:
	float radius_;

	Circleconstr(float radius) {
		radius_ = radius;
	}
	Circleconstr() {
		radius_ = 1.0f;
	}
};
/*----------------------------------koniec zadania 2----------------------------------*/


/*----------------------------------zadanie 3----------------------------------*/
class Circleptr {
public:
	float* radius_;

	Circleptr(float radius) {
		radius_ = new float;
		*(radius_) = radius;
		cout << "Konstruktor"<<endl;
	}
	Circleptr() {
		radius_ = new float;
		*(radius_) = 1.0f;
	}
	~Circleptr() {
		delete radius_;
		cout << "Destruktor"<<endl;
	}

};
/*----------------------------------koniec zadania 3----------------------------------*/

/*----------------------------------zadanie 4----------------------------------*/
class Circlemet {
public:
	float radius_;

	Circlemet(float radius) {
		radius_ = radius;
	}
	Circlemet() {
		radius_ = 1.0f;
	}
	float circumference();
	float area();
};

float Circlemet::circumference() {
	return 2 * radius_ * 3.14f;
}
float Circlemet::area() {
	return (radius_ * radius_ * 3.14f);
}
/*----------------------------------koniec zadania 4----------------------------------*/


/*----------------------------------zadanie 5 i 6----------------------------------*/
class Circle5 {
private:
	float radius_;
	float area_;
	float circumference_;
public:
	Circle5(float);
	float circumference();
	float area();
	void set_radius(float);
	float get_radius();
};

Circle5::Circle5(float radius) : radius_(radius){ area_ = area();}
float Circle5::circumference() { return 2 * radius_ * 3.14f;}
float Circle5::area() {	return (radius_ * radius_ * 3.14f);}
void Circle5::set_radius(float radius) { radius_ = radius; }
float Circle5::get_radius() { return radius_; }

/*----------------------------------koniec zadania 5 i 6----------------------------------*/


int main() {
	/*----------------------------------zadanie 1----------------------------------*/
	Circle c1, c2;
	c1.radius_ = 1.0f;
	c2.radius_ = 5.7f;
	cout << "Promien c1: " << c1.radius_ << ", Promien c2: " << c2.radius_ << endl;
	/*----------------------------------koniec zadania 1----------------------------------*/


	/*----------------------------------zadanie 2----------------------------------*/
	Circleconstr cstr1(3.0f), cstr2;
	cout << "Promnien cstr1: " << cstr1.radius_ << ", Promien cstr2: " << cstr2.radius_ << endl;
	/*----------------------------------koniec zadania 2----------------------------------*/


	/*----------------------------------zadanie 3----------------------------------*/
	Circleptr cptr1(2.5f);
	/*----------------------------------koniec zadania 3----------------------------------*/


	/*----------------------------------zadanie 4----------------------------------*/
	Circlemet cmet1(2.5f);
	cout << "Obwod: " << cmet1.circumference() << "    Pole: " << cmet1.area() << endl;
	/*----------------------------------koniec zadania 4----------------------------------*/


	/*----------------------------------zadanie 5 i 6----------------------------------*/
	Circle5 c5(5.0f);
	cout << "Promien przed zmiana: " << c5.get_radius() << endl;
	c5.set_radius(3.5f);
	cout << "Promien po zmianie: " << c5.get_radius() << endl;
	
	/*----------------------------------koniec zadania 5 i 6----------------------------------*/

	return 0;
}