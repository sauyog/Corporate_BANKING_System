
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
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    "Model/DB1.pc"
};


static unsigned int sqlctx = 307843;


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

 static const char *sq0013 = 
"select rtrim(a.customerid) ,a.customername ,rtrim(b.customerid) ,b.accountno\
 ,nvl(b.accountbal,0) ,b.accounttype  from h95_group6_customer a ,h95_group6_a\
ccount b where (a.customerid=b.customerid and accountstatus<>'inactive')      \
     ";

 static const char *sq0039 = 
"select transactionid ,rtrim(transactiontype) ,transactionamount ,transaction\
date ,rtrim(accountno)  from h95_group6_transaction where accountno=:b0       \
    ";

 static const char *sq0065 = 
"select transactiondate ,currentbalance  from h95_group6_transaction where ((\
accountno=:b0 and transactiondate>=to_date(:b1)) and transactiondate<=to_date(\
:b2)) order by transactionid            ";

 static const char *sq0067 = 
"select accountno  from h95_group6_account where (accounttype=:b0 and account\
status<>'inactive')           ";

 static const char *sq0083 = 
"select lockerid ,customername  from h95_group6_display_locker            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,1,0,0,
5,0,0,0,0,0,27,41,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,24,66,0,0,1,1,0,1,0,1,97,0,0,
55,0,0,3,0,0,29,74,0,0,0,0,0,1,0,
70,0,0,4,0,0,30,88,0,0,0,0,0,1,0,
85,0,0,5,72,0,4,104,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
112,0,0,6,117,0,3,154,0,0,9,9,0,1,0,1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,1,3,0,0,
1,97,0,0,1,97,0,0,1,3,0,0,1,97,0,0,
163,0,0,7,74,0,4,163,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
186,0,0,8,0,0,29,173,0,0,0,0,0,1,0,
201,0,0,9,54,0,2,189,0,0,1,1,0,1,0,1,3,0,0,
220,0,0,10,0,0,29,197,0,0,0,0,0,1,0,
235,0,0,11,252,0,4,221,0,0,8,1,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,2,4,0,0,2,97,0,0,1,3,0,0,
282,0,0,12,0,0,29,244,0,0,0,0,0,1,0,
297,0,0,13,237,0,9,277,0,0,0,0,0,1,0,
312,0,0,13,0,0,13,280,0,0,6,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,97,0,0,2,4,0,
0,2,97,0,0,
351,0,0,13,0,0,15,297,0,0,0,0,0,1,0,
366,0,0,14,70,0,4,313,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
389,0,0,15,0,0,29,322,0,0,0,0,0,1,0,
404,0,0,16,72,0,4,338,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
427,0,0,17,0,0,29,347,0,0,0,0,0,1,0,
442,0,0,18,71,0,5,367,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
465,0,0,19,0,0,29,370,0,0,0,0,0,1,0,
480,0,0,20,72,0,5,380,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
503,0,0,21,0,0,29,383,0,0,0,0,0,1,0,
518,0,0,22,72,0,5,393,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
541,0,0,23,0,0,29,396,0,0,0,0,0,1,0,
556,0,0,24,155,0,3,420,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,4,0,0,
583,0,0,25,183,0,3,432,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,4,0,0,
610,0,0,26,184,0,3,443,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,4,0,0,
637,0,0,27,212,0,3,455,0,0,3,3,0,1,0,1,3,0,0,1,97,0,0,1,4,0,0,
664,0,0,28,56,0,4,464,0,0,1,0,0,1,0,2,68,0,0,
683,0,0,29,104,0,4,476,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,68,0,0,
710,0,0,30,0,0,29,509,0,0,0,0,0,1,0,
725,0,0,31,75,0,5,521,0,0,1,1,0,1,0,1,97,0,0,
744,0,0,32,0,0,29,529,0,0,0,0,0,1,0,
759,0,0,33,0,0,29,577,0,0,0,0,0,1,0,
774,0,0,34,0,0,29,621,0,0,0,0,0,1,0,
789,0,0,35,108,0,3,644,0,0,4,4,0,1,0,1,3,0,0,1,97,0,0,1,4,0,0,1,4,0,0,
820,0,0,36,0,0,29,653,0,0,0,0,0,1,0,
835,0,0,37,74,0,4,667,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
858,0,0,38,65,0,5,696,0,0,2,2,0,1,0,1,4,0,0,1,3,0,0,
881,0,0,39,158,0,9,722,0,0,1,1,0,1,0,1,3,0,0,
900,0,0,39,0,0,13,726,0,0,5,0,0,1,0,2,3,0,0,2,97,0,0,2,4,0,0,2,97,0,0,2,3,0,0,
935,0,0,39,0,0,15,746,0,0,0,0,0,1,0,
950,0,0,40,71,0,4,759,0,0,2,1,0,1,0,2,4,0,0,1,3,0,0,
973,0,0,41,61,0,4,778,0,0,1,1,0,1,0,1,3,0,0,
992,0,0,42,69,0,4,805,0,0,2,1,0,1,0,2,4,0,0,1,3,0,0,
1015,0,0,43,134,0,3,814,0,0,5,5,0,1,0,1,3,0,0,1,4,0,0,1,3,0,0,1,4,0,0,1,4,0,0,
1050,0,0,44,107,0,4,820,0,0,4,2,0,1,0,2,3,0,0,2,97,0,0,1,4,0,0,1,3,0,0,
1081,0,0,45,0,0,29,835,0,0,0,0,0,1,0,
1096,0,0,46,119,0,4,854,0,0,3,1,0,1,0,2,3,0,0,2,97,0,0,1,3,0,0,
1123,0,0,47,96,0,4,862,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
1146,0,0,48,146,0,4,894,0,0,4,1,0,1,0,2,3,0,0,2,4,0,0,2,4,0,0,1,3,0,0,
1177,0,0,49,77,0,4,904,0,0,3,1,0,1,0,2,4,0,0,2,4,0,0,1,4,0,0,
1204,0,0,50,68,0,5,913,0,0,1,1,0,1,0,1,3,0,0,
1223,0,0,51,62,0,5,919,0,0,1,1,0,1,0,1,3,0,0,
1242,0,0,52,0,0,29,924,0,0,0,0,0,1,0,
1257,0,0,53,102,0,4,941,0,0,4,1,0,1,0,2,3,0,0,2,4,0,0,2,4,0,0,1,3,0,0,
1288,0,0,54,64,0,4,950,0,0,2,1,0,1,0,2,4,0,0,1,4,0,0,
1311,0,0,55,68,0,5,962,0,0,1,1,0,1,0,1,3,0,0,
1330,0,0,56,62,0,5,968,0,0,1,1,0,1,0,1,3,0,0,
1349,0,0,57,0,0,29,972,0,0,0,0,0,1,0,
1364,0,0,58,67,0,4,985,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
1387,0,0,59,89,0,3,1014,0,0,1,1,0,1,0,1,3,0,0,
1406,0,0,60,63,0,4,1021,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
1429,0,0,61,59,0,5,1028,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
1452,0,0,62,63,0,5,1029,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
1475,0,0,63,0,0,29,1035,0,0,0,0,0,1,0,
1490,0,0,64,107,0,4,1057,0,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
1513,0,0,65,194,0,9,1068,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
1540,0,0,65,0,0,13,1071,0,0,2,0,0,1,0,2,97,0,0,2,4,0,0,
1563,0,0,65,0,0,15,1081,0,0,0,0,0,1,0,
1578,0,0,66,98,0,4,1095,0,0,4,1,0,1,0,2,4,0,0,2,4,0,0,2,4,0,0,1,97,0,0,
1609,0,0,67,106,0,9,1126,0,0,1,1,0,1,0,1,97,0,0,
1628,0,0,67,0,0,13,1129,0,0,1,0,0,1,0,2,3,0,0,
1647,0,0,67,0,0,15,1142,0,0,0,0,0,1,0,
1662,0,0,68,109,0,4,1164,0,0,1,0,0,1,0,2,3,0,0,
1681,0,0,69,109,0,4,1171,0,0,1,0,0,1,0,2,3,0,0,
1700,0,0,70,110,0,4,1178,0,0,1,0,0,1,0,2,3,0,0,
1719,0,0,71,82,0,4,1186,0,0,1,0,0,1,0,2,3,0,0,
1738,0,0,72,115,0,4,1194,0,0,1,0,0,1,0,2,4,0,0,
1757,0,0,73,115,0,4,1202,0,0,1,0,0,1,0,2,4,0,0,
1776,0,0,74,116,0,4,1209,0,0,1,0,0,1,0,2,4,0,0,
1795,0,0,75,88,0,4,1216,0,0,1,0,0,1,0,2,4,0,0,
1814,0,0,76,74,0,4,1223,0,0,1,0,0,1,0,2,3,0,0,
1833,0,0,77,80,0,4,1230,0,0,1,0,0,1,0,2,3,0,0,
1852,0,0,78,84,0,4,1237,0,0,1,0,0,1,0,2,4,0,0,
1871,0,0,79,100,0,4,1244,0,0,1,0,0,1,0,2,4,0,0,
1890,0,0,80,88,0,4,1251,0,0,1,0,0,1,0,2,4,0,0,
1909,0,0,81,52,0,4,1258,0,0,1,0,0,1,0,2,3,0,0,
1928,0,0,82,304,0,44,1279,0,0,0,0,0,1,0,
1943,0,0,83,73,0,9,1287,0,0,0,0,0,1,0,
1958,0,0,83,0,0,13,1290,0,0,2,0,0,1,0,2,3,0,0,2,97,0,0,
1981,0,0,83,0,0,15,1301,0,0,0,0,0,1,0,
1996,0,0,84,35,0,1,1302,0,0,0,0,0,1,0,
};


