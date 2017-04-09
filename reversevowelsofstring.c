char* reverseVowels(char* s)
{
int i,j;
char temp;
j=strlen(s)-1;
i=0;

for(;i!=j && i<j;)
{
if(s[i]=='a' || s[i]=='e' || s[i] == 'i' ||s[i] == 'o' || s[i] == 'u'|| s[i]=='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U')
    {
        for(;j!=i && j>i;)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j] == 'o' || s[j]=='u'
                 || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j] == 'O' || s[j]=='U')
            {
                temp = s[j];
                s[j]=s[i];
                s[i]=temp;
                j--;
                break;
            }
            j--;
        }
    }
    i++;
}
return s;
}