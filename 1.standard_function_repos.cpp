class A {
private:
    float _m;
    float _n;
    const int _k = 123;

    static int s_total;
public:
    A() : _k(123) {};
    A(int, int);
    A(const A &);
    A& operator=(const A &);

    virtual ~A();
};

int A::s_total = 3;

int main()
{

    return 0;
}