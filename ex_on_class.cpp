#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student
{
private:
    int a, b;
    string str1, str2;

public:
    void set_age(int age) { a = age; };
    void set_standard(int standard) { b = standard; };
    void set_first_name(string first_name) { str1 = first_name; };
    void set_last_name(string last_name) { str2 = last_name; };

    int get_age() { return a; };
    int get_standard() { return b; };
    string get_first_name() { return str1; };
    string get_last_name() { return str2; };

    string to_string()
    {
        stringstream st;
        st << a << "," << str1 << "," << str2 << "," << b;
        return st.str();
    };
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    return 0;

}