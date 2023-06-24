using namespace std;

void compareStrings(string str1, string str2)
{
    int result;
 cout << "Enter first string: ";
   cin >>str1;
    cout << "Enter second string: ";
  cin >>str2;

    int i = 0;
    while (str1[i] && str2[i])
    {
        if (str1[i] == str2[i])
        {
            i++;
            continue;
        }
        else
            break;
    }

    if (str1[i] == str2[i]){
      result =0;
    }
    else if (str1[i] > str2[i]){
        result = 1;}
    else
        result= -1;
        cout << result << endl;

}

