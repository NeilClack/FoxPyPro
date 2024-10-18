#ifndef DBF_H
#define DBF_H

typedef enum
{
    DBF_BLOB = 'W',      // Blob
    DBF_CHAR = 'C',      // Character
    DBF_CURRENCY = 'Y',  // Currency
    DBF_DOUBLE = 'B',    // Double
    DBF_DATE = 'D',      // Date
    DBF_DATETIME = 'T',  // DateTime
    DBF_FLOAT = 'F',     // Float
    DBF_GENERAL = 'G',   // General
    DBF_INTEGER = 'I',   // Integer
    DBF_LOGICAL = 'L',   // Logical
    DBF_MEMO = 'M',      // Memo
    DBF_NUMERIC = 'N',   // Numeric
    DBF_PICTURE = 'P',   // Picture
    DBF_VARBINARY = 'Q', // Varbinary
    DBF_VARCHAR = 'V'    // Varchar
} DBF_DataType;

// DBF File Types
typedef enum
{
    DBF_FOXBASE_DBASE2 = 0x02,              // FoxBASE / dBase II
    DBF_FOXBASEPLUS_DBASE3 = 0x03,          // FoxBASE+ / FoxPro / dBase III PLUS / dBase IV, no memo
    DBF_VISUAL_FOXPRO = 0x30,               // Visual FoxPro
    DBF_VISUAL_FOXPRO_AUTOINC = 0x31,       // Visual FoxPro, autoincrement enabled
    DBF_VISUAL_FOXPRO_VAR_TYPES = 0x32,     // Visual FoxPro, Varchar, Varbinary, or Blob-enabled
    DBF_DBASE_IV_SQL_NO_MEMO = 0x43,        // dBASE IV SQL table files, no memo
    DBF_DBASE_IV_SQL_SYSTEM_NO_MEMO = 0x63, // dBASE IV SQL system files, no memo
    DBF_FOXBASEPLUS_DBASE3_MEMO = 0x83,     // FoxBASE+/dBASE III PLUS, with memo
    DBF_DBASE_IV_WITH_MEMO = 0x8B,          // dBASE IV with memo
    DBF_DBASE_IV_SQL_MEMO = 0xCB,           // dBASE IV SQL table files, with memo
    DBF_FOXPRO_2X_WITH_MEMO = 0xF5,         // FoxPro 2.x (or earlier) with memo
    DBF_FOXBASE_UNKNOWN = 0xFB              // FoxBASE (?)
} DBF_FileType;

void printDBFFileType(DBF_FileType fileType);

#endif