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

// Function: entry_0020457c
// Address: 0x20457c - 0x2045c0
void entry_0020457c_0x20457c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020457c_0x20457c");
#endif

    switch (ctx->pc) {
        case 0x2045b8u: goto label_2045b8;
        default: break;
    }

    ctx->pc = 0x20457cu;

    // 0x20457c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x20457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204580: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204584: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204588: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x204588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20458c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204590: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204594: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20459c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2045a0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2045a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2045a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2045A4u;
    {
        const bool branch_taken_0x2045a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A4u;
        // 0x2045a8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045a4) {
            ctx->pc = 0x2045C0u;
            return;
        }
    }
    ctx->pc = 0x2045ACu;
    // 0x2045ac: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2045acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2045b0: 0xc080e4c  jal         func_203930
    ctx->pc = 0x2045B0u;
    SET_GPR_U32(ctx, 31, 0x2045B8u);
    ctx->pc = 0x2045B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045B0u;
    // 0x2045b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x2045B0u, 0x2045B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2045B8u;
label_2045b8:
    // 0x2045b8: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x2045B8u;
    {
        const bool branch_taken_0x2045b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045B8u;
        // 0x2045bc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045b8) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x2045C0u;
}
