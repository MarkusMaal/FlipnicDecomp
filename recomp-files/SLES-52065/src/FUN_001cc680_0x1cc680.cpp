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

// Function: FUN_001cc680
// Address: 0x1cc680 - 0x1cc6e8
void FUN_001cc680_0x1cc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc680_0x1cc680");
#endif

    switch (ctx->pc) {
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6b0u: goto label_1cc6b0;
        default: break;
    }

    ctx->pc = 0x1cc680u;

    // 0x1cc680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc684: 0x24052770  addiu       $a1, $zero, 0x2770
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10096));
    // 0x1cc688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc698: 0xc045bcc  jal         func_116F30
    ctx->pc = 0x1CC698u;
    SET_GPR_U32(ctx, 31, 0x1CC6A0u);
    ctx->pc = 0x1CC69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC698u;
    // 0x1cc69c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F30u, 0x1CC698u, 0x1CC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6A0u;
label_1cc6a0:
    // 0x1cc6a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6a4: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1cc6a8: 0xc045bcc  jal         func_116F30
    ctx->pc = 0x1CC6A8u;
    SET_GPR_U32(ctx, 31, 0x1CC6B0u);
    ctx->pc = 0x1CC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6A8u;
    // 0x1cc6ac: 0x24052774  addiu       $a1, $zero, 0x2774 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F30u, 0x1CC6A8u, 0x1CC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6B0u;
label_1cc6b0:
    // 0x1cc6b0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1cc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cc6b4: 0x14700006  bne         $v1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC6B4u;
    {
        const bool branch_taken_0x1cc6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cc6b4) {
            ctx->pc = 0x1CC6D0u;
            goto label_1cc6d0;
        }
    }
    ctx->pc = 0x1CC6BCu;
    // 0x1cc6bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1cc6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc6c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC6C0u;
    {
        const bool branch_taken_0x1cc6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc6c0) {
            ctx->pc = 0x1CC6D0u;
            goto label_1cc6d0;
        }
    }
    ctx->pc = 0x1CC6C8u;
    // 0x1cc6c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC6C8u;
    {
        const bool branch_taken_0x1cc6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6C8u;
        // 0x1cc6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6c8) {
            ctx->pc = 0x1CC6D4u;
            goto label_1cc6d4;
        }
    }
    ctx->pc = 0x1CC6D0u;
label_1cc6d0:
    // 0x1cc6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d4:
    // 0x1cc6d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc6d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6E0u;
        // 0x1cc6e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC6E8u;
}
