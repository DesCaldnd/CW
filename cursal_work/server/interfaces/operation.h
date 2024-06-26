#ifndef MP_OS_OPERATION_H
#define MP_OS_OPERATION_H

template<typename T>
class operation
{
public:

    virtual void undo(T&) =0;
    virtual void redo(T&) =0;

    virtual ~operation() =default;
};

#endif //MP_OS_OPERATION_H
