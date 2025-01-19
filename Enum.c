#include <stdio.h>

// declaration on enum
enum textEditor
{
    BOLD = 5,
    ITALIC,
    UNDERLINE = 9
};

int main()
{
    // Initializing enum variable
    enum textEditor feature = ITALIC;
    printf("Selected feature is %d\n", feature);

    feature = UNDERLINE;
    printf("Selected feature is %d\n", feature);

    feature = BOLD;
    printf("Selected feature is %d\n", feature);

    return 0;
}
