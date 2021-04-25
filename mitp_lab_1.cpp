#include <iostream>
#include <cstring>

using namespace std;
/*-----------------------------------------program 1-----------------------------------------*/
// Tworzenie obiektow klasy (tu: pracownik)
class pracownik {
public:
	char name_surname[64];
	long employee_id;
	float salary;

	void inf_o_prac(void) {	//wypisuje na ekran wszystkie informacje o pracowniku
		cout << "Imie i nazwisko: " << name_surname << endl;
		cout << "Identyfikator: " << employee_id << endl;
		cout << "Pensja: " << salary << endl;
	};
};
/*-----------------------------------------koniec programu 1-----------------------------------------*/


/*-----------------------------------------program 2-----------------------------------------*/
class psy {
public:
	char breed[30];
	int avg_weight;
	int avg_height;
	void inf_o_psie(void); //wypisuje na ekran wszystkie informacje o psie
};

void psy::inf_o_psie(void) {
	cout << "Rasa: " << breed << endl;
	cout << "Srednia waga: " << avg_weight << endl;
	cout << "Srednia wysokosc: " << avg_height << endl;
}
/*-----------------------------------------koniec programu 2-----------------------------------------*/


/*-----------------------------------------program 3-----------------------------------------*/
class pracownik2{
public:
	int wprowadz(const char*, long, float); //Ustawia wszystkie prywatne pola klasy pracownik2
	void inf_o_prac(void); //wypisuje na ekran wszyskie pola klasy 
	int zmien_pensje(float); //zmienia wartość pola salary na wartość nie większą niż 15000
	long podaj_id(void); // zwraca numer identyfikacyjny pracownika
private:
	char name_surname[64];
	long employee_id;
	float salary;
};
int pracownik2::wprowadz(const char* nazwisko_prac, long id_prac, float salary_prac) {
	strcpy_s(name_surname, nazwisko_prac);
	employee_id = id_prac;
	salary = salary_prac;
	return(0);
}
void pracownik2::inf_o_prac(void) {
	cout << "Imie i nazwisko: " << name_surname << endl;
	cout << "Identyfikator: " << employee_id << endl;
	cout << "Zarobki: " << salary << endl;
}
int pracownik2::zmien_pensje(float nowa_salary) {
	if (nowa_salary < 15000) {
		salary = nowa_salary;
		return(0);
	}
	else
		return(-1);
}
long pracownik2::podaj_id(void) {
	return (employee_id);
}
/*-----------------------------------------koniec programu 3-----------------------------------------*/

/*-----------------------------------------program 4-----------------------------------------*/
class pracownik3{
public:
	pracownik3(const char*, long, float);
	void inf_o_prac(void); //Wypisuje na ekran informacje wszysktie pola obiektu klasy
	//int zmien_pensje(float); // To do: napisać funkcję zmieniającą pensję
	//long podaj_id(void); //To do: napisać funkcję wypisującją id pracownika
private:
	char name_surname[64];
	long employee_id;
	float salary;
};

pracownik3::pracownik3(const char* name_surname, long ident_prac, float salary) {
	strcpy_s(pracownik3::name_surname, name_surname);
	pracownik3::employee_id = ident_prac;
	if (salary < 15000)
		pracownik3::salary = salary;
	else
		pracownik3::salary = 0.0;
}

void pracownik3::inf_o_prac(void) {
	cout << "Imie i nazwisko: " << name_surname << endl;
	cout << "Identyfikator: " << employee_id << endl;
	cout << "Zarobki: " << salary << endl;
}
/*-----------------------------------------koniec programu 4-----------------------------------------*/


