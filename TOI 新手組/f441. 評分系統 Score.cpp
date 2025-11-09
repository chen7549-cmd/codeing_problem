#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string id;
    string name;
    int order; 
};
bool compare(Student a, Student b) {
    char collegeA = a.id[8]; 
    char collegeB = b.id[8];
    if (collegeA != collegeB)   return collegeA < collegeB; 
    char degreeA = a.id[0];
    char degreeB = b.id[0];
    if (degreeA != degreeB) {
        return degreeA < degreeB; 
    }
    return a.order < b.order; 
}
int main() {
    int N;
    cin >> N;
    vector<Student> students;
    for (int i = 0; i < N; ++i) {
        Student s;
        cin >> s.id >> s.name;
        s.order = i;
        students.push_back(s);
    }
    sort(students.begin(), students.end(), compare);
    for (int i = 0; i < N; ++i) {
        cout << students[i].id[8] << ": " << students[i].name << endl;
    }
    return 0;
}