#include "DB.h"
#include "../GlobalDefs/GlobalDefs.h"
#include<sstream>
#include<iostream>
#include "../AppClasses/Account/Account.h"
#include "../AppClasses/Customer/Customer.h"
#include <string>
#include "../UI/CustomerUI/CustomerUI.h"
//#include <sqlca.h>
using namespace std;
//#include "../ExceptionClasses/SqlError/SqlError.h"
/* exec sql include sqlca;
 */ 
/*
 * $Header: /usr/local/cvs/H95/H95_group6/banking/Model/DB1.cpp,v 1.1.1.2 2014/05/08 02:45:31 u751979 Exp $ sqlca.h 
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

//exec sql include sqlcxt;
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
   cout<<"DB Connect Error"<<endl;

//	cout<<sqlca.sqlcode<<endl;
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



    if(sqlca.sqlcode < 0){
//	cout<<sqlca.sqlcode<<endl;
//	cout<<"invalid user name password"<<endl;
	return FAILED;}
    if(sqlca.sqlcode != 0){
    //    cout<<sqlca.sqlcode<<endl;
  //      cout<<"invalid user name password"<<endl;
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
   long int h_number;
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
sqlstm.sqhstl[4] = (unsigned long )sizeof(long);
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
//	cout<<sqlca.sqlcode<<endl;
   //     cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
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


  	cout<<BOLDGREEN;
       
        stringstream ss;
        ss << h_customerid;
        string str = ss.str();
        c.setCustomerId(h_customerid);       
        cout<<"                               Welcome To QCity Bank"<<endl;
   	cout<<"                               your customer id is:"<<h_customerid<<endl<<endl;
        cout<<"                               Note : Please Note Your CustomerID"<<endl;
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
// 

int DB::deleteCustomer(Customer c)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

long int h_customerid;
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
sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
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


        if(sqlca.sqlcode != 0)
        {
        cout<<sqlca.sqlcode<<endl;
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      //  cout<<"Invalid Customer ID!!! Cannot delete Customer"<<endl;
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




int DB::viewCustomer(Customer& c, Account& a)
	{ 
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int h_customerid;
		char h_customername[25];
		char h_customeraddress[51];
		char h_customernumber[16];
		char h_accountno[21];
		float h_accountbal;
                char h_accounttype[20];

	/* EXEC SQL END DECLARE SECTION; */ 


	istringstream(c.getCustomerId()) >> h_customerid;


