#pragma once

class Command {
public:
    virtual void redo() = 0;
    virtual void undo() = 0;
    virtual void excecute() = 0;
};