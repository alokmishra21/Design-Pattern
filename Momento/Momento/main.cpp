#include <iostream>
#include <editor.h>
#include <string>

using namespace std;

int main()
{
    Editor editor;
    editor.setContents("a");
    editor.setContents("b");
    editor.setContents("c");
    editor.setContents("d");
    cout << "Editor content is : " <<editor.getContents()<<endl;
    editor.undo();
    cout << "After undoing last insert Editor content is : " <<editor.getContents()<<endl;
    return 0;
}