/* exec sql select a.customerid,a.customername,a.customeraddress,a.customernumber,b.accountno,b.accountbal,b.accounttype into :h_customerid,:h_customername,:h_customeraddress,:h_customernumber,:h_accountno,:h_accountbal,:h_accounttype from h95_group6_customer a , h95_group6_account b where a.customerid = :h_customerid and a.customerid=b.customerid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select a.customerid ,a.customername ,a.customeraddress ,a.cus\
tomernumber ,b.accountno ,b.accountbal ,b.accounttype into :b0,:b1,:b2,:b3,:b4\
,:b5,:b6  from h95_group6_customer a ,h95_group6_account b where (a.customerid\
=:b0 and a.customerid=b.customerid)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )235;
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
sqlstm.sqhstl[5] = (unsigned long )sizeof(float);
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         short *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned long )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqhstv[6] = (unsigned char  *)h_accounttype;
sqlstm.sqhstl[6] = (unsigned long )20;
sqlstm.sqhsts[6] = (         int  )0;
sqlstm.sqindv[6] = (         short *)0;
sqlstm.sqinds[6] = (         int  )0;
sqlstm.sqharm[6] = (unsigned long )0;
sqlstm.sqadto[6] = (unsigned short )0;
sqlstm.sqtdso[6] = (unsigned short )0;
sqlstm.sqhstv[7] = (unsigned char  *)&h_customerid;
sqlstm.sqhstl[7] = (unsigned long )sizeof(int);
sqlstm.sqhsts[7] = (         int  )0;
sqlstm.sqindv[7] = (         short *)0;
sqlstm.sqinds[7] = (         int  )0;
sqlstm.sqharm[7] = (unsigned long )0;
sqlstm.sqadto[7] = (unsigned short )0;
sqlstm.sqtdso[7] = (unsigned short )0;
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
       	//	 cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
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
		 a.setAccountType(h_accounttype);
		

        
        	/* EXEC SQL COMMIT; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )282;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      		return SUCCESS;

	}


/*


  catch(SqlError sqlError)
  {
    sqlError.displaySqlError();
  }
  return FAILED;
}*/

int DB :: fetchAllCustomer(vector<Customer> &customer_list,vector<Account> &acc_list)
{
/* exec sql begin declare section; */ 

char h_customerid[16];
char h_accCustomerid[16];
char h_customername[31];
char h_accountno[7];
char h_accounttype[11];
float h_accountbal;
/* exec sql end declare section; */ 


/* EXEC SQL DECLARE cust_cursor CURSOR FOR SELECT rtrim(a.customerid),a.customername,rtrim(b.customerid),b.accountno,nvl(b.accountbal,0),b.accounttype from h95_group6_customer a,h95_group6_account b WHERE a.customerid=b.customerid and accountstatus != 'inactive'; */ 

if(sqlca.sqlcode < 0)
{
//cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
/* EXEC SQL OPEN cust_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = sq0013;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )297;
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
sqlstm.offset = (unsigned int  )312;
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
sqlstm.sqhstl[4] = (unsigned long )sizeof(float);
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
//cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
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
sqlstm.offset = (unsigned int  )351;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;
}





int DB::checkAccno(long int& accno)
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	long int h_accno;
	long int h_accno2;
	/* EXEC SQL END DECLARE SECTION; */ 

	h_accno=accno; 
 
	/* exec sql select ACCOUNTNO into :h_accno2 from h95_group6_account where ACCOUNTNO = :h_accno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select ACCOUNTNO into :b0  from h95_group6_account where ACC\
OUNTNO=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )366;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&h_accno2;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (unsigned char  *)&h_accno;
 sqlstm.sqhstl[1] = (unsigned long )sizeof(long);
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
        {
        	cout<<sqlca.sqlcode<<endl;
      		cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
       		cout<<"Account Number Doesn't Exist"<<endl<<endl;
       		return FAILED;
        }
         accno = h_accno2;
         /* EXEC SQL COMMIT; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )389;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


         return SUCCESS;
 
}
 



int DB::checkCustomer(long int& cid)
{
        /* EXEC SQL BEGIN DECLARE SECTION; */ 

        long int h_cid;
        long int h_cid2;
        /* EXEC SQL END DECLARE SECTION; */ 

        h_cid=cid;

        /* exec sql select customerid into :h_cid2 from h95_group6_customer where cusomerid = :h_cid; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select customerid into :b0  from h95_group6_customer \
where cusomerid=:b1";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )404;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (unsigned char  *)&h_cid2;
        sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&h_cid;
        sqlstm.sqhstl[1] = (unsigned long )sizeof(long);
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
        {
                cout<<sqlca.sqlcode<<endl;
               // cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                   CustomerUI::displayMsg();
                return FAILED;
        }
         cid = h_cid2;
         /* EXEC SQL COMMIT; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )427;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


         return SUCCESS;

}








int DB:: updateCustomerMobileNumber(string& l_MobileNumber,string& l_customerid)
        {        
		/* exec sql begin declare section; */ 

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
                sqlstm.stmt = "update h95_group6_customer  set customernumbe\
r=:b0 where customerid=:b1";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )442;
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
                sqlstm.offset = (unsigned int  )465;
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
                sqlstm.offset = (unsigned int  )480;
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
                sqlstm.offset = (unsigned int  )503;
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
                sqlstm.offset = (unsigned int  )518;
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
                sqlstm.offset = (unsigned int  )541;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


                cout<<h_Pincode;
        }



