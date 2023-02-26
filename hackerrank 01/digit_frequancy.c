#include <stdio.h>
#include <string.h>
// using namespace std;

int main()
{
    char s[1000];
    // cin >> s;
    scanf("%s", s);

    int count = 0;
    // cout << s.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 48 && s[j] <= 57)
            {
                if (s[j] == i + 48)
                {
                    // cout << i << ":" << s[j] << " ";
                    count++;
                }
            }
        }
        // cout << endl;
        // cout << count << " ";
        printf("%d ", count);
        count = 0;
    }
}