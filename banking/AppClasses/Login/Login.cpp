#include "Login.h"

Login :: Login ()
{
   this->m_UserName = "";
   this->m_Password = "";
}
Login :: Login (string p_Password, string p_UserName)
{
   this->m_UserName = p_UserName;
   this->m_Password = p_Password;
}
void Login :: setUserName(string p_UserName)
{
   m_UserName = p_UserName;
}
void Login :: setPassword(string p_Password)
{
   m_Password = p_Password;
}
string Login :: getUserName(void)
{
   return m_UserName;
}
string Login :: getPassword(void)
{
   return m_Password;
}