int DB :: openAccountInDb(Account& acc_obj,char c,char d)
        {
                /* EXEC SQL BEGIN DECLARE SECTION; */ 

                int h_customerId;
                char h_accountType[11];
                float h_accountBal;
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
    //     cout<<"no credit debit"<<endl;
         /* EXEC SQL INSERT INTO h95_group6_account values(:h_customerId,h95_group6_account_accountno.nextval,:h_accountType,:h_accountBal,null,null,null,null,null,null,null,null,sysdate,'active'); */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 12;
         sqlstm.arrsiz = 9;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "insert into h95_group6_account  values (:b0,h95_grou\
p6_account_accountno.nextval ,:b1,:b2,null ,null ,null ,null ,null ,null ,null\
 ,null ,sysdate,'active')";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )556;
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
         sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
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
  //      cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
     	cout<<"Invalid customer ID"<<endl;
     	return FAILED;
        }
        }

           if(c=='n' && d=='y')
        {
      //   cout<<"only debit"<<endl;
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
         sqlstm.offset = (unsigned int  )583;
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
         sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
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
       	//		 cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
       	//		 cout<<"cannot add data"<<endl;
       			 return FAILED;
       		 }
        }
           if(c=='y' && d=='n')
       		 {
        //		 cout<<"only credit"<<endl;
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
         sqlstm.offset = (unsigned int  )610;
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
         sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
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
       	//	 	 cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
       	//		 cout<<"cannot add data"<<endl;
       			 return FAILED;
       		}
        }

           if(c=='y' && d=='y')
        {
         //		cout<<"both credit debit"<<endl;
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
         sqlstm.offset = (unsigned int  )637;
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
         sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
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
        //		cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      	//		cout<<"cannot add data"<<endl;
     			 return FAILED;
       		 }
        }

        /* EXEC SQL SELECT max(accountno) INTO :h_accountNo from h95_group6_account; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select max(accountno) into :b0  from h95_group6_accou\
nt ";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )664;
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
        string str1 = ss.str();
        acc_obj.setAccountNo(str1);
        
        /* EXEC SQL SELECT nvl(debitcardno,0),nvl(creditcardno,0) INTO :h_debitNo,:h_creditNo from h95_group6_account where accountno=:h_accountNo; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select nvl(debitcardno,0) ,nvl(creditcardno,0) into :\
b0,:b1  from h95_group6_account where accountno=:b2";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )683;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (unsigned char  *)&h_debitNo;
        sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
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
        sqlstm.sqhstv[2] = (unsigned char  *)&h_accountNo;
        sqlstm.sqhstl[2] = (unsigned long )sizeof(long);
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
        cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      cout<<"cannot debit credit no!"<<endl;
      return FAILED;
        }

	if(h_creditNo==0)
	{acc_obj.setCreditNo("NA");}
	else
	{
        ss << h_creditNo;
       string  str = ss.str();
        acc_obj.setCreditNo(str);
	}
	
	if(h_debitNo==0)
	{acc_obj.setDebitNo("NA");}
	else
	{
        ss << h_accountNo;
        string str = ss.str();
        acc_obj.setDebitNo(str);
	}

        Transaction trans_obj(str1,h_accountBal,"deposit",h_accountBal);
        if(DB::updateTransactionTable(trans_obj)==FAILED)
        {
   //     cout<<"cannot update transaction table"<<endl;
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
        sqlstm.offset = (unsigned int  )710;
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
        sqlstm.offset = (unsigned int  )725;
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
//                cout<<sqlca.sqlcode<<endl;
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
   sqlstm.offset = (unsigned int  )744;
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
float h_transAmount;
int h_accountNo;
float h_balance;
/* EXEC SQL END DECLARE SECTION; */ 

trans_obj.setTransactionType("withdraw");
h_transAmount=trans_obj.getAmount();
string msg;
if(DB::checkStatus(trans_obj.getAccountNo(),msg)== FAILED)
        {
       // cout<<"ACCOUNT INACTIVE/Invalid Account No"<<endl;
        return FAILED;
        }

if(DB::checkBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
        {
   //     cout<<"cannot retrieve balance"<<endl;
        return FAILED;
        }
if(h_balance<h_transAmount)
        {
        cout<<"not sufficient balance to withdraw!"<<endl;
        return FAILED;
        }
h_balance=h_balance-h_transAmount;
trans_obj.setCurrentBalance(h_balance);
if(DB::updateBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
        {
     //   cout<<"cannot update balance!/transaction failled"<<endl;
        return FAILED;
        }
istringstream(trans_obj.getAccountNo()) >> h_accountNo;
if(DB::updateTransactionTable(trans_obj)==FAILED)
        {
      //  cout<<"update transaction failed!"<<endl;
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
        sqlstm.offset = (unsigned int  )759;
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
float h_transAmount;
int h_accountNo;
float h_balance;
/* EXEC SQL END DECLARE SECTION; */ 

trans_obj.setTransactionType("deposit");
h_transAmount=trans_obj.getAmount();
string msg;
if(DB::checkStatus(trans_obj.getAccountNo(),msg)== FAILED)
        {
       // cout<<"ACCOUNT INACTIVE"<<endl;
        return FAILED;
        }

if(DB::checkBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
        {
       // cout<<"cannot retrieve balance"<<endl;
        return FAILED;
        }

h_balance=h_balance+h_transAmount;
trans_obj.setCurrentBalance(h_balance);
if(DB::updateBalance(trans_obj.getAccountNo(),h_balance) == FAILED)
        {
       // cout<<"cannot update balance!/transaction failled"<<endl;
        return FAILED;
        }
istringstream(trans_obj.getAccountNo()) >> h_accountNo;

if(DB::updateTransactionTable(trans_obj)==FAILED)
        {
       // cout<<"update transaction failed!"<<endl;
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
sqlstm.offset = (unsigned int  )774;
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
float h_transAmount;
char h_source[7];
float h_currentBalance;
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(trans_obj.getAccountNo()) >> h_accountNo;
h_transAmount=trans_obj.getAmount();
h_currentBalance=trans_obj.getCurrentBalance();
strcpy(h_transType,trans_obj.getTransactionType().c_str());
//strcpy(h_source,trans_obj.getsource().c_str());

/* EXEC SQL INSERT INTO h95_group6_transaction values(h95_group6_transactionsequence.nextval,:h_accountNo,:h_transType,:h_transAmount,sysdate,:h_currentBalance); */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into h95_group6_transaction  values (h95_group6_transa\
ctionsequence.nextval ,:b0,:b1,:b2,sysdate,:b3)";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )789;
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
sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)&h_currentBalance;
sqlstm.sqhstl[3] = (unsigned long )sizeof(float);
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


if(sqlca.sqlcode != 0)
        {
        cout<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;

        //cout<<"cannot update transaction table/transaction failed!"<<endl;
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
     sqlstm.offset = (unsigned int  )820;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//EXEC SQL SELECT transactionId into :h_transId FROM h96_group6_transaction where
return SUCCESS;
}



int DB::checkStatus(string accountNo,string& msg)
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
sqlstm.offset = (unsigned int  )835;
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
  //      cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      msg="Invalid account Id";
      return FAILED;
        }
//cout<<"status="<<h_status<<"axso"<<endl;
string ss(h_status);
//cout<<"string(ss)="<<ss<<endl;
//int a=1;
 if (strcmp(h_status,"inactive") == 0)
        {
        msg="Account inactive";
        return FAILED;
        }
 msg="Accountid valid and active";
 return SUCCESS;
}



int DB::updateBalance(string accountNo,float h_balance)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_accountNo;
/* EXEC SQL END DECLARE SECTION; */ 

 istringstream(accountNo) >> h_accountNo;
//cout<<"int accountno="<<h_accountNo;
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
sqlstm.offset = (unsigned int  )858;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_balance;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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
       // cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
      //cout<<"cannot update account balance/invalid account id"<<endl;
      return FAILED;
        }
return SUCCESS;
}



