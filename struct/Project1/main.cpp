#include <stdio.h>
#include <stdint.h>

#define SOURCE_ADDR (uint64_t)0xA0 //源地址
#define DEST_ADDR 	(uint64_t)0xA1 //目的地址
//#define ID_PARAM_SET_1    		((uint64_t)((SOURCE_ADDR << 21)\
//                                 & 0xFFE00000 | (DEST_ADDR << 13) \
//                                 & 0x001FE000 | (0xA00 << 1)\
//                                 & 0x00001FE0))  //参数设置指令1
//#define ID_PARAM_SET_2    		((uint64_t)((SOURCE_ADDR << 21)\
//                                 & 0xFFE00000 | (DEST_ADDR << 13) \
//                                 & 0x001FE000 | (0xA01 << 1)\
//                                 & 0x00001FE0))  //参数设置指令1
//#define ID_PARAM_SET_3     ((uint64_t)((SOURCE_ADDR << 21) & 0xFFE00000 | (DEST_ADDR << 13) & 0x001FE000 | (0xA10 << 1) & 0x00001FE0))
#define ID_PARAM_SET_4		((uint64_t)((DEST_ADDR << 21) & 0xFFFFFFFF | (SOURCE_ADDR << 13) & 0xFFFFFFFF | (0xB10 << 1) & 0xFFFFFFFF))  

//void printf_bin(unsigned int num)
//{
//    for (int i = 31; i >= 0; i--)
//    {
//        printf("%d",(num >> i) & 1);
//    }
//}

int main()
{
    uint64_t id_param = ID_PARAM_SET_4;

    
    //printf_bin(ID_PARAM_SET_4);
    printf("id = %0x", ID_PARAM_SET_4);
    return 0;
}