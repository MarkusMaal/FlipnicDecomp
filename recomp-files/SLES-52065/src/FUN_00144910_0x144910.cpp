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

// Function: FUN_00144910
// Address: 0x144910 - 0x144918
void FUN_00144910_0x144910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144910_0x144910");
#endif

    ctx->pc = 0x144910u;

    // 0x144910: 0x804d074  j           func_1341D0
    ctx->pc = 0x144910u;
    ctx->pc = 0x144914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144910u;
    // 0x144914: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341D0u;
    FUN_001341d0_0x1341d0(rdram, ctx, runtime); return;
    ctx->pc = 0x144918u;
}