int DB :: fetchAllTransactionDetails(vector<Transaction> &trans_list , string Accountno)
{
//stringstream(Accountno) >> h_accountno;
/* exec sql begin declare section; */ 

int h_transactionid;
char h_transactiontype[21];
float h_transactionamount;
char h_transactiondate[10];
int h_accountno;

/* EXEC SQL END DECLARE SECTION; */ 

stringstream(Accountno) >> h_accountno;
/* EXEC SQL DECLARE trans_cursor CURSOR FOR SELECT transactionid,rtrim(transactiontype),transactionamount,transactiondate,rtrim(accountno) from h95_group6_transaction   WHERE accountno=:h_accountno; */ 


/* EXEC SQL OPEN trans_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = sq0039;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )881;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqcmod = (unsigned int )0;
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



for(;;)
{
        /* EXEC SQL FETCH trans_cursor INTO :h_transactionid,:h_transactiontype,:h_transactionamount,:h_transactiondate,:h_accountno; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )900;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (         int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (unsigned char  *)&h_transactionid;
        sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)h_transactiontype;
        sqlstm.sqhstl[1] = (unsigned long )21;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (unsigned char  *)&h_transactionamount;
        sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         short *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned long )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (unsigned char  *)h_transactiondate;
        sqlstm.sqhstl[3] = (unsigned long )10;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         short *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned long )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (unsigned char  *)&h_accountno;
        sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         short *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned long )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
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
  //              cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                break;
        }
        Transaction Trans_obj;
        stringstream ss;
        ss << h_accountno;
        string str = ss.str();
        Trans_obj.setAccountNo(str);

        Trans_obj.setTransactionType((string)h_transactiontype);
        Trans_obj.setTransactionId(h_transactionid);
        Trans_obj.setTransactionDate((string)h_transactiondate);
        Trans_obj.setTransactionAmount(h_transactionamount);
        //  Trans_obj.setAccountNo(h_accountno);

        trans_list.push_back(Trans_obj);
}
/* EXEC SQL CLOSE trans_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )935;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



return SUCCESS;
}



int DB::checkBalance(string accountNo,float& h_balance)
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
sqlstm.offset = (unsigned int  )950;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_balance;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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
       // cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
    //  cout<<"cannot retrieve account balance/invalid account no"<<endl;
      return FAILED;
        }
return SUCCESS;
}



int DB::checkAccount(string accountno)
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
sqlstm.offset = (unsigned int  )973;
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
//cout<<"code="<<sqlca.sqlcode<<endl;
return FAILED;
}
return SUCCESS;
}



int DB::openFdInDb(Account& fb_obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_fdId;
float h_fdAmount;
int h_fdDuration;
int h_accountNo;
float h_maturityValue;
float h_interest;
char h_maturityDate[15];
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(fb_obj.getAccountNo()) >> h_accountNo;
h_fdAmount=fb_obj.getFdAmount();
h_fdDuration=fb_obj.getFdDuration();
//cout<<"duration="<<h_fdDuration<<endl;
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
sqlstm.offset = (unsigned int  )992;
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
//cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}

h_maturityValue=(h_fdAmount*(1 + (h_interest*(h_fdDuration/1200.00))));
//cout<<"maturity value="<<h_maturityValue<<endl;
/* EXEC SQL INSERT INTO h95_group6_fixeddeposit values(h95_group6_fd_sequence.nextval,:h_accountNo,:h_fdAmount,sysdate,add_months(sysdate,:h_fdDuration),:h_maturityValue,:h_interest,'active'); */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into h95_group6_fixeddeposit  values (h95_group6_fd_se\
quence.nextval ,:b0,:b1,sysdate,add_months(sysdate,:b2),:b3,:b4,'active')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1015;
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
sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
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
sqlstm.sqhstl[3] = (unsigned long )sizeof(float);
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         short *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned long )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (unsigned char  *)&h_interest;
sqlstm.sqhstl[4] = (unsigned long )sizeof(float);
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         short *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned long )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
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
//cout<<"cannot insert fd in DB error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
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
sqlstm.offset = (unsigned int  )1050;
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
sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
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
//cout<<"cannot fetch fdid fro db error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;

}
        stringstream ss;
        ss << h_fdId;
        string str = ss.str();
        fb_obj.setFdId(str);

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
sqlstm.offset = (unsigned int  )1081;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;
}




