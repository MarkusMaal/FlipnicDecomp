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

// Function: entry_00144034
// Address: 0x144034 - 0x14403c
void entry_00144034_0x144034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144034_0x144034");
#endif

    ctx->pc = 0x144034u;

    // 0x144034: 0x0  nop
    ctx->pc = 0x144034u;
    // NOP
    // 0x144038: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x144038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x14403cu;
}
