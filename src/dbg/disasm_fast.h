#ifndef _DISASM_FAST_H
#define _DISASM_FAST_H

#include "_global.h"
#include <capstone_wrapper.h>

void fillbasicinfo(Capstone* disasm, BASIC_INSTRUCTION_INFO* basicinfo, bool instrText = true);
bool disasmfast(duint addr, BASIC_INSTRUCTION_INFO* basicinfo, bool cache = false);
bool disasmfast(const unsigned char* data, duint addr, BASIC_INSTRUCTION_INFO* basicinfo);

#endif //_DISASM_FAST_H