/*-----------------------------------------program 5-----------------------------------------*/
class pracownik4{
public:
	pracownik4(const char*, long, float); //konstruktor klasy, ustawia wszystkie pola podczas tworzenia obiektu
	~pracownik4(void); // destruktor klasy, zwalnia pamięć i wypisuje informację o usunięciu obiektu
	void inf_o_prac(void); //wypisuje na ekran wszystkie informacje o pracowniku
	//int zmien_pensje(float); To do: napisać funkcję zmieniającą pensję
	//long podaj_id(void); To do: napisać funkcję wypisującą id pracownika
private:
	char name_surname[64];
	long employee_id;
	float salary;
};
pracownik4::pracownik4(const char* name_surname, long ident_prac, float
	salary) {
	strcpy_s(pracownik4::name_surname, name_surname);
	pracownik4::employee_id = ident_prac; 
		if (salary < 15000)
			pracownik4::salary = salary;
		else
			pracownik4::salary = 0.0;
}
pracownik4::~pracownik4(void) {
	cout << "Usuwam obiekt: " << name_surname << endl;
}
void pracownik4::inf_o_prac(void) {
	cout << "Imie i nazwisko: " << name_surname << endl;
	cout << "Identyfikator: " << employee_id << endl;
	cout << "Zarobki: " << salary << endl;
}
/*-----------------------------------------koniec programu 5-----------------------------------------*/

int main(void) {
	/*-----------------------------------------program 1-----------------------------------------*/
	pracownik kierownik, sekretarka, programista;

	strcpy_s(kierownik.name_surname, "Jan Kowalski");

	kierownik.employee_id = 101;
	kierownik.salary = 8400;

	strcpy_s(sekretarka.name_surname, "Balbina Wykrot");

	sekretarka.employee_id = 1234567;
	sekretarka.salary = 3000;

	strcpy_s(kierownik.name_surname, "Jan Zietek");

	programista.employee_id = 420;
	programista.salary = 14000;

	kierownik.inf_o_prac();
	sekretarka.inf_o_prac();
	programista.inf_o_prac();
	/*-----------------------------------------koniec programu 1-----------------------------------------*/

	/*-----------------------------------------program 2-----------------------------------------*/
	psy balbina, fred, cookie;

	strcpy_s(balbina.breed, "Dalmatynczyk");

	balbina.avg_weight = 58;
	balbina.avg_height = 24;

	strcpy_s(fred.breed, "Owczarek szetlandzki");

	fred.avg_weight = 22;
	fred.avg_height = 15;

	strcpy_s(cookie.breed, "Husky");

	cookie.avg_weight = 60;
	fred.avg_height = 27;

	balbina.inf_o_psie();
	fred.inf_o_psie();
	cookie.inf_o_psie();
	/*-----------------------------------------koniec programu 2-----------------------------------------*/


	/*-----------------------------------------program 3-----------------------------------------*/
	pracownik2 informatyk;
	if (informatyk.wprowadz("Jan Kowalski", 101101, 4000) == 0) {
		cout << "Wartosci przypisane skladowym dla pracownika:" << endl;
		informatyk.inf_o_prac();
	}
	if (informatyk.zmien_pensje(5000.00) == 0) {
		cout << "---------------- \nNowa pensja pracownika" << endl;
		informatyk.inf_o_prac();
	}
	else
		cout << "Nieporawna pensja!" << endl;
	/*-----------------------------------------koniec programu 3-----------------------------------------*/
	

	/*-----------------------------------------program 4-----------------------------------------*/
	pracownik3 informatyk2("Jan Kowalski", 101101, 4000.0), programista2("Jan Zietek", 4200, 15000);
	informatyk2.inf_o_prac();
	programista2.inf_o_prac();
	/*-----------------------------------------koniec programu 4-----------------------------------------*/


	/*-----------------------------------------program 5-----------------------------------------*/
	pracownik4 informatyk3("Jan Kowalski", 101101, 4000.0), programista3("Filip Baran", 4205, 7000);
	informatyk3.inf_o_prac();
	programista3.inf_o_prac();
	/*-----------------------------------------koniec programu 5-----------------------------------------*/
}



