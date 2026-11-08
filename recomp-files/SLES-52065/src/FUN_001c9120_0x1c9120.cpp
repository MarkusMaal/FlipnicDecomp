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

// Function: FUN_001c9120
// Address: 0x1c9120 - 0x1c918c
void FUN_001c9120_0x1c9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9120_0x1c9120");
#endif

    switch (ctx->pc) {
        case 0x1c9170u: goto label_1c9170;
        default: break;
    }

    ctx->pc = 0x1c9120u;

    // 0x1c9120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9124: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c912c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9130: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c9130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9134: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9134u;
    {
        const bool branch_taken_0x1c9134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9134u;
        // 0x1c9138: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9134) {
            ctx->pc = 0x1C9180u;
            goto label_1c9180;
        }
    }
    ctx->pc = 0x1C913Cu;
    // 0x1c913c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9140: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9140u;
    {
        const bool branch_taken_0x1c9140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9140) {
            ctx->pc = 0x1C9164u;
            goto label_1c9164;
        }
    }
    ctx->pc = 0x1C9148u;
    // 0x1c9148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c914c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C914Cu;
    {
        const bool branch_taken_0x1c914c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c914c) {
            ctx->pc = 0x1C9164u;
            goto label_1c9164;
        }
    }
    ctx->pc = 0x1C9154u;
    // 0x1c9154: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9154u;
    {
        const bool branch_taken_0x1c9154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9154) {
            ctx->pc = 0x1C9164u;
            goto label_1c9164;
        }
    }
    ctx->pc = 0x1C915Cu;
    // 0x1c915c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C915Cu;
    {
        const bool branch_taken_0x1c915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c915c) {
            ctx->pc = 0x1C917Cu;
            goto label_1c917c;
        }
    }
    ctx->pc = 0x1C9164u;
label_1c9164:
    // 0x1c9164: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9168: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C9168u;
    SET_GPR_U32(ctx, 31, 0x1C9170u);
    ctx->pc = 0x1C916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9168u;
    // 0x1c916c: 0x8c24f8b0  lw          $a0, -0x750($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C9168u, 0x1C9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9170u;
label_1c9170:
    // 0x1c9170: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9174u;
    {
        const bool branch_taken_0x1c9174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9174u;
        // 0x1c9178: 0x8c22f8b0  lw          $v0, -0x750($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9174) {
            ctx->pc = 0x1C9180u;
            goto label_1c9180;
        }
    }
    ctx->pc = 0x1C917Cu;
label_1c917c:
    // 0x1c917c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9180:
    // 0x1c9180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9184: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9184u;
        // 0x1c9188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C918Cu;
}
