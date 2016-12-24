
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[9];
};
static const struct sqlcxp sqlfpn =
{
    8,
    "nikdb.pc"
};


static unsigned int sqlctx = 19083;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned char  *sqhstv[9];
   unsigned long  sqhstl[9];
            int   sqhsts[9];
            short *sqindv[9];
            int   sqinds[9];
   unsigned long  sqharm[9];
   unsigned long  *sqharc[9];
   unsigned short  sqadto[9];
   unsigned short  sqtdso[9];
} sqlstm = {12,9};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(unsigned char *, signed int *); }

 static const char *sq0019 = 
"select rtrim(a.customerid) ,a.customername ,rtrim(b.customerid) ,b.accountno\
 ,nvl(b.accountbal,0) ,b.accounttype  from h95_group6_customer a ,h95_group6_a\
ccount b where (a.customerid=b.customerid and accountstatus<>'inactive')      \
     ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,1,0,0,
5,0,0,0,0,0,27,41,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,24,64,0,0,1,1,0,1,0,1,97,0,0,
55,0,0,3,0,0,29,72,0,0,0,0,0,1,0,
70,0,0,4,0,0,30,86,0,0,0,0,0,1,0,
85,0,0,5,72,0,4,102,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
112,0,0,6,117,0,3,153,0,0,9,9,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,
1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,
163,0,0,7,74,0,4,162,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
186,0,0,8,0,0,29,165,0,0,0,0,0,1,0,
201,0,0,9,54,0,2,183,0,0,1,1,0,1,0,1,3,0,0,
220,0,0,10,0,0,29,191,0,0,0,0,0,1,0,
235,0,0,11,71,0,5,203,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
258,0,0,12,0,0,29,206,0,0,0,0,0,1,0,
273,0,0,13,72,0,5,216,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
296,0,0,14,0,0,29,219,0,0,0,0,0,1,0,
311,0,0,15,72,0,5,229,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
334,0,0,16,0,0,29,232,0,0,0,0,0,1,0,
349,0,0,17,233,0,4,252,0,0,7,1,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,2,3,0,0,1,3,0,0,
392,0,0,18,0,0,29,273,0,0,0,0,0,1,0,
407,0,0,19,237,0,9,295,0,0,0,0,0,1,0,
422,0,0,19,0,0,13,298,0,0,6,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,
0,2,97,0,0,
461,0,0,19,0,0,15,315,0,0,0,0,0,1,0,
476,0,0,20,155,0,3,344,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,
503,0,0,21,183,0,3,356,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,
530,0,0,22,184,0,3,368,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,
557,0,0,23,212,0,3,380,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,
584,0,0,24,120,0,4,391,0,0,4,1,0,1,0,2,68,0,0,2,3,0,0,2,3,0,0,1,3,0,0,
615,0,0,25,0,0,29,413,0,0,0,0,0,1,0,
630,0,0,26,75,0,5,424,0,0,1,1,0,1,0,1,97,0,0,
649,0,0,27,0,0,29,432,0,0,0,0,0,1,0,
664,0,0,28,0,0,29,481,0,0,0,0,0,1,0,
679,0,0,29,0,0,29,528,0,0,0,0,0,1,0,
694,0,0,30,104,0,3,551,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,
721,0,0,31,74,0,4,570,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
744,0,0,32,65,0,5,598,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
767,0,0,33,71,0,4,616,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
790,0,0,19,237,0,9,644,0,0,0,0,0,1,0,
805,0,0,19,0,0,13,647,0,0,6,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,
0,2,97,0,0,
844,0,0,19,0,0,15,662,0,0,0,0,0,1,0,
859,0,0,34,61,0,4,672,0,0,1,1,0,1,0,1,3,0,0,
878,0,0,35,69,0,4,697,0,0,2,1,0,1,0,2,4,0,0,1,3,0,0,
901,0,0,36,112,0,3,705,0,0,4,4,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
932,0,0,37,107,0,4,712,0,0,4,2,0,1,0,2,3,0,0,2,97,0,0,1,3,0,0,1,3,0,0,
963,0,0,38,0,0,29,723,0,0,0,0,0,1,0,
};


#include "DB.h"
#include "../GlobalDefs/GlobalDefs.h"
#include<sstream>
#include<string>
#include<iostream>
#include "../AppClasses/Account/Account.h"
#include "../AppClasses/Transaction/Transaction.h"


using namespace std;
//#include "../ExceptionClasses/SqlError/SqlError.h"
/* exec sql include sqlca.h;
 */ 
/*
 * $Header: /usr/local/cvs/H95/H95_group6/banking/Model/nik.cpp,v 1.1.1.2 2014/05/08 02:45:31 u751979 Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */


// Defining Static Variables

string DB::m_dbUserName = "";
string DB::m_dbPassword = "";  
bool DB::m_DbConnected = false;

