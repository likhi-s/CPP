#include "School.h"


School::School(int s_id,string s_name,float s_gpa)
{
     Student studentobj(s_id,s_name,s_gpa);
    // Student studentobj;
    // studentobj.m_id = s_id;
    // studentobj.m_name =s_name;
    // studentobj.m_gpa=s_gpa;

}
School ::~School()
{
    cout<<"Destructor Called in Class School"<<endl;

}
