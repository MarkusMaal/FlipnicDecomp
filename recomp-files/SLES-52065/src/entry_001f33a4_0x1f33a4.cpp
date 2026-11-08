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

// Function: entry_001f33a4
// Address: 0x1f33a4 - 0x1f33b0
void entry_001f33a4_0x1f33a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f33a4_0x1f33a4");
#endif

    ctx->pc = 0x1f33a4u;

    // 0x1f33a4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f33a8: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f33ac: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f33acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f33b0u;
}
