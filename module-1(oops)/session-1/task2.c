#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5

char tasks[MAX_TASKS][100] = {
    "Complete Python practice",
    "Study NumPy",
    "Practice Pandas",
    "Complete C assignment",
    "Prepare for interview"
};

char status[MAX_TASKS][20] = {
    "PENDING",
    "PENDING",
    "PENDING",
    "PENDING",
    "PENDING"
};

int taskCount = 5;
int i;

// Mark selected task as DONE
void markTaskDone(int index)
{
    if (index >= 0 && index < taskCount)
    {
        strcpy(status[index], "DONE");
    }
    else
    {
        printf("Invalid task number!\n");
    }
}

// Display task list
void printTasks()
{
    printf("\nUpdated Task List:\n");

    for ( i = 0; i < taskCount; i++)
    {
        printf("%d. %s - %s\n", i + 1, tasks[i], status[i]);
    }
}

int main()
{
    int index;

    printf("Enter task number to mark as DONE: ");
    scanf("%d", &index);

    // Convert task number to array index
    markTaskDone(index - 1);

    printTasks();

    return 0;
}
