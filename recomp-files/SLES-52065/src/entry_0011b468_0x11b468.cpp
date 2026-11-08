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

// Function: entry_0011b468
// Address: 0x11b468 - 0x11b488
void entry_0011b468_0x11b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b468_0x11b468");
#endif

    ctx->pc = 0x11b468u;

    // 0x11b468: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b46c: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11B46Cu;
    {
        const bool branch_taken_0x11b46c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x11b46c) {
            ctx->pc = 0x11B498u;
            return;
        }
    }
    ctx->pc = 0x11B474u;
    // 0x11b474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b478: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x11b478u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x11b47c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B480u;
    {
        const bool branch_taken_0x11b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B480u;
        // 0x11b484: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b480) {
            ctx->pc = 0x11B498u;
            return;
        }
    }
    ctx->pc = 0x11B488u;
}
