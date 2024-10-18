#include "dbf.h"
#include <stdio.h>

void printDBFFileType(DBF_FileType fileType)
{
    switch (fileType)
    {
    case DBF_FOXBASE_DBASE2:
        printf("FoxBASE / dBase II\n");
        break;
    case DBF_FOXBASEPLUS_DBASE3:
        printf("FoxBASE+ / FoxPro / dBase III PLUS / dBase IV, no memo\n");
        break;
    case DBF_VISUAL_FOXPRO:
        printf("Visual FoxPro\n");
        break;
    case DBF_VISUAL_FOXPRO_AUTOINC:
        printf("Visual FoxPro, autoincrement enabled\n");
        break;
    case DBF_VISUAL_FOXPRO_VAR_TYPES:
        printf("Visual FoxPro, Varchar, Varbinary, or Blob-enabled\n");
        break;
    case DBF_DBASE_IV_SQL_NO_MEMO:
        printf("dBASE IV SQL table files, no memo\n");
        break;
    case DBF_DBASE_IV_SQL_SYSTEM_NO_MEMO:
        printf("dBASE IV SQL system files, no memo\n");
        break;
    case DBF_FOXBASEPLUS_DBASE3_MEMO:
        printf("FoxBASE+/dBASE III PLUS, with memo\n");
        break;
    case DBF_DBASE_IV_WITH_MEMO:
        printf("dBASE IV with memo\n");
        break;
    case DBF_DBASE_IV_SQL_MEMO:
        printf("dBASE IV SQL table files, with memo\n");
        break;
    case DBF_FOXPRO_2X_WITH_MEMO:
        printf("FoxPro 2.x (or earlier) with memo\n");
        break;
    case DBF_FOXBASE_UNKNOWN:
        printf("FoxBASE (?)\n");
        break;
    default:
        printf("Unknown file type\n");
        break;
    }
}