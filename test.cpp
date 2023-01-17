#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 4   // Students have 4 courses
#define N 100 // Maximum number of students
typedef struct Stdent Student;
char *filename = "D:\\DDDst.txt";
struct Stdent
{
    char name[20];      //姓名
    char gender[20];    //性别
    char num[20];       //学号
    int grade;          //年级
    char college[20];   //学院
    char sys[20];       //系
    int clas;           //班级
    char dormitory[20]; //宿舍门牌号
    char nation[20];    //贯籍
    char tel[20];       //联系电话
    int score[M];       //成绩四科
    double ave;
    double sum;
};
class studentList
{
private:
    int findstudentbuynum(Student student[], char num[], int n) // Search by student number
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (!strcmp(student[i].num, num))
                return i;
        }
        return -1;
    }
    int findstudentbuyname(Student student[], char name[], int n) // Find by name
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (!strcmp(student[i].name, name))
                return i;
        }
        return -1;
    }
    int Readfromfile(Student student[])
    {
        FILE *file = fopen(filename, "r");
        if (!file)
        {
            printf("open the file error");
            exit(0);
        }
        int i = 0;
        while (!feof(file))
        {
            fread(&student[i], sizeof(Student), 1, file);
            if (feof(file))
                break;
            i++;
        }
        fclose(file);
        return i;
    }

    void WritetoFile(Student student[], int n)
    {
        int i;
        FILE *file = fopen(filename, "w");
        if (!file)
        {
            printf("open the file error");
            exit(0);
        }

        for (i = 0; i < n; i++)
        {
            fwrite(&student[i], sizeof(Student), 1, file);
        }
        fclose(file);
    }

    int input(Student student[], int index, int n)
    {
        printf("请输入学生信息\n");
        char num[20];
        printf("学号:");
        scanf("%s", num);
        if (findstudentbuynum(student, num, n) == -1)
        {
            strcpy(student[index].num, num);
        }
        else
        {
            printf("学号重复！停止录入！");
            return n;
        }
        printf("姓名:");
        scanf("%s", student[index].name);
        printf("性别:");
        scanf("%s", student[index].gender);
        printf("学院:");
        scanf("%s", student[index].college);
        printf("系:");
        scanf("%s", student[index].sys);
        printf("年级(一个整数1~4):");
        scanf("%d", &student[index].grade);
        printf("班级(一个整数1~9):");
        scanf("%d", &student[index].clas);
        printf("宿舍门牌号:");
        scanf("%s", student[index].dormitory);
        printf("贯籍:");
        scanf("%s", student[index].nation);
        printf("联系电话:");
        scanf("%s", student[index].tel);
        printf("请输入四门课程成绩中间用空格隔开例如(44 66 77 88):");
        scanf("%d%d%d%d", &student[index].score[0], &student[index].score[1], &student[index].score[2], &student[index].score[3]);
        student[index].ave = 0;
        student[index].sum = 0;
        int i;
        for (i = 0; i < 4; i++)
        {
            student[index].sum += student[index].score[i];
        }
        student[index].ave = student[index].sum / 4;
        return n + 1;
    }

    void printindexStu(Student student[], int index, int n) // Output student information with index
    {
        if (index < 0 || index > n)
        {
            printf("print eroor");
            return;
        }
        else
        {
            printf("学号:%-10s姓名:%-10s性别:%-10s\n", student[index].num, student[index].name, student[index].gender);
            printf("年级%-10d学院:%-10s系:%-10s\n", student[index].grade, student[index].college, student[index].sys);
            printf("班级%-10d宿舍门牌号:%-10s贯籍:%-10s:\n", student[index].clas, student[index].dormitory, student[index].nation);
            printf("语文:%-10d数学:%-10d英语:%-10d计算机:%-10d", student[index].score[0], student[index].score[1],
                   student[index].score[2], student[index].score[3]);
            printf("总分:%-10.2lf平均分:%10.2lf\n\n\n", student[index].sum, student[index].ave);
        }
    }
    void print(Student student[], int n) // Output information of all students
    {
        int i;
        printf("Student information is as follows:\n");
        for (i = 0; i < n; i++)
        {
            printindexStu(student, i, n);
        }
    }
    void SearchMneu()
    {
        printf("\n\n1.根据学号查询学生信息\n");
        printf("2.统计学生人数\n");
        printf("3.根据贯籍查询学生\n");
        printf("4.查询各院挂科情况\n");
    }

    void Search(Student student[], int n)
    {
        char num[20];
        SearchMneu();
        printf("输入查询内容:");
        int key;
        scanf("%d", &key);
        if (key == 1)
        {
            printf("请输入学号:");
            scanf("%s", num);
            int index = findstudentbuynum(student, num, n);
            if (index != -1)
            {
                printindexStu(student, index, n);
            }
            else
            {
                printf("Not fund");
            }
        }
        else if (key == 2)
        {
            char college[20];
            char sys[20];
            int clas;
            printf("按照什么查询?1.学院 2.系 3.班级");
            int k, cnt = 0;
            scanf("%d", &k);
            if (key == 1)
            {
                printf("请输入查询的学院:");
                scanf("%s", college);
                for (int i = 0; i < n; i++)
                {
                    if (!strcmp(college, student[i].college))
                    {
                        printindexStu(student, i, n);
                        cnt++;
                    }
                }
                printf("\n\n%s一共有%d人", college, cnt);
            }
            else if (k == 2)
            {
                printf("请输入查询的系:");
                scanf("%s", sys);
                for (int i = 0; i < n; i++)
                {
                    if (!strcmp(sys, student[i].sys))
                    {
                        printindexStu(student, i, n);
                        cnt++;
                    }
                }
                printf("\n\n%s一共有%d人", sys, cnt);
            }
            else
            {
                printf("请输入查询的班级:");
                scanf("%d", &clas);
                for (int i = 0; i < n; i++)
                {
                    if (student[i].clas == clas)
                    {
                        printindexStu(student, i, n);
                        cnt++;
                    }
                }
                printf("\n\n%d班一共有%d人", clas, cnt);
            }
        }
        else if (key == 3)
        {
            char nation[20];
            printf("请输入查询的贯籍:");
            scanf("%s", nation);
            printf("%s的学生信息如下:\n", nation);
            for (int i = 0; i < n; i++)
            {
                if (!strcmp(nation, student[i].nation))
                {
                    printindexStu(student, i, n);
                }
            }
        }
        else
        {
            char college[20];
            printf("查询哪个学院的挂科情况:");
            scanf("%s", college);
            char str[4][20] = {"语文", "数学", "英语", "计算机"};
            for (int j = 0; j < 4; j++)
            {
                printf("%s挂科学生信息:\n", str[j]);
                for (int i = 0; i < n; i++)
                {
                    if (!strcmp(college, student[i].college))
                    {
                        if (student[i].score[j] < 60)
                        {
                            printindexStu(student, i, n);
                        }
                    }
                }
            }
        }
    }

    int deletestu(Student student[], int n)
    {
        int i;
        char str[20];
        printf("请输入要删除的学号:");
        scanf("%s", str);
        int index = findstudentbuynum(student, str, n);
        if (index != -1)
        {
            printindexStu(student, index, n);
            for (i = index; i <= n - 2; i++)
            {
                student[i] = student[i + 1];
            }
            printf("删除成功！");
            return n - 1;
        }
        else
        {
            printf("没有此人！");
        }
        return n;
    }

    void Modify(Student student[], int n)
    {
        int i;
        char str[20];
        printf("请输入要修改的学生学号:");
        scanf("%s", str);
        int index = findstudentbuynum(student, str, n);
        if (index != -1)
        {
            printindexStu(student, index, n);
            printf("请输入修改的学生:\n");
            printf("姓名:");
            scanf("%s", student[index].name);
            printf("性别:");
            scanf("%s", student[index].gender);
            printf("学院:");
            scanf("%s", student[index].college);
            printf("系:");
            scanf("%s", student[index].sys);
            printf("年级(一个整数1~4):");
            scanf("%d", &student[index].grade);
            printf("班级(一个整数1~9):");
            scanf("%d", &student[index].clas);
            printf("宿舍门牌号:");
            scanf("%s", student[index].dormitory);
            printf("贯籍:");
            scanf("%s", student[index].nation);
            printf("联系电话:");
            scanf("%s", student[index].tel);
            printf("请输入四门课程成绩中间用空格隔开例如(44 66 77 88):");
            scanf("%d%d%d%d", &student[index].score[0], &student[index].score[1], &student[index].score[2], &student[index].score[3]);
            student[index].ave = 0;
            student[index].sum = 0;
            int i;
            for (i = 0; i < 4; i++)
            {
                student[index].sum += student[index].score[i];
            }
            student[index].ave = student[index].sum / 4;
        }
    }

    void student_sort1(Student student[], int index, int n) //从小到大 第index课程成绩
    {
        int i, j;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (index == -1) // 如果按照平均分排序
                {
                    if (student[j].ave > student[j + 1].ave)
                    {
                        Student temp = student[j];
                        student[j] = student[j + 1];
                        student[j + 1] = temp;
                    }
                }
                else
                {
                    if (student[j].score[index] > student[j + 1].score[index])
                    {
                        Student temp = student[j];
                        student[j] = student[j + 1];
                        student[j + 1] = temp;
                    }
                }
            }
        }
    }

    void student_sort2(Student student[], int index, int n) //从大到小排序 index课程成绩
    {
        int i, j;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (index == -1) // If sorting average
                {
                    if (student[j].ave < student[j + 1].ave)
                    {
                        Student temp = student[j];
                        student[j] = student[j + 1];
                        student[j + 1] = temp;
                    }
                }
                else
                {
                    if (student[j].score[index] < student[j + 1].score[index])
                    {
                        Student temp = student[j];
                        student[j] = student[j + 1];
                        student[j + 1] = temp;
                    }
                }
            }
        }
    }

    void statistic(Student student[], int n)
    {
        Student copystudent[N];
        int i;
        for (i = 0; i < n; i++)
        {
            copystudent[i] = student[i];
        }
        int k;
        printf("从小到大 还是从大到小:? 1.从小到大 2 从大到小\n");
        scanf("%d", &k);
        if (k == 1)
        {
            printf("从小到大排序情况:\n");
            printf("平均分从小到大:\n");
            student_sort1(copystudent, -1, n);
            print(copystudent, n);
            printf("语文从小到大:\n");
            student_sort1(copystudent, 0, n);
            print(copystudent, n);
            printf("数学从小到大:\n");
            student_sort1(copystudent, 1, n);
            print(copystudent, n);
            printf("英语从小到大:\n");
            student_sort1(copystudent, 2, n);
            print(copystudent, n);
            printf("计算机从小到大:\n");
            student_sort1(copystudent, 3, n);
            print(copystudent, n);
        }
        else
        {
            printf("从大到小排序情况:\n");
            printf("平均分从大到小:\n");
            student_sort2(copystudent, -1, n);
            print(copystudent, n);
            printf("语文从大到小:\n");
            student_sort2(copystudent, 0, n);
            print(copystudent, n);
            printf("数学从大到小:\n");
            student_sort2(copystudent, 1, n);
            print(copystudent, n);
            printf("英语从大到小:\n");
            student_sort2(copystudent, 2, n);
            print(copystudent, n);
            printf("计算机从大到小:\n");
            student_sort2(copystudent, 3, n);
            print(copystudent, n);
        }
    }

    void init()
    {
        FILE *file = fopen(filename, "r");
        if (!file)
        {
            file = fopen(filename, "w");
            fclose(file);
        }
        else
        {
            fclose(file);
        }
    }

    void menu()
    {
        printf("************1.插入学生信息*********************\n");
        printf("************2.查找学生信息*********************\n");
        printf("************3.删除学生信息*********************\n");
        printf("************4.修改学生信息*********************\n");
        printf("************5.显示所有学生信息******************\n");
        printf("************6.成绩排序**********************\n");
        printf("************7.退出******************************\n");
        printf("\n\n\n");
    }

public:
    void function()
    {
        init();
        int key;
        int n = 0; // student number
        Student student[N];
        n = Readfromfile(student);
        system("color F4");
        while (1)
        {
            menu();
            printf("请输入您想实现的功能:");
            scanf("%d", &key);
            switch (key)
            {
            case 1:
                n = input(student, n, n);
                WritetoFile(student, n);
                break;
            case 2:
                Search(student, n);
                break;
            case 3:
                n = deletestu(student, n);
                break;
            case 4:
                Modify(student, n);
                break;
            case 5:
                print(student, n);
                break;
            case 6:
                statistic(student, n);
                break;
            case 7:
                exit(0);
            }
            system("pause");
            system("cls");
        }
    }
};

main()
{
    studentList s;
    s.function();
}
