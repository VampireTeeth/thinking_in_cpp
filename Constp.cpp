/*
 * =====================================================================================
 *
 *       Filename:  Constp.cpp
 *
 *    Description:  Demostration of passing cons/non-const as well as 
 *                  returning const/non-const pointer to/from functions
 *
 *        Version:  1.0
 *        Created:  01/22/2013 21:07:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu
 *   Organization:  steventk
 *
 * =====================================================================================
 */

void t(int*) {}

void u(const int* cip){
    //! *cip = 2; Illegal because argument is a pointer to constant integer
    int i = *cip;
    //! int* ip2 = cip; Illegal: pointer to non-const int = pointer to const int
}

const char* v(){
    return "Result of function v()";
}

const int* const w() {
    static int i;
    return &i;
}

int main(){
    int x = 0;
    int* ip = &x;
    const int* cip = &x;
    t(ip); // OK
    //t(cip); // Not OK
    u(ip); // OK
    u(cip); //OK
    //char* cp = v(); // Not OK
    const char* ccp = v(); // OK
    //char* ip2 = w(); // Not OK
    const int* cip2 = w(); // OK
    const int* const ccip = w(); // Also OK
    //*w() = 1; // Not OK
}


