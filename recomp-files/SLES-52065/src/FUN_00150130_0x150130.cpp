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

// Function: FUN_00150130
// Address: 0x150130 - 0x150138
void FUN_00150130_0x150130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150130_0x150130");
#endif

    ctx->pc = 0x150130u;

    // 0x150130: 0x8080702  j           func_201C08
    ctx->pc = 0x150130u;
    ctx->pc = 0x150134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150130u;
    // 0x150134: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    FUN_00201c08_0x201c08(rdram, ctx, runtime); return;
    ctx->pc = 0x150138u;
}
