#include <iostream>
#include <functional>

class lazy_int
{
public:
    lazy_int(std::function<int()> function) 
        : m_function(function), m_evaluated(false) 
    {
    }

    int value() { Evaluate(); return m_value; }

private:
    void Evaluate()
    {
        if (!m_evaluated)
        {
            m_value = m_function();
            m_evaluated = true;
        }
    }

    std::function<int()> m_function;
    bool m_evaluated;
public: // Ovo treba biti private, zbog demonstracije je public
    int m_value;
};

int area(int a) 
{
    return a * a;
}
    
void print_area(lazy_int area) 
{
    std::cout << "Površina tek sada počinje da se računa..." << std::endl;
    auto a = area.value();
    std::cout << "Površina je: " << a << std::endl;
}

int main()
{
    lazy_int lazy_area([] () { return area(42); });

    std::cout << "Neko izvršavanje" << std::endl;
    std::cout << "Trenutna vrednost m_value: " << lazy_area.m_value << std::endl;

    std::cout << "Površina tek sada počinje da se računa..." << std::endl;
    auto a = lazy_area.value();
    std::cout << "Površina je: " << a << std::endl;

    auto b = lazy_area.value();
    std::cout << "Trenutna vrednost m_value: " << lazy_area.m_value << std::endl;
}
