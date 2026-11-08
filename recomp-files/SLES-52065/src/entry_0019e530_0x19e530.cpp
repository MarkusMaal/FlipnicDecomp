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

// Function: entry_0019e530
// Address: 0x19e530 - 0x19e540
void entry_0019e530_0x19e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e530_0x19e530");
#endif

    ctx->pc = 0x19e530u;

    // 0x19e530: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19e534: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x19e534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x19e538: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x19E538u;
    {
        const bool branch_taken_0x19e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E538u;
        // 0x19e53c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e538) {
            ctx->pc = 0x19E4F0u;
            return;
        }
    }
    ctx->pc = 0x19E540u;
}
