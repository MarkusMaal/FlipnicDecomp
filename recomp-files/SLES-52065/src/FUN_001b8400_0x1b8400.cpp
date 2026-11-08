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

// Function: FUN_001b8400
// Address: 0x1b8400 - 0x1b8450
void FUN_001b8400_0x1b8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8400_0x1b8400");
#endif

    switch (ctx->pc) {
        case 0x1b8420u: goto label_1b8420;
        case 0x1b842cu: goto label_1b842c;
        default: break;
    }

    ctx->pc = 0x1b8400u;

    // 0x1b8400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8404: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b8404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b840c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8414: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b8414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b8418: 0xc06ebb8  jal         func_1BAEE0
    ctx->pc = 0x1B8418u;
    SET_GPR_U32(ctx, 31, 0x1B8420u);
    ctx->pc = 0x1B841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8418u;
    // 0x1b841c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAEE0u, 0x1B8418u, 0x1B8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8420u;
label_1b8420:
    // 0x1b8420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8424: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B8424u;
    SET_GPR_U32(ctx, 31, 0x1B842Cu);
    ctx->pc = 0x1B8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8424u;
    // 0x1b8428: 0x8fb0002c  lw          $s0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B8424u, 0x1B842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B842Cu;
label_1b842c:
    // 0x1b842c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B842Cu;
    {
        const bool branch_taken_0x1b842c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b842c) {
            ctx->pc = 0x1B843Cu;
            goto label_1b843c;
        }
    }
    ctx->pc = 0x1B8434u;
    // 0x1b8434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8434u;
    {
        const bool branch_taken_0x1b8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8434u;
        // 0x1b8438: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8434) {
            ctx->pc = 0x1B8440u;
            goto label_1b8440;
        }
    }
    ctx->pc = 0x1B843Cu;
label_1b843c:
    // 0x1b843c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b843cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8440:
    // 0x1b8440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8448: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8448u;
        // 0x1b844c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8450u;
}
