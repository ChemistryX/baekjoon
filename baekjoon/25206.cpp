#include <iostream>

using namespace std;

double parseGrade(string);

int main() {
    
    int sumPnpCredit = 0;
    double sumCredit = 0, sumGrade = 0;
    
    for (int i = 0; i < 20; i++) {
        string subject, grade;
        double credit;
        
        cin >> subject >> credit >> grade;
        
        if (grade == "P") sumPnpCredit += credit;
        
        double parsedGrade = parseGrade(grade);
        
        sumGrade += (parsedGrade * credit);
        sumCredit += credit;
        
    }
        
    cout << sumGrade / (sumCredit - sumPnpCredit) << endl;

    
    return 0;
}

double parseGrade(string grade) {
    double res;
    
    if (grade == "A+") {
        res = 4.5;
    } else if (grade == "A0") {
        res = 4.0;
    } else if (grade == "B+") {
        res = 3.5;
    } else if (grade == "B0") {
        res = 3.0;
    } else if (grade == "C+") {
        res = 2.5;
    } else if (grade == "C0") {
        res = 2.0;
    } else if (grade == "D+") {
        res = 1.5;
    } else if (grade == "D0") {
        res = 1.0;
    } else if (grade == "F" || grade == "P") {
        res = 0.0;
    }
    
    return res;
}
