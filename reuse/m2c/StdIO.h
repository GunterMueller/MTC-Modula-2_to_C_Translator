#define DEFINITION_StdIO

extern void StdIO_ReadClose ARGS(());
extern INTEGER StdIO_Read ARGS((ADDRESS Buffer, CARDINAL Size));
extern CHAR StdIO_ReadC ARGS(());
extern INTEGER StdIO_ReadI ARGS(());
extern REAL StdIO_ReadR ARGS(());
extern BOOLEAN StdIO_ReadB ARGS(());
extern INTEGER StdIO_ReadN ARGS((INTEGER Base));
extern void StdIO_ReadS ARGS((CHAR s[], LONGCARD ));
extern SHORTINT StdIO_ReadShort ARGS(());
extern LONGINT StdIO_ReadLong ARGS(());
extern CARDINAL StdIO_ReadCard ARGS(());
extern void StdIO_ReadNl ARGS(());
extern void StdIO_UnRead ARGS(());
extern BOOLEAN StdIO_EndOfLine ARGS(());
extern BOOLEAN StdIO_EndOfFile ARGS(());
extern void StdIO_WriteClose ARGS(());
extern void StdIO_WriteFlush ARGS(());
extern INTEGER StdIO_Write ARGS((ADDRESS Buffer, CARDINAL Size));
extern void StdIO_WriteC ARGS((CHAR c));
extern void StdIO_WriteI ARGS((INTEGER n, CARDINAL FieldWidth));
extern void StdIO_WriteR ARGS((REAL n, CARDINAL Before, CARDINAL After, CARDINAL Exp));
extern void StdIO_WriteB ARGS((BOOLEAN b));
extern void StdIO_WriteN ARGS((LONGCARD n, CARDINAL FieldWidth, CARDINAL Base));
extern void StdIO_WriteS ARGS((CHAR s[], LONGCARD ));
extern void StdIO_WriteShort ARGS((SHORTINT n, CARDINAL FieldWidth));
extern void StdIO_WriteLong ARGS((LONGINT n, CARDINAL FieldWidth));
extern void StdIO_WriteCard ARGS((CARDINAL n, CARDINAL FieldWidth));
extern void StdIO_WriteNl ARGS(());
extern void StdIO_CloseIO ARGS(());
extern void BEGIN_StdIO();
