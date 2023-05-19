#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void ste_marKs(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    
    void set_marks(float m, float p){
        maths = m;
        physics = p;
    }
    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
    }
};

int main()
{
    Result Aditya;
    Aditya.set_number(4200);
    Aditya.set_marks(68.17, 99.99);
    Aditya.set_score(9);
    Aditya.display();
    return 0;
}