/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char h_UserName[20];
   char h_Password[20];
   char h_DynamicStmt[2048];

/* EXEC SQL END DECLARE SECTION; */ 


void DB::initialize_DB_Connection(string p_UserName, string p_Password)
{
  m_dbUserName = p_UserName;
  m_dbPassword = p_Password;
}

int DB::dbConnect()
{
//  try
//  {
    strcpy(h_UserName,m_dbUserName.c_str());
    strcpy(h_Password,m_dbPassword.c_str());

    /* EXEC SQL CONNECT :h_UserName IDENTIFIED BY :h_Password ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)h_UserName;
    sqlstm.sqhstl[0] = (unsigned long )20;
    sqlstm.sqhsts[0] = (         int  )20;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)h_Password;
    sqlstm.sqhstl[1] = (unsigned long )20;
    sqlstm.sqhsts[1] = (         int  )20;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if(sqlca.sqlcode < 0)
	cout<<sqlca.sqlcode<<endl;
  //    throw ( SqlError( sqlca.sqlcode, sqlca.sqlerrm.sqlerrmc, "DB Connect Error" ) );

    m_DbConnected = true;

    return SUCCESS;
 /* } 
  catch (SqlError sqlError) 
  {
    sqlError.displaySqlError();
  }
  return FAILED;*/
}

int DB::dbExecDML_Stmt(string p_strInsertStmt)
{
 // try
 // {
    strcpy(h_DynamicStmt, p_strInsertStmt.c_str());

    /* EXEC SQL EXECUTE IMMEDIATE :h_DynamicStmt; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)h_DynamicStmt;
    sqlstm.sqhstl[0] = (unsigned long )2048;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if(sqlca.sqlcode < 0)
  //    throw ( SqlError( sqlca.sqlcode, sqlca.sqlerrm.sqlerrmc, "DB Execute DML Error" ) );
{	cout<<"code"<<sqlca.sqlerrm.sqlerrmc<<endl;
		return FAILED;
}

    /* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )55;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    return SUCCESS;
 /* } 
  catch (SqlError sqlError) 
  {
    sqlError.displaySqlError();
  }*/
 // return FAILED;
} 
void DB::dbCloseConnection()
{
  if(m_DbConnected)
  {
   /* EXEC SQL COMMIT WORK RELEASE; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )70;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   m_DbConnected = false;
  }
}

int DB::dbCheckLogin(Login p_loginObj,int &p_UserRole)
{
  /* EXEC SQL BEGIN DECLARE SECTION; */ 

    char h_UserName[20];
    char h_Password[15];
    int h_UserRole;
  /* EXEC SQL END DECLARE SECTION; */ 

 // try
  //{
    strcpy(h_UserName, p_loginObj.getUserName().c_str());
    strcpy(h_Password, p_loginObj.getPassword().c_str());
    /* EXEC SQL SELECT desgn INTO :h_UserRole FROM h95_grp6_login WHERE uname=:h_UserName AND pwd=:h_Password; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select desgn into :b0  from h95_grp6_login where (uname=:\
b1 and pwd=:b2)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )85;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)&h_UserRole;
    sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)h_UserName;
    sqlstm.sqhstl[1] = (unsigned long )20;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)h_Password;
    sqlstm.sqhstl[2] = (unsigned long )15;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    if(sqlca.sqlcode < 0)
	cout<<sqlca.sqlcode<<endl;
//	cout<<"invalid user name password"<<endl;
//	return FAILED;}
    if(sqlca.sqlcode != 0){
        cout<<sqlca.sqlcode<<endl;
        cout<<"invalid user name password"<<endl;
        return FAILED;}
    //  throw ( SqlError( sqlca.sqlcode, sqlca.sqlerrm.sqlerrmc, "Invalid UserName or Password" ) );
    
    p_UserRole = h_UserRole;

    return SUCCESS;
 // }
}


int DB :: insertCustomer(Customer c)
 { 
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

   char h_customername[31];
   char h_jointname[21];
   char h_address[51];
   char h_guranteername[21];
   int h_customerpincode;
   int h_number;
   char h_pan[11]; 
   int h_guranteeraccno; 
   char h_dob[20];
   char  h_customerid[21];
  

 /* EXEC SQL END DECLARE SECTION; */ 

  strcpy(h_customername,c.getCustomerName().c_str());
  strcpy(h_jointname,c.getJointCustomerName().c_str());
  strcpy(h_address,c.getCustomerAddress().c_str());
  strcpy(h_guranteername,c.getGuranteerName().c_str());
  strcpy(h_dob,c.getCustomerDob().c_str());
  strcpy(h_pan,c.getCustomerPan().c_str());
   istringstream(c.getCustomerPincode()) >> h_customerpincode;
   istringstream(c.getCustomerMobileNumber()) >> h_number;
  // istringstream(c.getCustomerPan()) >> h_pan;
   istringstream(c.getGuranteerAccno()) >> h_guranteeraccno;
 // h_customerpincode=c.getCustomerPincode();
 // h_number=c.getCustomerMobileNumber();
 // h_pan=c.getCustomerPan();
  //h_guranteeraccno=c.getGuranteerAccno();
  
    
/* EXEC SQL INSERT INTO h95_group6_customer values(h95_group6_customer_customerid.nextval,:h_customername,:h_dob,:h_customerpincode,:h_pan,:h_number,:h_address,:h_jointname,:h_guranteeraccno,:h_guranteername); */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into h95_group6_customer  values (h95_group6_customer_\
customerid.nextval ,:b0,:b1,:b2,:b3,:b4,:b5,:b6,:b7,:b8)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )112;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)h_customername;
sqlstm.sqhstl[0] = (unsigned long )31;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_dob;
sqlstm.sqhstl[1] = (unsigned long )20;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_customerpincode;
sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)h_pan;
sqlstm.sqhstl[3] = (unsigned long )11;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (unsigned char  *)&h_number;
sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         short *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned long )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (unsigned char  *)h_address;
sqlstm.sqhstl[5] = (unsigned long )51;
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         short *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned long )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqhstv[6] = (unsigned char  *)h_jointname;
sqlstm.sqhstl[6] = (unsigned long )21;
sqlstm.sqhsts[6] = (         int  )0;
sqlstm.sqindv[6] = (         short *)0;
sqlstm.sqinds[6] = (         int  )0;
sqlstm.sqharm[6] = (unsigned long )0;
sqlstm.sqadto[6] = (unsigned short )0;
sqlstm.sqtdso[6] = (unsigned short )0;
sqlstm.sqhstv[7] = (unsigned char  *)&h_guranteeraccno;
sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
sqlstm.sqhsts[7] = (         int  )0;
sqlstm.sqindv[7] = (         short *)0;
sqlstm.sqinds[7] = (         int  )0;
sqlstm.sqharm[7] = (unsigned long )0;
sqlstm.sqadto[7] = (unsigned short )0;
sqlstm.sqtdso[7] = (unsigned short )0;
sqlstm.sqhstv[8] = (unsigned char  *)h_guranteername;
sqlstm.sqhstl[8] = (unsigned long )21;
sqlstm.sqhsts[8] = (         int  )0;
sqlstm.sqindv[8] = (         short *)0;
sqlstm.sqinds[8] = (         int  )0;
sqlstm.sqharm[8] = (unsigned long )0;
sqlstm.sqadto[8] = (unsigned short )0;
sqlstm.sqtdso[8] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



 if(sqlca.sqlcode < 0)
        {
	cout<<sqlca.sqlcode<<endl;
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot add Customer"<<endl<<endl;
      return FAILED;
        }
	/* EXEC SQL SELECT customerid into :h_customerid from h95_group6_customer where customerpan = :h_pan; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select customerid into :b0  from h95_group6_customer where c\
ustomerpan=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )163;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)h_customerid;
 sqlstm.sqhstl[0] = (unsigned long )21;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (unsigned char  *)h_pan;
 sqlstm.sqhstl[1] = (unsigned long )11;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	cout<<"your customer id is:"<<h_customerid<<endl<<endl;;
	
        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )186;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return SUCCESS;

   

}




int DB::deleteCustomer(Customer c)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_customerid;
/* EXEC SQL END DECLARE SECTION; */ 


