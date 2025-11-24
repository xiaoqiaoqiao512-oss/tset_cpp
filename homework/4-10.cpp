#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y = 1970, int m = 1, int d = 1) : year(y), month(m), day(d) {}

    Date(const Date& other) {
        year = other.year;
        month = other.month;
        day = other.day;
    }

    inline void showDate() const {
        cout << year << "-" << month << "-" << day;
    }

    void inputDate() {
        cout << "输入年月日:";
        cin >> year >> month >> day;
    }
};

class Person {
private:
    string id;        
    string gender;    
    string identity;  
    Date birth;       

public:
    Person(string id = "0000", string gender = "未知",
           string identity = "无", Date birth = Date())
           : id(id), gender(gender), identity(identity), birth(birth) {
        cout << "Person 构造函数";
    }

    Person(const Person& p)
        : id(p.id), gender(p.gender), identity(p.identity), birth(p.birth) {
        cout << "Person 复制构造函数";
    }
    ~Person() {
        cout << "Person 析构函数";
    }


    void input() {
        cout << "编号: ";
        cin >> id;
        cout << "性别: ";
        cin >> gender;
        cout << "身份证号: ";
        cin >> identity;
        cout << "出生日期: ";
        birth.inputDate();
    }

    inline void show() const {
        cout << "编号: " << id << "性别: " << gender
             << "\n身份证号: " << identity << "出生日期: ";
        birth.showDate();
        cout << endl;
    }
};


int main() {
    Person p1;
    cout << "请录入" << endl;
    p1.input();

    cout << "人员信息" << endl;
    p1.show();

    cout << "复制构造" << endl;
    Person p2 = p1;
    p2.show();

    return 0;
}
