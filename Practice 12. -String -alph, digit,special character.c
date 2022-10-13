#include<stdio.h>
#include<string.h>

void main()
{
    int i,upper_alpha=0, lower_alpha=0,digit=0, sp_char=0;
    char  s[100];

    printf("Write  something..");
    gets(s);
    printf("You have written ...=\n");
    puts(s);

    for(i=0; i< strlen(s); i++)
    {
        if(s[i]>='a'&& s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            if(s[i]>='a'&& s[i]<='z' )
            {
                            lower_alpha++;
            }
            else if (s[i]>='A' && s[i]<='Z')
            {

                        upper_alpha++;
            }
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            digit++;
        }
        else
        {
            sp_char++;
        }
    }
    printf("%d - Upper case Alphabet...\n",   upper_alpha);
    printf("%d - Lower case Alphabet...\n",    lower_alpha);
    printf("%d - digit...\n", digit);
    printf("%d - Special Character...\n",   sp_char);

}