istringstream(c.getCustomerId()) >> h_customerid;

/* exec sql delete from h95_group6_customer where customerid = :h_customerid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "delete  from h95_group6_customer  where customerid=:b0";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )201;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_customerid;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    if(sqlca.sqlcode < 0)
        {
        cout<<sqlca.sqlcode<<endl;
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
        cout<<"cannot delete Customer"<<endl;
        return FAILED;
        }
        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )220;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return SUCCESS;

}

 int DB:: updateCustomerMobileNumber(string& l_MobileNumber,string& l_customerid)
	{	/* exec sql begin declare section; */ 

		 char h_MobileNumber[16];
		char h_customerid[16];
		/* exec sql end declare section; */ 

		  strcpy( h_MobileNumber,l_MobileNumber.c_str());
		 strcpy( h_customerid,l_customerid.c_str());
		/* exec sql update h95_group6_customer set customernumber=:h_MobileNumber where customerid=:h_customerid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update h95_group6_customer  set customernumber=:b0 where cu\
stomerid=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )235;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)h_MobileNumber;
  sqlstm.sqhstl[0] = (unsigned long )16;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)h_customerid;
  sqlstm.sqhstl[1] = (unsigned long )16;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		if(sqlca.sqlcode < 0)
		cout<<"code="<<sqlca.sqlcode<<endl;
		/* EXEC SQL COMMIT; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )258;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


		cout<<h_MobileNumber;
	}
int DB:: updateCustomerAddress(string& l_Address,string& l_customerid)
        {       /* exec sql begin declare section; */ 

                 char h_Address[16];
                char h_customerid[16];
                /* exec sql end declare section; */ 

                  strcpy( h_Address,l_Address.c_str());
                 strcpy( h_customerid,l_customerid.c_str());
                /* exec sql update h95_group6_customer set customeraddress=:h_Address where customerid=:h_customerid; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 12;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "update h95_group6_customer  set customeraddre\
ss=:b0 where customerid=:b1";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )273;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (unsigned char  *)h_Address;
                sqlstm.sqhstl[0] = (unsigned long )16;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)h_customerid;
                sqlstm.sqhstl[1] = (unsigned long )16;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                if(sqlca.sqlcode < 0)
                cout<<"code="<<sqlca.sqlcode<<endl;
                /* EXEC SQL COMMIT; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 12;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )296;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                cout<<h_Address;
        }
int DB:: updateCustomerPincode(string& l_Pincode,string& l_customerid)
        {       /* exec sql begin declare section; */ 

                 char h_Pincode[16];
                char h_customerid[16];
                /* exec sql end declare section; */ 

                  strcpy( h_Pincode ,l_Pincode.c_str());
                 strcpy( h_customerid,l_customerid.c_str());
                /* exec sql update h95_group6_customer set customerpincode=:h_Pincode where customerid=:h_customerid; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 12;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "update h95_group6_customer  set customerpinco\
de=:b0 where customerid=:b1";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )311;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (unsigned char  *)h_Pincode;
                sqlstm.sqhstl[0] = (unsigned long )16;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)h_customerid;
                sqlstm.sqhstl[1] = (unsigned long )16;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                if(sqlca.sqlcode < 0)
                cout<<"code="<<sqlca.sqlcode<<endl;
                /* EXEC SQL COMMIT; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 12;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )334;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                cout<<h_Pincode;
        }


int DB::viewCustomer(Customer& c, Account& a)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_customerid;
char h_customername[25];
char h_customeraddress[51];
char h_customernumber[16];
char h_accountno[21];
int h_accountbal;


/* EXEC SQL END DECLARE SECTION; */ 