int DB::checkMaturityDate(Account& fd_obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_fdid;
int h_months;
int h_fdDuration;
char h_startDate[15];
char h_maturitydate[15];
/* EXEC SQL END DECLARE SECTION; */ 

//h_fdDuration=fd_obj.getFdDuration();
istringstream(fd_obj.getFdId()) >> h_fdid;
//cout<<"fdid(in check maturity date)="<<h_fdid<<endl;
/* EXEC SQL SELECT months_between(maturitydate,fdstartdate),maturitydate INTO :h_fdDuration,:h_maturitydate from h95_group6_fixeddeposit where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select months_between(maturitydate,fdstartdate) ,maturitydate\
 into :b0,:b1  from h95_group6_fixeddeposit where fdid=:b2";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1096;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdDuration;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_maturitydate;
sqlstm.sqhstl[1] = (unsigned long )15;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_fdid;
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


if(sqlca.sqlcode != 0 )
{
//cout<<"cannot fetch duration!"<<endl;
//cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}

/* EXEC SQL SELECT months_between(sysdate,fdstartdate) INTO :h_months from h95_group6_fixeddeposit where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select months_between(sysdate,fdstartdate) into :b0  from h95\
_group6_fixeddeposit where fdid=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1123;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_months;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_fdid;
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
cout<<"invalid fdid/inactive fd"<<endl;
//cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
fd_obj.setFdEndDate((string)h_maturitydate);
//cout<<"months="<<h_months;
//cout<<"h_fdDuration="<<h_fdDuration<<endl;
if(h_months>=h_fdDuration)
{return SUCCESS;}
return FAILED;
}



int DB::withdrawFdInDbBefore(Account &fd_obj)
{
//cout<<"in before function!"<<endl;
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_fdid;
int h_fdDuration;
float h_interestRate;
int h_months;
float h_fdAmount;
float h_interest;
float h_penalty;
float h_tax;
float h_maturityValue;
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(fd_obj.getFdId()) >> h_fdid;
/* EXEC SQL SELECT months_between(fdstartdate,sysdate),interest,fdamount INTO :h_months,:h_interestRate,:h_fdAmount from h95_group6_fixeddeposit where fdid=:h_fdid and status='active'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select months_between(fdstartdate,sysdate) ,interest ,fdamoun\
t into :b0,:b1,:b2  from h95_group6_fixeddeposit where (fdid=:b3 and status='a\
ctive')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1146;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_months;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_interestRate;
sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_fdAmount;
sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)&h_fdid;
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
//cout<<"error"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
cout<<"inactive FDid!"<<endl;
return FAILED;
}
h_months=0-h_months;
h_interest=(h_fdAmount*h_months*h_interestRate/1200.00);
cout<<"total interest is: "<<h_interest<<endl;
/* EXEC SQL SELECT penalty,tax into :h_penalty,:h_tax from h95_group6_interest where interest=:h_interestRate; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select penalty ,tax into :b0,:b1  from h95_group6_interest wh\
ere interest=:b2";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1177;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_penalty;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_tax;
sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_interestRate;
sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
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


h_interest=h_interest*(1-(h_penalty/100.00));
cout<<"penalty is "<<h_penalty<<"%"<<endl;
cout<<"interest after penalty is: "<<h_interest<<endl;
h_interest=h_interest*(1-(h_tax/100.00));
cout<<"tax applied is:"<<h_tax<<"%"<<endl;
cout<<"net profit after applying tax is: "<<h_interest;
h_maturityValue=h_fdAmount+h_interest;
cout<<"total amount you get is: "<<h_maturityValue<<endl;
/* EXEC SQL UPDATE h95_group6_fixeddeposit set status='inactive' where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_fixeddeposit  set status='inactive' where f\
did=:b0";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1204;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdid;
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
//cout<<"error=="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
/* EXEC SQL UPDATE h95_group6_locker set status='inactive' where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_locker  set status='inactive' where fdid=:b\
0";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1223;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdid;
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


if(sqlca.sqlcode == 0)
{
cout<<"please handover locker keys!"<<endl;
}
/* EXEC SQL COMMIT; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1242;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;
}


int DB::withdrawFdInDb(Account& fd_obj)
{
cout<<"in after function!"<<endl;
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_maturityValue;
float h_tax;
float h_fdAmount;
int h_fdid;
float h_ir;
float h_interest;
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(fd_obj.getFdId()) >> h_fdid;
/* EXEC SQL SELECT maturityvalue,fdamount,interest INTO :h_maturityValue,:h_fdAmount,:h_ir from h95_group6_fixeddeposit where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select maturityvalue ,fdamount ,interest into :b0,:b1,:b2  fr\
om h95_group6_fixeddeposit where fdid=:b3";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1257;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_maturityValue;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_fdAmount;
sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_ir;
sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)&h_fdid;
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
cout<<"error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}

h_interest=h_maturityValue-h_fdAmount;
//cout<<"int="<<h_interest<<endl;
/* EXEC SQL SELECT tax INTO :h_tax from h95_group6_interest where interest=:h_ir; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select tax into :b0  from h95_group6_interest where interest=\
:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1288;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_tax;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_ir;
sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
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
cout<<"error(tax)="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}

h_interest=h_interest*(1-(h_tax/100.00));
cout<<"tax="<<h_tax<<"%"<<endl;
h_fdAmount=h_interest+h_fdAmount;
cout<<"total amount you get is="<<h_fdAmount<<endl;
fd_obj.setFdAmount(h_fdAmount);
/* EXEC SQL UPDATE h95_group6_fixeddeposit set status='inactive' where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_fixeddeposit  set status='inactive' where f\
did=:b0";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1311;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdid;
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
cout<<"error(update fd status)="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
/* EXEC SQL UPDATE h95_group6_locker set status='inactive' where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_locker  set status='inactive' where fdid=:b\
0";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1330;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdid;
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


if(sqlca.sqlcode==0)
cout<<"please handover locker keys!"<<endl;

/* EXEC SQL COMMIT; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1349;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;

}


int DB::checkFdId(string p_fdid)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_fdid;
char h_status[9];
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(p_fdid) >> h_fdid;
/* EXEC SQL SELECT status into :h_status from h95_group6_fixeddeposit where fdid=:h_fdid; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select status into :b0  from h95_group6_fixeddeposit where fd\
id=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1364;
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
sqlstm.sqhstv[1] = (unsigned char  *)&h_fdid;
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
//cout<<"invalid account"<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}
cout<<"h_status="<<h_status<<endl;
string ss(h_status);
//cout<<"string(ss)="<<ss<<endl;
 if (strcmp(h_status,"inactive") == 0)
{
cout<<"inactive account"<<endl;
return FAILED;
}
return SUCCESS;
}



int DB::availLocker(Account& obj)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_LockerId;
int h_FdId;
int h_AccountNo;
/* EXEC SQL END DECLARE SECTION; */ 

istringstream(obj.getFdId()) >> h_FdId;
istringstream(obj.getAccountNo()) >> h_AccountNo;

/* EXEC SQL INSERT INTO h95_group6_locker values(h95_group6_account_lockerid.nextval,:h_FdId,'active'); */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "insert into h95_group6_locker  values (h95_group6_account_loc\
kerid.nextval ,:b0,'active')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1387;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_FdId;
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
cout<<"cannot insert locker in DB error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;
}

/* EXEC SQL SELECT lockerid  INTO :h_LockerId from h95_group6_locker where fdid=:h_FdId; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select lockerid into :b0  from h95_group6_locker where fdid=:\
b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1406;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_LockerId;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_FdId;
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
cout<<"cannot fetch fdid fro db error="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
return FAILED;

}
/* EXEC SQL UPDATE h95_group6_account set fdid=:h_FdId where accountno=:h_AccountNo; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_account  set fdid=:b0 where accountno=:b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1429;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_FdId;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_AccountNo;
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


/* EXEC SQL UPDATE h95_group6_account set lockerid=:h_LockerId where accountno=:h_AccountNo; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "update h95_group6_account  set lockerid=:b0 where accountno=:\
b1";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1452;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_LockerId;
sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)&h_AccountNo;
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




obj.setLockerId(h_LockerId);


/* EXEC SQL COMMIT; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1475;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;

}



int DB::fetchAllTransactionForInterest(string Accountno,vector<string>& transDate_list,vector<float>& balobj)
{
        /* EXEC SQL BEGIN DECLARE SECTION; */ 

        char h_accountno[15];
        float h_accountbal;
        char h_transactiondate[10];
        float h_interest;
        char h_lastday[15];
        float h_balance;
        float h_fees;
        char h_firstday[15];
         /* EXEC SQL END DECLARE SECTION; */ 

        strcpy(h_accountno,Accountno.c_str());

         //istringstream(Accountno) >> h_accountno;
        /* EXEC SQL SELECT last_day(add_months(sysdate,-1)),trunc(add_months(sysdate,-1),'month') INTO :h_lastday,:h_firstday from dual; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select last_day(add_months(sysdate,(-1))) ,trunc(add_\
months(sysdate,(-1)),'month') into :b0,:b1  from dual ";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1490;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (unsigned char  *)h_lastday;
        sqlstm.sqhstl[0] = (unsigned long )15;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)h_firstday;
        sqlstm.sqhstl[1] = (unsigned long )15;
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


        cout<<"last date="<<h_lastday<<endl;
        cout<<"first day="<<h_firstday<<endl;
        /* EXEC SQL DECLARE interest_cursor CURSOR FOR SELECT transactiondate,currentbalance from h95_group6_transaction  where accountno=:h_accountno and transactiondate>=to_date(:h_firstday) and transactiondate<=to_date(:h_lastday) order by transactionid; */ 

 if(sqlca.sqlcode != 0)
        {
                cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;


        }
