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

// Function: entry_00205b30
// Address: 0x205b30 - 0x205b38
void entry_00205b30_0x205b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b30_0x205b30");
#endif

    ctx->pc = 0x205b30u;

    // 0x205b30: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x205b30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x205b34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x205b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x205b38u;
}