istringstream(c.getCustomerId()) >> h_customerid;

/* exec sql select a.customerid,a.customername,a.customeraddress,a.customernumber,b.accountno,b.accountbal into :h_customerid,:h_customername,:h_customeraddress,:h_customernumber,:h_accountno,:h_accountbal from h95_group6_customer a , h95_group6_account b where a.customerid = :h_customerid and a.customerid=b.customerid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select a.customerid ,a.customername ,a.customeraddress ,a.cus\
tomernumber ,b.accountno ,b.accountbal into :b0,:b1,:b2,:b3,:b4,:b5  from h95_\
group6_customer a ,h95_group6_account b where (a.customerid=:b0 and a.customer\
id=b.customerid)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )349;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_customerid;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_customername;
sqlstm.sqhstl[1] = (unsigned long )25;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)h_customeraddress;
sqlstm.sqhstl[2] = (unsigned long )51;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)h_customernumber;
sqlstm.sqhstl[3] = (unsigned long )16;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (unsigned char  *)h_accountno;
sqlstm.sqhstl[4] = (unsigned long )21;
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         short *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned long )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (unsigned char  *)&h_accountbal;
sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         short *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned long )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqhstv[6] = (unsigned char  *)&h_customerid;
sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
sqlstm.sqhsts[6] = (         int  )0;
sqlstm.sqindv[6] = (         short *)0;
sqlstm.sqinds[6] = (         int  )0;
sqlstm.sqharm[6] = (unsigned long )0;
sqlstm.sqadto[6] = (unsigned short )0;
sqlstm.sqtdso[6] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 
    if(sqlca.sqlcode < 0)
        {
        cout<<sqlca.sqlcode<<endl;
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
        cout<<"This Customer ID  is Not Registered"<<endl;
        return FAILED;
         }
         
         stringstream ss;
        ss << h_customerid;
        string str = ss.str();
       
       a.setAccountNo(h_accountno);
       c.setCustomerId(str);
	 a.setAccountBalance(h_accountbal);
	c.setCustomerName(h_customername);
 c.setCustomerAddress(h_customeraddress);
 c.setCustomerMobileNumber(h_customernumber);

        
        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )392;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return SUCCESS;

}

int DB :: fetchAllCustomer(vector<Customer> &customer_list,vector<Account> &acc_list)
{
/* exec sql begin declare section; */ 

char h_customerid[16];
char h_accCustomerid[16];
char h_customername[31];
char h_accountno[7];
char h_accounttype[11];
int h_accountbal;
/* exec sql end declare section; */ 


