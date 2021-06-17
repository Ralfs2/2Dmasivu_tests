#include <iostream>
#include <string>
using namespace std;
int Guess;
int Total;

class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;
public:

	void setValues(string, string,
				string, string,
				string, int, int);

	void askQuestion();
	};

int main(){
	cout << "\n\n\t\t\t\t 2D Masivi"
		<< endl;
	cout << "\nSpied Enter lai saktu"
		<< " testu... " << endl;
	cin.get();

	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	q1.setValues("Kas ir array ?: ", "Cikls",
				"Mainigais", "Masivs",
				"Indekss", 3, 1);
	q2.setValues("Ka sauc masiva mainigo ?: ", "Skaitlis",
				"Elements", "Indekss",
				"Masîva vârds", 2, 1);
	q3.setValues("Ar kadu skaitli pec kartas sakas masivs ?: ", "1",
				"2", "0",
				"-1", 3, 1);
	q4.setValues("No ka sastav divdimensiju masiva elementa indekss : ", "Rindas un kolonnas",
				"Rindas", "Kolonnas",
				"Mainigajiem", 1, 1);
	q5.setValues("Ka pareizi raksta masivu Masivs ar dotiem skaitliem? : ", "int Masivs[2][2]={{2, 3},{3, 4}}",
				"int Masivs(2)(2)={{2, 3},{3, 4}}", "int Masivs[2][2]=((2, 3),(3, 4))",
				"int Masivs(2)(2)=((2, 3),(3, 4))", 1, 1);
	q6.setValues("Kas ir bubble sort? : ", "Meklesanas algoritms",
				"Kartosanas algoritms", "Mainisanas algoritms",
				"Parnesanas algortims", 2, 1);
	q7.setValues("Kam izmanto masivus? : ", "Lai vieglak stradatu ar vertibam",
				"Lai vieglak atrastu mainigos", "Lai viena vetriba saglabatu vairakas vertibas",
				"Visas atbildes", 4, 1);
	q8.setValues("Kurs no apgalvojumiem ir pareizs? : ", "masivus var inicializet, ap katru rindu liekot { , atdalot tas ar komatu, ari katra indeksa elementam jabut atdalitam ar komatu.",
				"masivus var inicializet, ap katru rindu liekot [ , atdalot tas ar komatu, ari katra indeksa elementam jabut atdalitam ar punktu.", "masivus var inicializet, ap katru rindu liekot [ , atdalot tas ar punktu, ari katra indeksa elementam jabut atdalitam ar punktu.",
				"masivus var inicializet, ap katru rindu liekot { , atdalot tas ar komatu, ari katra indeksa elementam jabut atdalitam ar punktu.", 1, 1);
	q9.setValues("Cik ciklus nepieciesams lai izvaditu masivu? : ", "1",
				"2", "3",
				"4", 2, 1);
	q10.setValues("Kurs no apgalvojumiem ir pareizs? : ", "Ja masiva elementam ir viens indekss, to sauc par daudzdimensiju masivu",
				"Ja masiva elementam ir vairak neka viens indekss, to sauc par viendimensiju masivu", "Divu indeksu gadijuma masivu sauc par viendimensiju masivu",
				"Divu indeksu gadijuma masivu sauc par divdimensiju masivu", 4, 1);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();


	cout << "Rezultats = " << Total
		<< " no 10" << endl;

	return 0;
}

void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

void Question::askQuestion()
{
	cout << endl;

	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	cout << "Kada ir tava atbilde ?(Cipars)"
		<< endl;
	cin >> Guess;

	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Pareizi !" << endl;
		Total = Total + Question_Score;
		cout << endl;
	}

	else {
		cout << endl;
		cout << "Nepareizi !" << endl;
		cout << "Pareiza atbilde = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
