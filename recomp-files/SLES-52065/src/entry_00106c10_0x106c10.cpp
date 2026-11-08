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

// Function: entry_00106c10
// Address: 0x106c10 - 0x106c20
void entry_00106c10_0x106c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c10_0x106c10");
#endif

    ctx->pc = 0x106c10u;

    // 0x106c10: 0x8058694  j           func_161A50
    ctx->pc = 0x106C10u;
    ctx->pc = 0x106C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C10u;
    // 0x106c14: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161A50u;
    FUN_00161a50_0x161a50(rdram, ctx, runtime); return;
    ctx->pc = 0x106C18u;
    // 0x106c18: 0x0  nop
    ctx->pc = 0x106c18u;
    // NOP
    // 0x106c1c: 0x0  nop
    ctx->pc = 0x106c1cu;
    // NOP
    ctx->pc = 0x106c20u;
}
