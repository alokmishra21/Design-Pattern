#ifndef EDITOR_H
#define EDITOR_H
#include <stack>
#include <string>


class Editor
{
private:
    std::string contents;
    std::stack<std::string> contentsStack;
public:
    Editor();
    std::string getContents() const;
    void setContents(const std::string &value);
    void undo();
};

#endif // EDITOR_H
