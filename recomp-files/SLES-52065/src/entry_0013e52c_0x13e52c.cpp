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

// Function: entry_0013e52c
// Address: 0x13e52c - 0x13e540
void entry_0013e52c_0x13e52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e52c_0x13e52c");
#endif

    ctx->pc = 0x13e52cu;

    // 0x13e52c: 0x0  nop
    ctx->pc = 0x13e52cu;
    // NOP
    // 0x13e530: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13e530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13e534: 0x2e820020  sltiu       $v0, $s4, 0x20
    ctx->pc = 0x13e534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x13e538: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13E538u;
    {
        const bool branch_taken_0x13e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E538u;
        // 0x13e53c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e538) {
            ctx->pc = 0x13E4F0u;
            return;
        }
    }
    ctx->pc = 0x13E540u;
}
