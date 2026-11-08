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

// Function: entry_00200380
// Address: 0x200380 - 0x200388
void entry_00200380_0x200380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200380_0x200380");
#endif

    ctx->pc = 0x200380u;

    // 0x200380: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x200384: 0x0  nop
    ctx->pc = 0x200384u;
    // NOP
    ctx->pc = 0x200388u;
}
