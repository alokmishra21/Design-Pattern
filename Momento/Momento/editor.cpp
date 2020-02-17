#include "editor.h"

std::string Editor::getContents() const
{
    return contents;
}

void Editor::setContents(const std::string &value)
{
    contents = value;
    contentsStack.push(value);
}

void Editor::undo()
{
    contentsStack.pop();
    contents = contentsStack.top();
}

Editor::Editor()
{

}

