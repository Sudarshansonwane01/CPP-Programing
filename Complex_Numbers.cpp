#include <iostream>
using namespace std;

class complex
{
    int real, img;
    char part;

public:
    void display();
    void read();
    void add(complex);
    void subt(complex);
    void multiply(complex);
    void divide(complex);
    void conjugate();
};

void complex::add(complex c1)
{
    complex sum;
    sum.real = real + c1.real;
    sum.img = img + c1.img;
    cout << "Sum is : ";
    sum.display();
}

void complex::subt(complex c1)
{
    complex diff;
    diff.real = real - c1.real;
    diff.img = img - c1.img;
    cout << "Difference is :";
    diff.display();
}

void complex::multiply(complex c1)
{
    complex product;
    product.real = (real * c1.real) - (img * c1.img);
    product.img = (img * c1.real) + (real * c1.img);
    cout << "product is : ";
    product.display();
}

void complex::conjugate()
{
    complex conj;
    conj.real = real;
    conj.img = -img;
    cout << "Complex Conjugate is : ";
    conj.display();
}

void complex::divide(complex c)
{
    complex Div;
    Div.real = (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img);
    Div.img = (img * c.real + real * c.img) / (c.real * c.real + c.img * c.img);
    Div.display();
}

void complex::display()
{
    if (img > 0)
        cout << real << "-i" << img << endl;
    else
        cout << real << "i" << img << endl;
}

void complex ::read()
{
    cout << "Enter Complex Number: ";
    cin >> real >> part >> img >> part;
    //     4       +       3      i
}

int main()
{
    complex c1, c2;
    c1.read();
    c2.read();
    c2.add(c1);
    c2.subt(c1);
    c2.multiply(c1);
    c2.divide(c1);
    c2.conjugate();

    return 0;
}