/* EXEC SQL OPEN interest_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = sq0065;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1513;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqcmod = (unsigned int )0;
sqlstm.sqhstv[0] = (unsigned char  *)h_accountno;
sqlstm.sqhstl[0] = (unsigned long )15;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         short *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned long )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (unsigned char  *)h_firstday;
sqlstm.sqhstl[1] = (unsigned long )15;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)h_lastday;
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


for(;;)
{
        /* EXEC SQL FETCH interest_cursor INTO :h_transactiondate,:h_accountbal; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1540;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (         int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (unsigned char  *)h_transactiondate;
        sqlstm.sqhstl[0] = (unsigned long )10;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&h_accountbal;
        sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
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
                cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                break;
        }
cout<<"dateee==="<<h_transactiondate;
transDate_list.push_back((string)h_transactiondate);
balobj.push_back(h_accountbal);
}
/* EXEC SQL CLOSE interest_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1563;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;
}


int DB::getAccountInterest(string p_type,float& p_interest,float& p_fees,float& p_amb)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

char h_type[15];
float h_interest;
float h_fees;
float h_amb;
/* EXEC SQL END DECLARE SECTION; */ 

strcpy(h_type,p_type.c_str());
/* EXEC SQL SELECT interest,fees,amb INTO :h_interest,:h_fees,:h_amb FROM h95_group6_accountinterest where accounttype=:h_type; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select interest ,fees ,amb into :b0,:b1,:b2  from h95_group6_\
accountinterest where accounttype=:b3";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1578;
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
sqlstm.sqhstv[1] = (unsigned char  *)&h_fees;
sqlstm.sqhstl[1] = (unsigned long )sizeof(float);
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         short *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned long )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (unsigned char  *)&h_amb;
sqlstm.sqhstl[2] = (unsigned long )sizeof(float);
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         short *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned long )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (unsigned char  *)h_type;
sqlstm.sqhstl[3] = (unsigned long )15;
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


 if(sqlca.sqlcode != 0)
        {
                cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                cout<<"cannot fetch interest from interest table!"<<endl;
                  return FAILED;
        }

p_interest=h_interest;
p_fees=h_fees;
p_amb=h_amb;

return SUCCESS;
}


int DB::fetchAllAccount(vector<string> &acc_list,string p_type)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

char h_type[15];
int h_accountno;
/* EXEC SQL END DECLARE SECTION; */ 

// ostringstream convert;
 string result;
