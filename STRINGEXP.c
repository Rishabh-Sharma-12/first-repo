#include<stdio.h>
#include<string.h>
void search(char* pat, char* txt)
{
    long p = strlen(pat);//Length of pattern
    long t = strlen(txt);//Length of text
 
    for (int i = 0; i <= t - p; i++) {
        int j;
 
        // For current index i, check for pattern match
        for (j = 0; j < p; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }
        if (j== p) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
            printf("Pattern found at index %d \n", i);
        }
    }
}
int main(void)
{
    char txt[] = "HI mera naam rishabh sharma hai";
    char pat[] = "rishab";
    // Function call
    search(pat, txt);

}