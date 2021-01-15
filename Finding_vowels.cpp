// #include <iostream>
// using namespace std;
// main()
// {
//     char name[20];
//     char *ptr;
//     ptr = name;
//     int i = 0, c = 0;
//     cout << "Enter the string";
//     cin >> name;

//     while (*ptr != '\0')
//     {
//         if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
//             c++;
//         i++;
//         ptr++;
//     }
//     cout << endl;
//     cout<< "Length of the string=" << i << endl;
//     cout << "No. of Vowels inside the string=" << c << endl;
//     cout << "No. of consonants inside the string=" << (i - c);
// }

// using switch case
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch[20], *ptr;
    int  c = 0, v = 0,i;
    cout << "enter the string :";
    cin >> ch;
    ptr = ch;
    for (i = 0; ch[i] != '\0'; i++)
    {
        switch (ch[i])
        {
            case 'a':case 'A':
            v++;
            break ;
            case 'e':case 'E':
            v++;
            break ;
            case 'i':case 'I':
            v++;
            break ;
            case 'o':case 'O':
            v++;
            break ;
            case 'u':case 'U':
            v++;
            break ;
            default :
            c++;
        }

    }
    cout << endl;
    cout << "Length of the string=" << i << endl;
    cout << "No. of Vowels =" << v << endl;
    cout << "No. of consonants = " << c;
    return 0;
}
