#include <stdio.h>
int main()
{
    const int userName = 123;
    const int password = 123;
    int userName_ip, password_ip;
    printf("Enter UserName & Password\n");
    scanf("%d%d", &userName_ip, &password_ip);
    if(userName == userName_ip &&password == password_ip)
    {
        printf("User is authorized");
    }
    else
    {
        printf("User is not authorized");
    }
    return 0;
}

