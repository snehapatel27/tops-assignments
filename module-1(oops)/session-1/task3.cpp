#include <iostream>
using namespace std;

class Task
{
	private:
	    string title;
	    bool isDone;
	
	public:
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
	        cout << "Task: " << title ;
	
	        if (isDone)
	            cout << "Status: DONE";
	        else
	            cout << "Status: PENDING" ;
	    }
};

main()
{
    Task task("Complete C++ Assignment");

    task.display();

    task.markDone();

    cout << "\nAfter completing task:\n";
    task.display();
}
