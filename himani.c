/* 
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

#include<stdio.h>
int main(){

    return 0;
}
 */
 /* #include<stdio.h>
 int main(){
    char name[100];
    printf("enter");
    gets(name);
    printf("%s", name);

    return 0;

 } */

/* #include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
} */
// C program to find the length of string
/* #include <stdio.h>
#include <string.h> */

/* int main()
{
	char Str[1000];
	int i;

	printf("Enter the String: ");
	gets(Str);

	for (i = 0; Str[i] != '\0'; ++i);

	printf("Length of Str is %d", i);

	return 0;
}
 */
 /* #include<stdio.h>
 #include<string.h>

 int main(){
    char name[100];
    printf("enter string\n");
    gets(name);
    strlen(name);
    printf("the length of string is %d", strlen(name));


    return 0;
 } */
 #include<stdio.h>
 int main(){

    return 0;
 }