strcpy(h_type,p_type.c_str());
/* EXEC SQL DECLARE acc_cursor CURSOR FOR SELECT accountno from h95_group6_account where accounttype=:h_type and accountstatus != 'inactive'; */ 

 if(sqlca.sqlcode != 0)
        {
                cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
/* EXEC SQL OPEN acc_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = sq0067;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1609;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqcmod = (unsigned int )0;
sqlstm.sqhstv[0] = (unsigned char  *)h_type;
sqlstm.sqhstl[0] = (unsigned long )15;
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


for(;;)
{
 /* EXEC SQL FETCH acc_cursor INTO :h_accountno; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )1628;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqfoff = (         int )0;
 sqlstm.sqfmod = (unsigned int )2;
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


        if(sqlca.sqlcode != 0)
        {
               // cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                break;
        }

ostringstream convert;
convert << h_accountno;
result = convert.str();
//cout<<"************"<<result<<endl;
acc_list.push_back(result);
}
/* EXEC SQL CLOSE acc_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1647;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


return SUCCESS;
}


int DB::generateMisInDb(int &p_customer,int &p_account,int &p_saving,float &f_saving,int  &p_salary,float  &f_salary,int  &p_current,float  &f_current,int  &p_fd,float  &f_fd,float &fdinterest,float &f_account,int  &p_locker)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int h_customer;
int h_account;
int h_saving;
float h_fsaving;
int h_salary;
float h_fsalary;
int h_current;
float h_fcurrent;
int h_fd;
float h_ffd;
float h_fdinterest;
float h_faccount;
int h_locker;
/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL SELECT count(*) INTO :h_saving from h95_group6_account where accountstatus!='inactive' and accounttype='saving'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_account where (acc\
ountstatus<>'inactive' and accounttype='saving')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1662;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_saving;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"NO OF SAVING ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_saving=h_saving;
/* EXEC SQL SELECT count(*) INTO :h_salary from h95_group6_account where accountstatus!='inactive' and accounttype='salary'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_account where (acc\
ountstatus<>'inactive' and accounttype='salary')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1681;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_salary;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"NO OF salary ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_salary=h_salary;
/* EXEC SQL SELECT count(*) INTO :h_current from h95_group6_account where accountstatus!='inactive' and accounttype='current'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_account where (acc\
ountstatus<>'inactive' and accounttype='current')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1700;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_current;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"NO OF current ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_current=h_current;

/* EXEC SQL SELECT count(*) INTO :h_account from h95_group6_account where accountstatus!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_account where acco\
untstatus<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1719;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_account;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"NO OF total ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_account=h_account;

/* EXEC SQL SELECT sum(accountbal) INTO :h_fsalary from h95_group6_account where  accountstatus!='inactive' and  accounttype='salary'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum(accountbal) into :b0  from h95_group6_account wher\
e (accountstatus<>'inactive' and accounttype='salary')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1738;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fsalary;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"fund in salary salary ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
f_salary=h_fsalary;

/* EXEC SQL SELECT sum(accountbal) INTO :h_fsaving from h95_group6_account where  accountstatus!='inactive' and  accounttype='saving'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum(accountbal) into :b0  from h95_group6_account wher\
e (accountstatus<>'inactive' and accounttype='saving')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1757;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fsaving;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"fund in saving ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
f_saving=h_fsaving;
/* EXEC SQL SELECT sum(accountbal) INTO :h_fcurrent from h95_group6_account where  accountstatus!='inactive' and  accounttype='current'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum(accountbal) into :b0  from h95_group6_account wher\
e (accountstatus<>'inactive' and accounttype='current')";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1776;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fcurrent;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"fund in current ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
f_current=h_fcurrent;
/* EXEC SQL SELECT sum(accountbal) INTO :h_faccount from h95_group6_account where  accountstatus!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum(accountbal) into :b0  from h95_group6_account wher\
e accountstatus<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1795;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_faccount;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"fund in all ACCOUNT! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
f_account=h_faccount;
/* EXEC SQL SELECT count(*) INTO :h_locker from h95_group6_locker where status!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_locker where statu\
s<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1814;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_locker;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"NO OF total locker! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_locker=h_locker;
/* EXEC SQL SELECT count(*) INTO :h_fd from h95_group6_fixeddeposit where status!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_fixeddeposit where\
 status<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1833;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fd;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"NO OF total fd! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_fd=h_fd;
/* EXEC SQL SELECT sum(fdamount) INTO :h_ffd from h95_group6_fixeddeposit where status!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum(fdamount) into :b0  from h95_group6_fixeddeposit w\
here status<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1852;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_ffd;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"fund in fd! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
f_fd=h_ffd;
/* EXEC SQL SELECT sum(maturityvalue-fdamount) INTO :h_fdinterest from h95_group6_fixeddeposit where status!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum((maturityvalue-fdamount)) into :b0  from h95_group\
6_fixeddeposit where status<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1871;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_fdinterest;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"total fd interest! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
fdinterest=h_fdinterest;
/* EXEC SQL SELECT sum(accountbal) INTO :h_faccount from h95_group6_account where accountstatus!='inactive'; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select sum(accountbal) into :b0  from h95_group6_account wher\
e accountstatus<>'inactive'";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1890;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_faccount;
sqlstm.sqhstl[0] = (unsigned long )sizeof(float);
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"total fund in account! code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
f_account=h_faccount;
/* EXEC SQL SELECT count(*) INTO :h_customer from h95_group6_customer; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 12;
sqlstm.arrsiz = 9;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select count(*)  into :b0  from h95_group6_customer ";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1909;
sqlstm.selerr = (unsigned short)1;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (unsigned char  *)&h_customer;
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


         if(sqlca.sqlcode != 0)
        {
                cout<<"in no of customer  code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }
p_customer=h_customer;
cout<<"customer="<<p_customer;
return SUCCESS;
}



int DB :: viewAllLockerInDb(vector<string> &cust_list, vector<string> &locker_id)
{
          /* EXEC SQL BEGIN DECLARE SECTION; */ 

        int h_lockerid;
        char h_customername[50];
         /* EXEC SQL END DECLARE SECTION; */ 

         stringstream ss;
         string str1;
        /* exec sql create view h95_group6_display_locker as select A.customername,B.lockerid from h95_group6_customer A,h95_group6_locker B,h95_group6_fixeddeposit C ,h95_group6_account D where B.fdid=C.fdid and C.accountno=D.accountno and D.customerid = A.customerid and b.status != 'inactive' ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "create view h95_group6_display_locker as select A . c\
ustomername , B . lockerid from h95_group6_customer A , h95_group6_locker B , \
h95_group6_fixeddeposit C , h95_group6_account D where B . fdid = C . fdid and\
 C . accountno = D . accountno and D . customerid = A . customerid and b . sta\
tus != 'inactive'";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1928;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        if(sqlca.sqlcode != 0)
        {
                cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                return FAILED;
        }

        /* EXEC SQL DECLARE locker_cursor CURSOR FOR SELECT lockerid,customername from h95_group6_display_locker; */ 

        /* EXEC SQL OPEN locker_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0083;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1943;
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
                 /* EXEC SQL FETCH locker_cursor INTO :h_lockerid ,:h_customername; */ 

{
                 struct sqlexd sqlstm;
                 sqlstm.sqlvsn = 12;
                 sqlstm.arrsiz = 9;
                 sqlstm.sqladtp = &sqladt;
                 sqlstm.sqltdsp = &sqltds;
                 sqlstm.iters = (unsigned int  )1;
                 sqlstm.offset = (unsigned int  )1958;
                 sqlstm.selerr = (unsigned short)1;
                 sqlstm.cud = sqlcud0;
                 sqlstm.sqlest = (unsigned char  *)&sqlca;
                 sqlstm.sqlety = (unsigned short)4352;
                 sqlstm.occurs = (unsigned int  )0;
                 sqlstm.sqfoff = (         int )0;
                 sqlstm.sqfmod = (unsigned int )2;
                 sqlstm.sqhstv[0] = (unsigned char  *)&h_lockerid;
                 sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
                 sqlstm.sqhsts[0] = (         int  )0;
                 sqlstm.sqindv[0] = (         short *)0;
                 sqlstm.sqinds[0] = (         int  )0;
                 sqlstm.sqharm[0] = (unsigned long )0;
                 sqlstm.sqadto[0] = (unsigned short )0;
                 sqlstm.sqtdso[0] = (unsigned short )0;
                 sqlstm.sqhstv[1] = (unsigned char  *)h_customername;
                 sqlstm.sqhstl[1] = (unsigned long )50;
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
                cout<<"code="<<sqlca.sqlcode<<sqlca.sqlerrm.sqlerrmc<<endl;
                break;
        }
        ss << h_lockerid;
        str1 = ss.str();
        locker_id.push_back(str1);
        cust_list.push_back(h_customername);
        }
        /* EXEC SQL CLOSE locker_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1981;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


       /* EXEC SQL drop view h95_group6_display_locker; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 12;
       sqlstm.arrsiz = 9;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "drop view h95_group6_display_locker";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1996;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


        return SUCCESS;
}



/*

  catch(SqlError sqlError)
  {
    sqlError.displaySqlError();
  }
  return FAILED;
}
*/






 
