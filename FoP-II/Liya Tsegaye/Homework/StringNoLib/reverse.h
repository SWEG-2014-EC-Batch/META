using namespace std;

void ReverseString(char str[100])
{
    int i, j, len = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reversed string: " << str << endl;

}