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

// Function: entry_00204860
// Address: 0x204860 - 0x204888
void entry_00204860_0x204860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204860_0x204860");
#endif

    ctx->pc = 0x204860u;

    // 0x204860: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204864: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204868: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20486c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204874: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204878: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204878u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20487c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204880: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x204880u;
    {
        const bool branch_taken_0x204880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204880u;
        // 0x204884: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204880) {
            ctx->pc = 0x204E28u;
            return;
        }
    }
    ctx->pc = 0x204888u;
}
