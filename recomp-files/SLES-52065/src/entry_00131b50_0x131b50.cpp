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

// Function: entry_00131b50
// Address: 0x131b50 - 0x131b60
void entry_00131b50_0x131b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131b50_0x131b50");
#endif

    ctx->pc = 0x131b50u;

    // 0x131b50: 0x807d392  j           func_1F4E48
    ctx->pc = 0x131B50u;
    ctx->pc = 0x131B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B50u;
    // 0x131b54: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    FUN_001f4e48_0x1f4e48(rdram, ctx, runtime); return;
    ctx->pc = 0x131B58u;
    // 0x131b58: 0x0  nop
    ctx->pc = 0x131b58u;
    // NOP
    // 0x131b5c: 0x0  nop
    ctx->pc = 0x131b5cu;
    // NOP
    ctx->pc = 0x131b60u;
}