/* EXEC SQL DECLARE cust_cursor CURSOR FOR SELECT rtrim(a.customerid),a.customername,rtrim(b.customerid),b.accountno,nvl(b.accountbal,0),b.accounttype from h95_group6_customer a,h95_group6_account b WHERE a.customerid=b.customerid and accountstatus != 'inactive'; */ 

if(sqlca.sqlcode < 0)
{
cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
/* EXEC SQL OPEN cust_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = sq0019;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )407;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqcmod = (unsigned int )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


for(;;)
{
/* EXEC SQL FETCH cust_cursor INTO :h_customerid,:h_customername,:h_accCustomerid,:h_accountno,:h_accountbal,:h_accounttype; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )422;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqfoff = (         int )0;
sqlstm.sqfmod = (unsigned int )2;
sqlstm.sqhstv[0] = (unsigned char  *)h_customerid;
sqlstm.sqhstl[0] = (unsigned long )16;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_customername;
sqlstm.sqhstl[1] = (unsigned long )31;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)h_accCustomerid;
sqlstm.sqhstl[2] = (unsigned long )16;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)h_accountno;
sqlstm.sqhstl[3] = (unsigned long )7;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (unsigned char  *)&h_accountbal;
sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         short *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned long )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (unsigned char  *)h_accounttype;
sqlstm.sqhstl[5] = (unsigned long )11;
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         short *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned long )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode != 0)
{
cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
break;
}
Customer cust_obj;
cust_obj.setCustomerName((string)h_customername);
cust_obj.setCustomerId((string)h_customerid);
customer_list.push_back(cust_obj);
Account acc_obj;
acc_obj.setAccountNo((string)h_accountno);
acc_obj.setCustomerId((string)h_accCustomerid);
acc_obj.setAccountBalance(h_accountbal);
acc_obj.setAccountType((string)h_accounttype);
acc_list.push_back(acc_obj);
}
/* EXEC SQL CLOSE cust_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )461;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;
}








int DB :: openAccountInDb(Account& acc_obj,char c,char d)
	{
		/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int h_customerId;
		char h_accountType[11];
		int h_accountBal;
  		char h_joinName[31];
		unsigned long int h_accountNo;
		int h_creditNo;
		int h_debitNo;
		/* EXEC SQL END DECLARE SECTION; */ 

		istringstream(acc_obj.getCustomerId()) >> h_customerId;
		strcpy(h_accountType,acc_obj.getAccountType().c_str());
		strcpy(h_joinName,acc_obj.getJoinName().c_str());
		h_accountBal=acc_obj.getAccountBalance();
           if(c=='n' && d=='n')
	{
	 cout<<"no credit debit"<<endl;	
    	 /* EXEC SQL INSERT INTO h95_group6_account values(:h_customerId,h95_group6_account_accountno.nextval,:h_accountType,:h_accountBal,null,null,null,null,null,null,null,null,sysdate,'active'); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 9;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into h95_group6_account  values (:b0,h95_group6_\
account_accountno.nextval ,:b1,:b2,null ,null ,null ,null ,null ,null ,null ,n\
ull ,sysdate,'active')";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )476;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (unsigned char  *)&h_customerId;
      sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (unsigned char  *)h_accountType;
      sqlstm.sqhstl[1] = (unsigned long )11;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (unsigned char  *)&h_accountBal;
      sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         short *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned long )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	 if(sqlca.sqlcode < 0)
	{
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot add data"<<endl;
      return FAILED;
	}
	}

           if(c=='n' && d=='y')
        {
         cout<<"only debit"<<endl;
         /* EXEC SQL INSERT INTO h95_group6_account values(:h_customerId,h95_group6_account_accountno.nextval,:h_accountType,:h_accountBal,null,null,null,null,null,h95_group6_debitsequence.nextval,null,null,sysdate,'active'); */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "insert into h95_group6_account  values (:b0,h95_grou\
p6_account_accountno.nextval ,:b1,:b2,null ,null ,null ,null ,null ,h95_group6\
_debitsequence.nextval ,null ,null ,sysdate,'active')";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )503;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (unsigned char  *)&h_customerId;
         sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (unsigned char  *)h_accountType;
         sqlstm.sqhstl[1] = (unsigned long )11;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&h_accountBal;
         sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


         if(sqlca.sqlcode < 0)
        {
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot add data"<<endl;
      return FAILED;
        }
        }

           if(c=='y' && d=='n')
        {
         cout<<"only credit"<<endl;
         /* EXEC SQL INSERT INTO h95_group6_account values(:h_customerId,h95_group6_account_accountno.nextval,:h_accountType,:h_accountBal,null,null,null,null,null,null,h95_group6_creditsequence.nextval,null,sysdate,'active'); */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "insert into h95_group6_account  values (:b0,h95_grou\
p6_account_accountno.nextval ,:b1,:b2,null ,null ,null ,null ,null ,null ,h95_\
group6_creditsequence.nextval ,null ,sysdate,'active')";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )530;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (unsigned char  *)&h_customerId;
         sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (unsigned char  *)h_accountType;
         sqlstm.sqhstl[1] = (unsigned long )11;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&h_accountBal;
         sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


         if(sqlca.sqlcode < 0)
        {
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot add data"<<endl;
      return FAILED;
        }
        }

           if(c=='y' && d=='y')
        {
         cout<<"both credit debit"<<endl;
         /* EXEC SQL INSERT INTO h95_group6_account values(:h_customerId,h95_group6_account_accountno.nextval,:h_accountType,:h_accountBal,null,null,null,null,null,h95_group6_debitsequence.nextval,h95_group6_creditsequence.nextval,null,sysdate,'active'); */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "insert into h95_group6_account  values (:b0,h95_grou\
p6_account_accountno.nextval ,:b1,:b2,null ,null ,null ,null ,null ,h95_group6\
_debitsequence.nextval ,h95_group6_creditsequence.nextval ,null ,sysdate,'acti\
ve')";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )557;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (unsigned char  *)&h_customerId;
         sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (unsigned char  *)h_accountType;
         sqlstm.sqhstl[1] = (unsigned long )11;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&h_accountBal;
         sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


         if(sqlca.sqlcode < 0)
        {
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot add data"<<endl;
      return FAILED;
        }
        }



	/* EXEC SQL SELECT accountno,nvl(debitcardno,0),nvl(creditcardno,0) INTO :h_accountNo,:h_creditNo,:h_debitNo from h95_group6_account where customerid=:h_customerId; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select accountno ,nvl(debitcardno,0) ,nvl(creditcardno,0) in\
to :b0,:b1,:b2  from h95_group6_account where customerid=:b3";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )584;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&h_accountNo;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&h_creditNo;
 sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         short *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned long )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (unsigned char  *)&h_debitNo;
 sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         short *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned long )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (unsigned char  *)&h_customerId;
 sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         short *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned long )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                 if(sqlca.sqlcode < 0)
        {
        cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot retrieve account no!"<<endl;
      return FAILED;
        }
        stringstream ss;
	ss << h_accountNo;
	string str = ss.str();
        acc_obj.setAccountNo(str);	
	
        
        ss << h_creditNo;
        str = ss.str();
        acc_obj.setCreditNo(str);

        ss << h_accountNo;
        str = ss.str();
        acc_obj.setDebitNo(str);


	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )615;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	return SUCCESS;
	

}

int DB::deleteAccountInDb(string p_AccountNo)
{       /* EXEC SQL BEGIN DECLARE SECTION; */ 

        char h_accountNo[21];
        /* EXEC SQL END DECLARE SECTION; */ 

        strcpy(h_accountNo,p_AccountNo.c_str());
        /* exec sql update h95_group6_account set accountstatus= 'inactive' where accountno=:h_accountNo; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "update h95_group6_account  set accountstatus='inactiv\
e' where accountno=:b0";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )630;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (unsigned char  *)h_accountNo;
        sqlstm.sqhstl[0] = (unsigned long )21;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if(sqlca.sqlcode<0)
        {
                cout<<sqlca.sqlcode<<endl;
                return FAILED;


        }
   /* EXEC SQL COMMIT; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 9;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )649;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


  
        return SUCCESS;
}





int DB::withdraw(Transaction &trans_obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_transId;
char h_tranType[16];
int h_transAmount;
int h_accountNo;
int h_balance;
/* EXEC SQL END DECLARE SECTION; */ 

