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

// Function: entry_0015c010
// Address: 0x15c010 - 0x15c020
void entry_0015c010_0x15c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c010_0x15c010");
#endif

    ctx->pc = 0x15c010u;

    // 0x15c010: 0x8042570  j           func_1095C0
    ctx->pc = 0x15C010u;
    ctx->pc = 0x15C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C010u;
    // 0x15c014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    FUN_001095c0_0x1095c0(rdram, ctx, runtime); return;
    ctx->pc = 0x15C018u;
    // 0x15c018: 0x0  nop
    ctx->pc = 0x15c018u;
    // NOP
    // 0x15c01c: 0x0  nop
    ctx->pc = 0x15c01cu;
    // NOP
    ctx->pc = 0x15c020u;
}
