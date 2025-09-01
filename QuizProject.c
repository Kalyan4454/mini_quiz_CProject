#include<stdio.h>
#include <stdlib.h>
    // Total Check For correct and incorrect
    void check(int ans[],int answers[],int *correct,int *incorrect)
    {
        int k = 1;
        int i;
        for(i=0;i<10;i++)
        {
            if(ans[i] == answers[i])
            {
            printf("%d. Correct answer\n",k);
            (*correct)++;
            }
            else
            {
            printf("%d. Incorrect answer --> Correct answer is %d\n",k,answers[i]);
            (*incorrect)++;
            }
            k = k+1;
        }
    }
    // Final Output 
    void final(int ans[],int answers[])
    {
    	int correct = 0,incorrect = 0;
       printf("\n====================================\n");
       printf("\n\t\t\t\t\t*********** Final Results **********\t\t\t\t\t\n\n");
       check(ans,answers,&correct,&incorrect);
       printf("\n====================================\n");
       printf("\n\t\t\t\t\t*********** Final Score **********\t\t\t\t\t\n\n");
       printf("Correct : %d\n",correct);
       printf("InCorrect : %d\n",incorrect);
       printf("Score : %.1f%%\n",(correct / 10.0) * 100);
       printf("\n\t\t\t\t\t   '''Thanks for visiting...'''   \n");
       printf("\n====================================\n");
       printf("%c 2025 My Quiz",169);
	}
    // C Questions
    void cques()
    {
        int canswers[10] = {4, 3, 4, 1, 1, 1, 2, 1, 1, 3};
        char* cquestions[10] = {
        "Which of the following are correct file opening modes in C?",
        "Which keyword is used to declare an integer variable in C?",
        "Which function is used to print output in C?",
        "Each statement in C must end with which symbol?",
        "Which data type is used to store decimal numbers in C?",
        "Which of the following is a valid loop in C?",
        "Which header file is required for using printf() in C?",
        "Which operator is used to access the address of a variable in C?",
        "Which keyword is used for multiple branching in C?",
        "What is the entry point of a C program?"
    };
    char* coptions[10][4] = {
        {"r", "rb", "w", "All"},
        {"digit", "var","int", "number"},
        {"cout", "System.out.println", "echo","printf"},
        {";", ":", ".", ","},
        {"float", "decimal", "real", "number"},
        {"for", "repeat", "foreach", "until"},
        {"stdlib.h","stdio.h", "conio.h", "math.h"},
        {"&", "*", "%", "#"},
        {"switch", "case", "choice", "select"},
        {"start()", "init()", "main()", "begin()"}
    };
    int cans[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("Q%d : %s\n",i+1,cquestions[i]);
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d. %s\n",j+1,coptions[i][j]);
        }
        scanf("%d",&cans[i]);
    }
    final(cans,canswers);
    }
    
    // Python Questions
    void pques()
    {
        int panswers[10] = {2, 3, 2, 1, 3, 1, 4, 2, 3, 1};
        char* pquestions[10] = {
        "Which keyword is used to define a function in Python?",
        "Which of the following is used to define a block of code in Python?",
        "What is the correct file extension for Python files?",
        "Which function is used to display output in Python?",
        "Which data type is immutable in Python?",
        "Which loop is available in Python?",
        "Which keyword is used to handle exceptions in Python?",
        "How do you insert comments in Python code?",
        "Which collection is ordered and immutable in Python?",
        "What is the correct way to start the main block in Python?"
    };
    char* poptions[10][4] = {
        {"func", "def", "function", "lambda"},
        {"{}", "Indentation", "begin-end", "brackets"},
        {".pt", ".pyt", ".py", ".p"},
        {"print()", "echo()", "printf()", "display()"},
        {"list", "dict", "tuple", "set"},
        {"for", "foreach", "do-while", "until"},
        {"try", "except", "catch", "error"},
        {"// comment", "# comment", "/* comment */", "-- comment"},
        {"set", "list", "tuple", "dict"},
        {"if __name__ = main:", "if main:", "if __name__ == '__main__':", "main()"}
    };
    int pans[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("Q%d : %s\n",i+1,pquestions[i]);
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d. %s\n",j+1,poptions[i][j]);
        }
        scanf("%d",&pans[i]);
    }
       final(pans,panswers);
    }
    
    // Java Questions
    void jques()
    {
        int janswers[10] = {2, 1, 1, 4, 1, 2, 3, 1, 3, 2};
        char* jquestions[10] = {
        "Which keyword is used to inherit a class in Java?",
        "Which of the following is the entry point of a Java program?",
        "Which keyword is used to define a class in Java?",
        "Which operator is used for string concatenation in Java?",
        "Which access modifier makes members visible everywhere?",
        "Which loop is not available in Java?",
        "Which keyword is used to create an object in Java?",
        "Which method is used to print output in Java?",
        "Which keyword is used to handle exceptions in Java?",
        "Which collection class allows duplicates in Java?"
    };
    char* joptions[10][4] = {
        {"implements", "extends", "inherits", "using"},
        {"public static void main(String[] args)", "start()", "Main()", "main()"},
        {"class", "define", "struct", "cls"},
        {".", ":", ";", "+"},
        {"public", "protected", "private", "default"},
        {"for", "foreach", "do-while", "repeat-until"},
        {"make", "new", "create", "object"},
        {"System.println()", "cout<<", "System.out.println()", "print()"},
        {"try", "catch", "throw", "handle"},
        {"Set", "Map", "List", "Queue"}
    };
    int jans[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("Q%d : %s\n",i+1,jquestions[i]);
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d. %s\n",j+1,joptions[i][j]);
        }
        scanf("%d",&jans[i]);
    }
       final(jans,janswers);
    }
int main()
{
    int choice;
    printf("\t\t\t\t\t   Welcome to Online Quiz \t\t\t\t\t\n");
    printf("\t\t\t\t\tTest your Knowledge in Coding\t\t\t\t\t\n");
    printf("Select the Programming Language : \n 1. C \n 2. Python \n 3. Java \n 4. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("\n\t\t\t\t\tCheck your Knowledge in C-Programming\n");
        cques();
        break;
        case 2 : printf("\n\t\t\t\tCheck your Knowledge in Python-Programming\n");
        pques();
        break;
        case 3 : printf("\n\t\t\t\tCheck your Knowledge in Java-Programming\n");
        jques();
        break;
        case 4 : printf("\nExiting....\n");
        printf("\n\t\t\t\t\t   '''Thanks for visiting...'''   \n");
        printf("%c 2025 My Quiz",169);
        exit(0);
        break;
        default: 
        printf("Invalid choice. Try again.\n");
        printf("\n\t\t\t\t\t   '''Thanks for visiting...'''   \n");
        printf("%c 2025 My Quiz",169);
    }
    return 0;
}

