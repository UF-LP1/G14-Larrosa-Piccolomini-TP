/**
 * Project Untitled
 */


#ifndef _CPERSONA_H
#define _CPERSONA_H

class cPersona {
public: 
    
const string getDni();
    

void setTel(void string);
    
/**
 * @param string
 */
void setEmail(void string);
    
/**
 * @param string
 */
void setAdress(void string);
private: 
    const string dni;
    const string name;
    string tel;
    string email;
    string adress;
};

#endif //_CPERSONA_H