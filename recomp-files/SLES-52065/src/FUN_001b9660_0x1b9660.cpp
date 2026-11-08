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

// Function: FUN_001b9660
// Address: 0x1b9660 - 0x1b96e0
void FUN_001b9660_0x1b9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9660_0x1b9660");
#endif

    switch (ctx->pc) {
        case 0x1b9680u: goto label_1b9680;
        case 0x1b9690u: goto label_1b9690;
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96b8u: goto label_1b96b8;
        default: break;
    }

    ctx->pc = 0x1b9660u;

    // 0x1b9660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b9664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b9668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b966c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9678: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1B9678u;
    SET_GPR_U32(ctx, 31, 0x1B9680u);
    ctx->pc = 0x1B967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9678u;
    // 0x1b967c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1B9678u, 0x1B9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9680u;
label_1b9680:
    // 0x1b9680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9684: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b9684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9688u;
    {
        const bool branch_taken_0x1b9688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9688u;
        // 0x1b968c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9688) {
            ctx->pc = 0x1B96ACu;
            goto label_1b96ac;
        }
    }
    ctx->pc = 0x1B9690u;
label_1b9690:
    // 0x1b9690: 0x16110003  bne         $s0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9690u;
    {
        const bool branch_taken_0x1b9690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9690u;
        // 0x1b9694: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9690) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B9698u;
    // 0x1b9698: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B9698u;
    {
        const bool branch_taken_0x1b9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9698u;
        // 0x1b969c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9698) {
            ctx->pc = 0x1B96C8u;
            goto label_1b96c8;
        }
    }
    ctx->pc = 0x1B96A0u;
label_1b96a0:
    // 0x1b96a0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B96A0u;
    SET_GPR_U32(ctx, 31, 0x1B96A8u);
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B96A0u, 0x1B96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96A8u;
label_1b96a8:
    // 0x1b96a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b96ac:
    // 0x1b96ac: 0x0  nop
    ctx->pc = 0x1b96acu;
    // NOP
    // 0x1b96b0: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B96B0u;
    SET_GPR_U32(ctx, 31, 0x1B96B8u);
    ctx->pc = 0x1B96B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96B0u;
    // 0x1b96b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B96B0u, 0x1B96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96B8u;
label_1b96b8:
    // 0x1b96b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b96bc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B96BCu;
    {
        const bool branch_taken_0x1b96bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b96bc) {
            ctx->pc = 0x1B9690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9690;
        }
    }
    ctx->pc = 0x1B96C4u;
    // 0x1b96c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b96c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b96c8:
    // 0x1b96c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b96c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b96cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b96ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b96d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b96d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b96d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b96d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b96d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B96D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96D8u;
        // 0x1b96dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B96D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B96E0u;
}
