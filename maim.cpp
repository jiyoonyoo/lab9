#pragma once
#include 

namespace jiyoonyoo2693190
{
    class studentPtr
    {
        student* sPtr;
        public:
        studentPtr(student s = student{ "name", 2323232, 0}):sPtr{new student{s}}{}

    };
}