trans_obj.setTransactionType("withdraw");
h_transAmount=trans_obj.getAmount();
if(DB::checkStatus(trans_obj.getAccountNo())== FAILED)
	{
	cout<<"ACCOUNT INACTIVE/Invalid Account No"<<endl;
	return FAILED;
	}

if(DB::checkBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
	{
	cout<<"cannot retrieve balance"<<endl;
	return FAILED;
	}
if(h_balance<h_transAmount)
	{
	cout<<"not sufficient balance to withdraw!"<<endl;
	return FAILED;
	}
h_balance=h_balance-h_transAmount;
if(DB::updateBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
	{
	cout<<"cannot update balance!/transaction failled"<<endl;
	return FAILED;
	}
istringstream(trans_obj.getAccountNo()) >> h_accountNo;

if(DB::updateTransactionTable(trans_obj)==FAILED)
	{
	cout<<"update transaction failed!"<<endl;
	return FAILED;
	}
        /* EXEC SQL COMMIT; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )664;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
return SUCCESS;
}

int DB::deposit(Transaction &trans_obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_transId;
char h_tranType[16];
int h_transAmount;
int h_accountNo;
int h_balance;
/* EXEC SQL END DECLARE SECTION; */ 

trans_obj.setTransactionType("deposit");
h_transAmount=trans_obj.getAmount();
if(DB::checkStatus(trans_obj.getAccountNo())== FAILED)
        {
        cout<<"ACCOUNT INACTIVE"<<endl;
        return FAILED;
        }

if(DB::checkBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
        {
        cout<<"cannot retrieve balance"<<endl;
        return FAILED;
        }
/*
if(h_balance<h_transAmount)
        {
        cout<<"not sufficient balance to withdraw!"<<endl;
        return FAILED;
        }
*/
h_balance=h_balance+h_transAmount;
if(DB::updateBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
        {
        cout<<"cannot update balance!/transaction failled"<<endl;
        return FAILED;
        }
istringstream(trans_obj.getAccountNo()) >> h_accountNo;

if(DB::updateTransactionTable(trans_obj)==FAILED)
        {
        cout<<"update transaction failed!"<<endl;
        return FAILED;
        }
/* EXEC SQL COMMIT; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )679;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



return SUCCESS;
}
                                                                                  




int DB::updateTransactionTable(Transaction trans_obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_transId;
int h_accountNo;
char h_transType[21];
int h_transAmount;
char h_source[7];
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(trans_obj.getAccountNo()) >> h_accountNo;
h_transAmount=trans_obj.getAmount();
strcpy(h_transType,trans_obj.getTransactionType().c_str());
//strcpy(h_source,trans_obj.getsource().c_str());

/* EXEC SQL INSERT INTO h95_group6_transaction values(h95_group6_transactionsequence.nextval,:h_accountNo,:h_transType,:h_transAmount,sysdate); */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into h95_group6_transaction  values (h95_group6_transa\
ctionsequence.nextval ,:b0,:b1,:b2,sysdate)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )694;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_accountNo;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_transType;
sqlstm.sqhstl[1] = (unsigned long )21;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_transAmount;
sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode != 0)
	{
	cout<<sqlca.sqlcode<<endl;
	cout<<"cannot update transaction table/transaction failed!"<<endl;
	return FAILED;
	}
//EXEC SQL SELECT transactionId into :h_transId FROM h96_group6_transaction where
return SUCCESS;
}


int DB::checkStatus(string accountNo)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_accountNo;
char h_status[9];
/* EXEC SQL END DECLARE SECTION; */ 

 istringstream(accountNo) >> h_accountNo;
/* EXEC SQL SELECT accountstatus INTO :h_status FROM h95_group6_account WHERE accountno=:h_accountNo; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select accountstatus into :b0  from h95_group6_account where \
accountno=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )721;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)h_status;
sqlstm.sqhstl[0] = (unsigned long )9;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_accountNo;
sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if(sqlca.sqlcode != 0)
        {
        cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot retrieve status/invalid account id"<<endl;
      return FAILED;
        }
cout<<"status="<<h_status<<"axso"<<endl;
string ss(h_status);
cout<<"string(ss)="<<ss<<endl;
int a=1;
 if (strcmp(h_status,"inactive") == 0)
	{
	cout<<"account inactive"<<endl; 
	return FAILED;
	}
 cout<<"account active"<<endl;
 return SUCCESS;
}


int DB::updateBalance(string accountNo,int h_balance)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_accountNo;
/* EXEC SQL END DECLARE SECTION; */ 

 istringstream(accountNo) >> h_accountNo;
cout<<"int accountno="<<h_accountNo;
/* EXEC SQL UPDATE h95_group6_account SET accountbal=:h_balance where accountno=:h_accountNo; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_account  set accountbal=:b0 where accountno\
=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )744;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_balance;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_accountNo;
sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if(sqlca.sqlcode != 0)
        {
        cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot update account balance/invalid account id"<<endl;
      return FAILED;
        }
return SUCCESS;
}



int DB::checkBalance(string accountNo,int& h_balance)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_accountNo;
/* EXEC SQL END DECLARE SECTION; */ 

 istringstream(accountNo) >> h_accountNo;
/* EXEC SQL SELECT accountbal into :h_balance from h95_group6_account WHERE accountno=:h_accountNo; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select accountbal into :b0  from h95_group6_account where acc\
ountno=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )767;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_balance;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_accountNo;
sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


 if(sqlca.sqlcode != 0)
        {
        cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot retrieve account balance/invalid account no"<<endl;
      return FAILED;
        }
return SUCCESS;
}






void DB :: fetchAllCustomer(vector<Customer> &customer_list,vector<Account> &acc_list)
{
/* exec sql begin declare section; */ 

char h_customerid[16];
char h_accCustomerid[21];
char h_customername[31];
char h_accountno[7];
char h_accounttype[11];
double h_accountbal;
/* exec sql end declare section; */ 


/* EXEC SQL DECLARE cust_cursor CURSOR FOR SELECT a.customerid,a.customername,b.customerid,b.accountno,nvl(accountbal.b,0),b.accounttype from h95_group6_customer a,h95_group6_account b WHERE a.customerid=b.customerid; */ 


/* EXEC SQL OPEN cust_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = sq0019;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )790;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqcmod = (unsigned int )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


for(;;)
{
/* EXEC SQL FETCH cust_cursor INTO :h_customerid,:h_customername,:h_accCustomerid,:h_accountno,:h_accountbal,:h_accounttype; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )805;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqfoff = (         int )0;
sqlstm.sqfmod = (unsigned int )2;
sqlstm.sqhstv[0] = (unsigned char  *)h_customerid;
sqlstm.sqhstl[0] = (unsigned long )16;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_customername;
sqlstm.sqhstl[1] = (unsigned long )31;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)h_accCustomerid;
sqlstm.sqhstl[2] = (unsigned long )21;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)h_accountno;
sqlstm.sqhstl[3] = (unsigned long )7;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (unsigned char  *)&h_accountbal;
sqlstm.sqhstl[4] = (unsigned long )sizeof(double);
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         short *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned long )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (unsigned char  *)h_accounttype;
sqlstm.sqhstl[5] = (unsigned long )11;
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         short *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned long )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode < 0)
{   break;  }
//cout<<"code="<<sqlca.sqlcode<<endl;
Customer cust_obj;
cust_obj.setCustomerName((string)h_customername);
cust_obj.setCustomerId((string)h_customerid);
customer_list.push_back(cust_obj);
Account acc_obj;
acc_obj.setAccountNo((string)h_accountno);
acc_obj.setCustomerId((string)h_accCustomerid);
acc_obj.setAccountBalance(h_accountbal);
acc_obj.setAccountType((string)h_accounttype);
acc_list.push_back(acc_obj);
}
/* EXEC SQL CLOSE cust_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )844;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

int DB::checkAccount(string accoutno)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_accountno;
/* EXEC SQL END DECLARE SECTION; */ 

 istringstream(accountno) >> h_accountno;

/* EXEC SQL SELECT accountno FROM h95_group6_account where accountno=:h_accountno; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select accountno  from h95_group6_account where accountno=:b0";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )859;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_accountno;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode != 0 )
{
cout<<"invalid account"<<endl; 
cout<<"code="<<sqlca.sqlcode<<endl;
return FAILED;
}
return SUCCESS;
}

int DB::openFdInDb(Account& fb_obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_fdId;
int h_fdAmount;
int h_fdDuration;
int h_accountNo;
int h_maturityValue;
float h_interest;
char h_maturityDate[15];
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(fb_obj.getAccountNo()) >> h_accountNo;
h_fdAmount=fb_obj.getFdAmount();
h_fdDuration=fb_obj.getFdDuration();

/* EXEC SQL SELECT interest INTO :h_interest FROM h95_group6_interest where duration=:h_fdDuration; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select interest into :b0  from h95_group6_interest where dura\
tion=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )878;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_interest;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_fdDuration;
sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode != 0 )
{
cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
h_maturityValue=h_fdAmount(1 + (h_interest*(h_fdDuration/12)));

/* EXEC SQL INSERT INTO h95_group6_fixeddeposit values(h95_group6_fd_sequence,:h_accountNo,:h_fdAmount,sysdate,add_months(sysdate,:h_fdDuration),:h_maturityValue); */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into h95_group6_fixeddeposit  values (h95_group6_fd_se\
quence,:b0,:b1,sysdate,add_months(sysdate,:b2),:b3)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )901;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_accountNo;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_fdAmount;
sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_fdDuration;
sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)&h_maturityValue;
sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode != 0 )
{
cout<<"cannot insert fd ib DB error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}

/* EXEC SQL SELECT fdid,maturitydate  INTO :h_fdId,:h_maturityDate from h95_group6_fixeddeposit where fdamount=:h_fdAmount and accountno=:h_accountNo; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select fdid ,maturitydate into :b0,:b1  from h95_group6_fixed\
deposit where (fdamount=:b2 and accountno=:b3)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )932;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdId;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_maturityDate;
sqlstm.sqhstl[1] = (unsigned long )15;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_fdAmount;
sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)&h_accountNo;
sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


if(sqlca.sqlcode != 0 )
{
cout<<"cannot fetch fdid fro db error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;

}
fb_obj.setFdId(h_fdId);
fb_obj.setFdAmount(h_fdAmount);
fb_obj.setFdEndDate((string)h_maturityDate);

/* EXEC SQL COMMIT; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )963;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCESS;
}


/* 

  catch(SqlError sqlError)
  {
    sqlError.displaySqlError();
  }
  return FAILED;
}
*/
