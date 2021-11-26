#include <cs50.h>
#include <string.h>
int main ()
{
    string s = get_string("Enter array (without space): ");
    for(int i = strlen(s); i > 0; i--)
    {
        printf("%c", s[i]);
    }
    return 0;
}
