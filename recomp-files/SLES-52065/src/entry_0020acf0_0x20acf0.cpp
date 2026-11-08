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

// Function: entry_0020acf0
// Address: 0x20acf0 - 0x20ad0c
void entry_0020acf0_0x20acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020acf0_0x20acf0");
#endif

    ctx->pc = 0x20acf0u;

label_20acf0:
    // 0x20acf0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x20acf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20acf4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x20ACF4u;
    {
        const bool branch_taken_0x20acf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF4u;
        // 0x20acf8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf4) {
            ctx->pc = 0x20AD9Cu;
            return;
        }
    }
    ctx->pc = 0x20ACFCu;
    // 0x20acfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ad00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ad04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AD04u;
    {
        const bool branch_taken_0x20ad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD04u;
        // 0x20ad08: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad04) {
            ctx->pc = 0x20ACF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20acf0;
        }
    }
    ctx->pc = 0x20AD0Cu;
}
