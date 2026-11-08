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

// Function: entry_001f2f88
// Address: 0x1f2f88 - 0x1f2f90
void entry_001f2f88_0x1f2f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2f88_0x1f2f88");
#endif

    ctx->pc = 0x1f2f88u;

    // 0x1f2f88: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2f8c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f2f90u;
}
