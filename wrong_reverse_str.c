#include<stdio.h>
int my_stringlen(char* str)
{
    int count=0;
    while(*str != '\0')
    {
        count ++;
        str ++;
    }
    return count;
}
void reverse_str(char str[])
{
    int len = my_stringlen(str);
    char tmp = str[0];
    str[0]=str[len-1];
    str[len-1]='\0';
    if(my_stringlen(str+1)>= 2)
    {
        reverse_str(str+1);
    }
    str[len-1]= tmp;

}
/*void reverse_str(char arr[])
{
    int left = 0;
    int right = my_stringlen(arr)-1;
    char tmp;
    while(left<right)
    {
        char tmp = arr[left];
        arr[left]= arr[right];
        arr[right]=tmp;
        left ++;
        right --;
    }
}*/
int main ()
{
    char arr[]="abcdefg";
    reverse_str(arr);
    printf("%s\n",arr);
    return 0;
}
