#include <iostream>

using namespace std;

double parseGrade(string);

int main() {
    
    double sumCredit = 0, sumGrade = 0;
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string subject, grade;
        double credit;
        
        cin >> subject >> credit >> grade;
                
        double parsedGrade = parseGrade(grade);
        
        sumGrade += (parsedGrade * credit);
        sumCredit += credit;
        
    }
    
    cout << fixed;
    
    cout.precision(2);
    
    // cf. https://www.acmicpc.net/board/view/33031
    double res = (sumGrade / sumCredit) + 0.000000001;
        
    cout << res << endl;

    
    return 0;
}

double parseGrade(string grade) {
    double res;
    
    if (grade == "A+") {
        res = 4.3;
    } else if (grade == "A0") {
        res = 4.0;
    } else if (grade == "A-") {
        res = 3.7;
    } else if (grade == "B+") {
        res = 3.3;
    } else if (grade == "B0") {
        res = 3.0;
    } else if (grade == "B-") {
        res = 2.7;
    } else if (grade == "C+") {
        res = 2.3;
    } else if (grade == "C0") {
        res = 2.0;
    } else if (grade == "C-") {
        res = 1.7;
    } else if (grade == "D+") {
        res = 1.3;
    } else if (grade == "D0") {
        res = 1.0;
    } else if (grade == "D-") {
        res = 0.7;
    } else if (grade == "F") {
        res = 0.0;
    }
    
    return res;
}
