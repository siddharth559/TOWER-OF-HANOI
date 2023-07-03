#include<stdio.h>
#include<stdlib.h>

int lens(char *s);                                              //length of string
char *concat(char *a1, char *a2);                               //concat two strings
int instring(char* found, char *parent);                        //check if string named found is there in the 
int find(char *found, char *parent);                            //finds the first index of string named found in parent returns -1 if not found
char *replace(char* child, char *parent, char *by_child);       //replace child string in the parent string (Under development)
char *slice(char *parent, int start, int end);                  //slices the list from start index to end index(not include)

typedef struct{
    char * str;
    int length;
}string;

string STRING(char *inp)
{
    static string ret;
    ret.length = lens(inp);
    //ret.str = inp;  can cause errors
    ret.str = malloc(ret.length+1);
    int i =0;
    for(;i<ret.length;i++) ret.str[i] = inp[i];
    ret.str[i] = '\0';
    //int i = 0;
    //for(; inp[i];i++)
    return ret;
}
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
/*int main()
*{
*    char a[] = "hello";
*    char b[] = "12321 hello world hello sam";
*    char *repl = replace(a,b,"was");
*    char *sl = slice(b,4,9);
*    printf("output: %s\n",repl);
*    printf("slice: %s\n",sl);
*    printf("%s\n",concat(a,b));
*    printf("%s\n",replace("world",b,"niel"));
}*/
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////

int lens(char *s)
{
    int i = 0;
    for(;s[i];i++);
    return i;
}
char *concat(char *a1, char *a2)
{
    char * ret1 = malloc(lens(a1)+lens(a2)+1);
    int i;
    for(i=0; a1[i]; i++) *(ret1 + i) = a1[i];
    int j = i;
    for(; a2[i-j]; i++) *(ret1 +i) = a2[i-j];
    *(ret1 +i) = '\0';
    return ret1;
}
int instring(char* found, char *parent)
{
    int i = 0;
    int flag = 0;
    int count = 0;
    for(; i<lens(parent);i++)
    {
        if (count == lens(found)) return 1;
        if (found[count] == parent[i])
        {
            flag = 1;
            count += 1;
        }
        else if (found[count] != parent[i])
        {
            flag = 0;
            count = 0;
        }
        //printf("%d", count);                     //for checking
    }
    return 0;
}
int find(char *found, char *parent)
{
    int i = 0;
    int flag = -1;
    int count = 0;
    for(; i<lens(parent);i++)
    {
        if (count == lens(found)) return flag;
        if (found[count] == parent[i])
        {
            flag = (flag == -1) ? i : flag;
            count += 1;
        }
        else if (found[count] != parent[i])
        {
            flag = -1;
            count = 0;
        }
        //printf("%d", count); //for checking
    }
    return -1;
}
char *slice(char *parent, int start, int end)
{
    char *ret2 = malloc((end-start)+1);
    int i;
    for(i=start;i<end;i++)
    {
        *(ret2 + i-start) = parent[i];
    }
    *(ret2 +i - start) = 0;
    return ret2;
}
char *replace(char* child, char *parent, char *by_child)
{
    static char ret3;
    int first_ind = find(child, parent);
    int final_old = lens(child);
    int final_new = lens(by_child);
    int i = 0;

    for (; i<first_ind;i++) *(&ret3+i) = parent[i];
    for (; i<first_ind+final_new; i++) *(&ret3+i) = by_child[i-first_ind];
    for (; parent[i-final_new+final_old]; i++) *(&ret3+i) = parent[i+final_old-final_new];
    *(&ret3 +i) = '\0';
    return &ret3;


}
