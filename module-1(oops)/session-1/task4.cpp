#include <iostream>
using namespace std;

class Task
{
	public:
	    string title;
	    bool isDone;
	
	    Task()
	    {
	        isDone = false;
	    }
	
	    Task(string t)
	    {
	        title = t;
	        isDone = false;
	    }
	
	    void markDone()
	    {
	        isDone = true;
	    }
	
	    void display()
	    {
	        cout << title;
	
	        if (isDone)
	            cout << " - DONE" << endl;
	        else
	            cout << " - PENDING" << endl;
	    }
};

class TaskList
{
	private:
	    Task tasks[10];
	    int taskCount;
	
	public:
	    TaskList()
	    {
	        taskCount = 0;
	    }
	
	    void addTask(string title)
	    {
	        tasks[taskCount] = Task(title);
	        taskCount++;
	    }
	
	    void markTaskDone(int index)
	    {
	        if (index >= 0 && index < taskCount)
	        {
	            tasks[index].markDone();
	        }
	    }
	
	    void showTasks()
	    {
	        for (int i = 0; i < taskCount; i++)
	        {
	            cout << i + 1 << ". ";
	            tasks[i].display();
	        }
	    }
};

main()
{
    TaskList list;

    list.addTask("Complete c++ Assignment");
    list.addTask("Study C++");
    list.addTask("Practic c++");

    list.markTaskDone(1);

    list.showTasks();

}
