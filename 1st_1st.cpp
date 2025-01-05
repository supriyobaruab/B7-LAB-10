#include <iostream>
using namespace std;

struct Person
{
    int citizenship;
    int age;
};
void func(struct Person p);
int main()
{
    struct Person p;
    p.citizenship = 1;
    p.age = 27;
    func(p);
    return 0;
}
void func(struct Person p)
{
    cout << " Person citizenship : " << p.citizenship << endl;
    cout << " Person age :" << p.age;
}
