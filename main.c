#include <stdio.h>
int index = 0;
int arr[1024];
int main()
{

    while (1)
    {

        printf("1--添加敏感字符\n");
        printf("2--删除最后一个敏感字符\n");
        printf("3--显示所有敏感字符\n");
        printf("4--替换敏感字符\n");
        printf("5--退出\n");

        printf("请输入相应的功能编号:\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("输入要添加的字符:\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;

            printf("添加成功，回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("确认删除最后一个·字符,回车继续\n");

            if (index >= 1)
            {
                index--;
                printf("删除成功，回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("删除失败回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            /* code */
        }
        if (code == 4)
        {
            /* code */
        }
        if (code == 5)
        {
            /* code */
        }
    }

    return 0;
}