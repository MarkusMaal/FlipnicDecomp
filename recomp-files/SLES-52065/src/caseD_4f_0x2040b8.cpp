#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_4f
// Address: 0x2040b8 - 0x2040bc
void caseD_4f_0x2040b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4f_0x2040b8");
#endif

    ctx->pc = 0x2040b8u;

    // 0x2040b8: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x2040b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
    ctx->pc = 0x2040bcu;
}
