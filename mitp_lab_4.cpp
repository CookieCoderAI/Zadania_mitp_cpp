#include <iostream>

using namespace std;

class student{
protected:
	string imie_nazwisko_ = "NO_NAME";
	unsigned int nr_indeksu_ = 0;	
public:
	string Opis_ = "student grupy"; 

	student(string imie_nazwisko, unsigned int nr_indeksu); 
	
	void printOpis();
	void printDane();
	string getname();
	unsigned int getnr();
};

class starosta : public student{
public:
	string email_ = "no@noemail";
	string Opis_ = "starosta grupy";
	
	starosta(string imie_nazwisko, unsigned int nr_indeksu, string email); 
	void printDane();
};

starosta::starosta(string imie_nazwisko, unsigned int nr_indeksu, string email) : student(imie_nazwisko, nr_indeksu), email_(email){
	cout << "Tworzenie obiektu klasy starosta o nazwie: " << Opis_ << endl;
}

student::student(string imie_nazwisko, unsigned int nr_indeksu) : imie_nazwisko_(imie_nazwisko){
	
	nr_indeksu_ = nr_indeksu;
	cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis(){
	cout << "Opis: " << Opis_ << endl;
}
void student::printDane(){
	cout << " Metoda print Dane klasy bazowej" << endl;
	cout << " Imie nazwisko: " << imie_nazwisko_ << endl;
	cout << " Nr indeksu: " << nr_indeksu_ << endl;
}

void starosta::printDane(){
	cout << " Metoda printDane klasy bazowej" << endl;
	cout << " Imie nazwisko: " << imie_nazwisko_ << endl;
	cout << " Nr indeksu: " << nr_indeksu_ << endl;
	cout << "Email starosty: " << email_ << endl;
}

string student::getname() {
	return imie_nazwisko_;
}
unsigned int student::getnr() {
	return nr_indeksu_;
}


int main(){
	student stud("Jan Kowalski", 7);
	starosta star("Aleksandra Nowak", 999, "mail@nomail.dot"); star.printOpis();
	
	stud.printOpis();
	cout << "Dane:" << stud.getname() << " " << stud.getnr() << endl;
	star.printOpis();
	cout << "Dane:" << star.getname() << " " << star.getnr() << endl;
	star.printDane();
	cout << endl;
	stud.printDane();
}


/*
#include <iostream>

using namespace std;

class student{
public:
	string Opis_;
	
	student(string);
	void printOpis();
};

class starosta : public student {
public:
	starosta(string);
	void printOpis();
	string Opis_ = "starosta grupy - Jakub Tomaszewski";
};

student::student(string opis){
	Opis_ = opis;
	cout << "Tworzenie obiektu klasy student o nazwie: " << opis << endl;
}

starosta::starosta(string opis) : student(opis) {}

void starosta::printOpis() {
	cout << "Opis starosty: " << Opis_ << endl;
}

void student::printOpis(){
	cout << "Opis: " << Opis_ << endl;
}

int main(){
	student stud("student grupy");
	starosta stary("Starosta grupy Jakub Tomaszewski ");

	stud.printOpis();
	stary.printOpis();
}
*/