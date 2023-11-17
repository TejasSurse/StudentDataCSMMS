#include <stdio.h>
#include <string.h>
#include <stdarg.h>

struct HackerRank {
    int easy;
    int medium;
    int hard;
};

struct Leetcode {
    int easy;
    int medium;
    int hard;
};

struct Student {
    char name[50];
    long long int PRN;
    float CGPA;
    int Attendance;
    int GateTutor;
    struct HackerRank hr;
    struct Leetcode lc;
    long long int Contact;
    long long int PContact;
};

int AtLec(int Attended, int Days) {
    int totalLec = Days * 4;
    int atLec = (Attended * 100) / totalLec;
    return atLec;
}

int AtPr(int Attended, int Days) {
    int totalPr = Days * 1;
    int atPr = (Attended * 100) / totalPr;
    return atPr;
}

int GateTutor(int n, ...) {
    va_list va;
    int Total = 0;
    va_start(va, n);
    for (int i = 0; i < n; i++) {
        Total += va_arg(va, int);
    }
    return Total;
}

int main() {
    struct Student DivBCS22[80];
    printf("\nWelcome To Student Data Management System \n");
    printf("CSMSS Chh. Shahu College Of Engineering \nChh. Sambhajinagar\n");
    int run = 1;
    while (run) {
        printf("\nEnter Operation To Perform \n");
        printf("Create Student Data 1 \n");
        printf("Read Student Data   2 \n");
        printf("Update Student Data 3 \n");
        printf("Delete Student Data 4 \n");
        int m;
        scanf("%d", &m);
        switch (m) {
            case 1: {
                int RollNo;
        printf("Enter RollNo. of Student Class Range -> 1 to 80 \n");
        scanf("%d", &RollNo);
        if (RollNo > 80 || RollNo < 1)
        {
            printf("You entered Wrong ");
        }
        else
        {
            char str[50];
            printf("Enter name: ");
            scanf(" %[^\n]", str);
            strcpy(DivBCS22[RollNo].name, str);

            printf("Enter PRN: ");
            scanf("%lld", &DivBCS22[RollNo].PRN);

            printf("Enter CGPA: ");
            scanf("%f", &DivBCS22[RollNo].CGPA);

            printf("Enter Attendance: ");
            scanf("%d", &DivBCS22[RollNo].Attendance);

            printf("Enter GateTutor: ");
            scanf("%d", &DivBCS22[RollNo].GateTutor);

            printf("Enter HackerRank easy: ");
            scanf("%d", &DivBCS22[RollNo].hr.easy);

            printf("Enter HackerRank medium: ");
            scanf("%d", &DivBCS22[RollNo].hr.medium);

            printf("Enter HackerRank hard: ");
            scanf("%d", &DivBCS22[RollNo].hr.hard);

            printf("Enter Leetcode easy: ");
            scanf("%d", &DivBCS22[RollNo].lc.easy);

            printf("Enter Leetcode medium: ");
            scanf("%d", &DivBCS22[RollNo].lc.medium);

            printf("Enter Leetcode hard: ");
            scanf("%d", &DivBCS22[RollNo].lc.hard);

            printf("Enter Contact: ");
            scanf("%lld", &DivBCS22[RollNo].Contact);

            printf("Enter Parent's Contact: ");
            scanf("%lld", &DivBCS22[RollNo].PContact);

            printf("Here is all details completed ");
        }
        break;
            }
            case 2: {
                int RollNo;
    printf("Enter RollNo. of Student to Read Data (1 to 80): ");
    scanf("%d", &RollNo);
    
    if (RollNo > 80 || RollNo < 1)
    {
        printf("Invalid Roll Number entered\n");
    }
    else if (strlen(DivBCS22[RollNo].name) == 0)
    {
        printf("No data found for Roll Number %d\n", RollNo);
    }
    else
    {
        printf("\nStudent Data for Roll Number %d\n", RollNo);
        printf("Name: %s\n", DivBCS22[RollNo].name);
        printf("PRN: %lld\n", DivBCS22[RollNo].PRN);
        printf("CGPA: %.2f\n", DivBCS22[RollNo].CGPA);
        printf("Attendance: %d%%\n", DivBCS22[RollNo].Attendance);
        printf("Gate Tutor: %d\n", DivBCS22[RollNo].GateTutor);
        printf("HackerRank - Easy: %d, Medium: %d, Hard: %d\n",
               DivBCS22[RollNo].hr.easy, DivBCS22[RollNo].hr.medium, DivBCS22[RollNo].hr.hard);
        printf("Leetcode - Easy: %d, Medium: %d, Hard: %d\n",
               DivBCS22[RollNo].lc.easy, DivBCS22[RollNo].lc.medium, DivBCS22[RollNo].lc.hard);
        printf("Contact: %lld\n", DivBCS22[RollNo].Contact);
        printf("Parent's Contact: %lld\n", DivBCS22[RollNo].PContact);
    }
    break;
                
            }
            case 3: {
                
            int RollNo;
            printf("Enter RollNo. of Student Class Range -> 1 to 80 \n");
            scanf("%d", &RollNo);
        if (RollNo > 80 || RollNo < 1)
        {
            printf("You entered Wrong ");
        }
        else
        {
            printf("Update CGPA: ");
            scanf("%f", &DivBCS22[RollNo].CGPA);

            printf("Uptade Attendance: ");
            scanf("%d", &DivBCS22[RollNo].Attendance);

            printf("Update GateTutor: ");
            scanf("%d", &DivBCS22[RollNo].GateTutor);

            printf("HackerRank easy: ");
            scanf("%d", &DivBCS22[RollNo].hr.easy);

            printf("HackerRank medium: ");
            scanf("%d", &DivBCS22[RollNo].hr.medium);

            printf("HackerRank hard: ");
            scanf("%d", &DivBCS22[RollNo].hr.hard);

            printf("Leetcode easy: ");
            scanf("%d", &DivBCS22[RollNo].lc.easy);

            printf("Leetcode medium: ");
            scanf("%d", &DivBCS22[RollNo].lc.medium);

            printf("Leetcode hard: ");
            scanf("%d", &DivBCS22[RollNo].lc.hard);

            printf("Contact: ");
            scanf("%lld", &DivBCS22[RollNo].Contact);

            printf("Parent's Contact: ");
            scanf("%lld", &DivBCS22[RollNo].PContact);

            printf("Here is all details completed ");
            break;
                
            }
            case 4: {
                int RollNo;
    printf("Enter RollNo. of Student Class Range -> 1 to 80 \n");
    scanf("%d", &RollNo);
    if (RollNo > 80 || RollNo < 1)
    {
        printf("You entered Wrong ");
    }
    else
    {
        strcpy(DivBCS22[RollNo].name, "Empty Seat");

        // Set other values to 0
        DivBCS22[RollNo].PRN = 0;
        DivBCS22[RollNo].CGPA = 0.0;
        DivBCS22[RollNo].Attendance = 0;
        DivBCS22[RollNo].GateTutor = 0;
        DivBCS22[RollNo].hr.easy = 0;
        DivBCS22[RollNo].hr.medium = 0;
        DivBCS22[RollNo].hr.hard = 0;
        DivBCS22[RollNo].lc.easy = 0;
        DivBCS22[RollNo].lc.medium = 0;
        DivBCS22[RollNo].lc.hard = 0;
        DivBCS22[RollNo].Contact = 0;
        DivBCS22[RollNo].PContact = 0;

        printf("Data of Roll.No is Successfully DELETED ");
        break;
               
        }
            default:
                printf("Invalid option selected\n");
                break;
        }
        }
        }
    
    }
    return 0;
}
