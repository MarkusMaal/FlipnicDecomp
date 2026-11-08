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

// Function: entry_001f4450
// Address: 0x1f4450 - 0x1f4468
void entry_001f4450_0x1f4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4450_0x1f4450");
#endif

    ctx->pc = 0x1f4450u;

    // 0x1f4450: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f4454: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4454u;
    {
        const bool branch_taken_0x1f4454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4454u;
        // 0x1f4458: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4454) {
            ctx->pc = 0x1F4484u;
            return;
        }
    }
    ctx->pc = 0x1F445Cu;
    // 0x1f445c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F445Cu;
    {
        const bool branch_taken_0x1f445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f445c) {
            ctx->pc = 0x1F4460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F445Cu;
            // 0x1f4460: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4488u;
            return;
        }
    }
    ctx->pc = 0x1F4464u;
    // 0x1f4464: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f4464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1f4468u;
}
