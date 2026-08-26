#include<unistd.h>
/**
 *_putchar-writesthecharacterctostdout
 *@c:Thecharactertoprint
 *
 *Return:Onsuccess1.
 *Onerror,-1isreturned,anderrnoissetappropriately.
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
