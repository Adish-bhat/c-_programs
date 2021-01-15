// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     double marks;

//  // constructor to initialize marks
//     Student(double m)
//     {
//         marks = m;
//     }
// };
// void calculateAverage(Student s1, Student s2)
// {

//     // calculate the average of marks of s1 and s2
//     double average = (s1.marks + s2.marks) / 2;

//     cout << "Average Marks = " << average << endl;
// }

// int main()
// {
//     Student student1(28), student2(51);
//     calculateAverage(student1, student2);
//     return 0;
// }

// another program
// #include <iostream>
// using namespace std;
// class complex
// {
//     int x, y;

// public:
//     void setvalue(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void getvalue()
//     {
//         cout << endl << "x=" << x << endl << "y=" << y;
//     }
//     friend complex operator-(complex);
// };
// complex operator-(complex c)
// {
//     complex temp;
//     temp.x = -c.x;
//     temp.y = -c.y;
//     return temp;
// }

// int main()
// {
//     complex c1, c2;
//     c1.setvalue(10, -20);
//     cout << endl;
//     c1.getvalue();
//     c2 = -c1;
//     c2.getvalue();
//     return -1;
// }

//same as 2nd but with member function
// #include <iostream>
// using namespace std;
// class practice
// {
// public:
//     int test_number;
//     void display()
//     {
//         cout << test_number;
//     }
//     practice operator+(practice a)
//     {
//         practice temp;
//         temp.test_number = test_number + a.test_number;
//         // test_number = test_number + a.test_number;
//     }
//     // practice(p)
//     // {
//     //     test_number = p;
//     // }
// };

// int main()
// {
//     practice obj1, obj2, obj3;
//     obj1.test_number = 50;
//     obj2.test_number = 100;

//     cout << "\nInitial Values : ";
//     cout << obj1.test_number << " , " << obj2.test_number;

//     obj3 = obj1 + obj2;
//     cout << endl;
//     cout << " The Final Value : ";
//     obj3.display();
// }

//Q4 :concatination of two strings
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class string
{
public:
    char a[100];
    void accept()
    {
        cout << "enter string :" << endl;
        cin >> a;
    }
    void display()
    {
        cout << a;
    }
    string operator+(string x)
    {
        string s;
        strcat(a, x.a);
        strcpy(s.a, a);
        return s;
    }
};
int main()
{
    string str1, str2, str3;
    str1.accept_string();
    str2.accept_string();
    cout << "\n\n First String is     :  ";
    str1.display_string(); //Displaying First String
    cout << "\n\n Second String is     :  ";
    str2.display_string();
    str3 = str1 + str2;
    cout << "\n\n Concatenated String is    :  ";
    str3.display_string();
    return 0;
}

//Q5 :
#include <iostream>
#include <fstream>
using namespace std;

/*int main()
{
    ofstream myfile("file.text");
    myfile << "Writing to file using fstream constructor!" << endl;
    myfile.close ();
    return 0;
} */
int main()
{
    ofstream myfile;
    myfile.open("file.text");
    myfile << "Writing to file using fstream open()!" << endl;
    myfile.close();
    return 0;
}