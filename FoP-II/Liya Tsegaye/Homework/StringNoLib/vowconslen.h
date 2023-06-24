using namespace std;
void VowelConsCount(char str[150])
    {
        int vowels, consonants,length  = 0;
     cout << "Enter a string: ";
     cin >> str;

        for(int i = 0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonants;
        }
    }
    
   

	for(int i=0;str[i]!='\0';++i)
	{
	length++;
	}
	
	 cout << "The Length of the string is " <<length << " characters" << endl;
    cout << "The consonant count is " << consonants << endl;
    cout << "The vowel count is " << vowels << endl;
 
}

   
    
