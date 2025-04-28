//file name: giaithua.c

#include <stdio.h>

//tính giai thừa cho một số nguyên 
int GiaiThua(int * songuyen){
	if (songuyen==0 || songuyen==1) return 1;
	else return songuyen * GiaiThua(songuyen - 1);
}
