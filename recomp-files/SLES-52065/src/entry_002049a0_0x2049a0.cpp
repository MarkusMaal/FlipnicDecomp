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

// Function: entry_002049a0
// Address: 0x2049a0 - 0x2049dc
void entry_002049a0_0x2049a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002049a0_0x2049a0");
#endif

    switch (ctx->pc) {
        case 0x2049d4u: goto label_2049d4;
        default: break;
    }

    ctx->pc = 0x2049a0u;

    // 0x2049a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2049a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2049a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2049a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2049a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2049ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2049acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2049b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2049b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2049b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2049b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2049b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2049bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2049bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2049c0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2049C0u;
    {
        const bool branch_taken_0x2049c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C0u;
        // 0x2049c4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049c0) {
            ctx->pc = 0x2049DCu;
            return;
        }
    }
    ctx->pc = 0x2049C8u;
    // 0x2049c8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2049cc: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2049CCu;
    SET_GPR_U32(ctx, 31, 0x2049D4u);
    ctx->pc = 0x2049D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049CCu;
    // 0x2049d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2049CCu, 0x2049D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049D4u;
label_2049d4:
    // 0x2049d4: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x2049D4u;
    {
        const bool branch_taken_0x2049d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049D4u;
        // 0x2049d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049d4) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x2049DCu;
}
