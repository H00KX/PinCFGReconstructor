#pragma once

#include "pin.H"

void INS_EntryPoint(ADDRINT ip, THREADID thread_idx);
void INS_Analysis(char* buf, UINT32 buf_len, THREADID thread_idx);
void INS_JumpAnalysis(ADDRINT ins_end, ADDRINT target_branch, INT32 taken, THREADID thread_idx);
void INS_WriteAnalysis(ADDRINT at, ADDRINT size);
void INS_UPXEndAnalysis(OPCODE opcode);
void INS_WXorX(ADDRINT at, const char* disasm_ins);