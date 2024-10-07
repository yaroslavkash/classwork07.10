#include <iostream>
#include <string>

using namespace std;

/*class Overcoat {
private:
    string type; 
    double price;

public:
    Overcoat() : type(""), price(0.0) {}

    Overcoat(const string& type, double price) : type(type), price(price) {}

    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        if (type == other.type) {
            return price > other.price;
        }
        return false;
    }

    void display() const {
        cout << "type: " << type << ", price: " << price << endl;
    }
};

int main() {
    Overcoat coat1("Mantel", 150.0);
    Overcoat coat2("Mantel", 200.0);
    Overcoat coat3("Jacke", 120.0);

    if (coat1 == coat2) {
        cout << "coat1 und coat2 r the same type" << endl;
    }
    else {
        cout << "coat1 und coat2 r not the same type" << endl;
    }

    if (coat2 > coat1) {
        cout << "coat2 costs more than coat1." << endl;
    }

    coat3 = coat1;
    coat3.display();

    return 0;
}

class Flat {
private:
    double area; 
    double price;

public:

    Flat() : area(0.0), price(0.0) {}


    Flat(double area, double price) : area(area), price(price) {}

    bool operator==(const Flat& other) const {
        return area == other.area;
    }


    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }


    bool operator>(const Flat& other) const {
        return price > other.price;
    }


    void display() const {
        cout << "area: " << area << " m2, price: " << price << " Euro" << endl;
    }
};


int main() {
    Flat flat1(50.0, 150000);
    Flat flat2(60.0, 180000);
    Flat flat3(50.0, 160000);


    if (flat1 == flat3) {
        cout << "flat1 und flat3 have the same area in m2" << endl;
    }
    else {
        cout << "flat1 und flat3 have not the same area in m2" << endl;
    }

    if (flat2 > flat1) {
        cout << "flat2 costs more than flat1." << endl;
    }


    flat3 = flat1;
    flat3.display();

    return 0;
}

 // !!! Це завдання , не дуже знав як робити, брав щось з інтернету
class Fraction {
private:
    int numerator;
    int denominator;

    void reduce() {
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int getGCD(int a, int b) {
        return b == 0 ? a : getGCD(b, a % b);
    }

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denom == 0) throw invalid_argument("not nule");
        reduce();
    }

    Fraction operator+(const Fraction& other) const {
        return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
    }

    Fraction operator-(const Fraction& other) const {
        return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) throw invalid_argument("/ on nule");
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction frac1(3, 4);
    Fraction frac2(2, 5);

    Fraction sum = frac1 + frac2;
    sum.display();

    Fraction difference = frac1 - frac2;
    difference.display();

    Fraction product = frac1 * frac2;
    product.display();

    Fraction quotient = frac1 / frac2;
    quotient.display();

    return 0;
}*/
/// Із цим завданням також були складнощі. Піддивлявся трохи в інеті.
class Complex {
private:
    double real;
    double  random1; 

public:

    Complex(double r = 0, double i = 0) : real(r), random1(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, random1 + other.random1);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, random1 - other.random1);
    }

    Complex operator*(const Complex& other) const {
        double r = real * other.real - random1 * other.random1;
        double i = real * other.random1 + random1 * other.real;
        return Complex(r, i);
    }

    Complex operator/(const Complex& other) const {
        double denom = other.real * other.real + other.random1 * other.random1;
        if (denom == 0) {
            cout << "error dividing on 0" << endl;
            return Complex();
        }
        double r = (real * other.real + random1 * other.random1) / denom;
        double i = (random1 * other.real - real * other.random1) / denom;
        return Complex(r, i);
    }

    void display() const {
        cout << real;
        if (random1 >= 0) cout << " + " << random1 << "i" << endl;
        else cout << " - " << -random1 << "i" << endl;
    }
};

int main() {
    Complex num1(3, 4);
    Complex num2(1, -2);


    Complex sum = num1 + num2;
    cout << "sum: ";
    sum.display();

 
    Complex difference = num1 - num2;
    cout << "difference: ";
    difference.display();

 
    Complex product = num1 * num2;
    cout << "* : ";
    product.display();


    Complex quotient = num1 / num2;
    cout << "quotient: ";
    quotient.display();

    return 0;
}



