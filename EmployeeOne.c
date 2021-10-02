#include <string.h>
#include "Employee.h"

PtrToEmployee searchEmployeeByNumber(PtrtoConstEmployee ptr, int tableSize, long targetNumber)
{
    const PtrtoConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(ptr->number == targetNumber)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}

PtrToEmployee searchEmployeeByName(PtrtoConstEmployee ptr, int tableSize, char * targetName)
{
    const PtrtoConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name,targetName) == 0)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}

PtrToEmployee searchEmployeeByPhoneNumber(PtrtoConstEmployee ptr, int tableSize, char * targetPhone)
{
    const PtrtoConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->phone,targetPhone) == 0)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}

PtrToEmployee searchEmployeeBySalary(PtrtoConstEmployee ptr, int tableSize, double targetSalary)
{
    const PtrtoConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++)
    {
        if(ptr->number == targetSalary)
        {
            return (PtrToEmployee) ptr;
        }
    }
    return NULL;
}