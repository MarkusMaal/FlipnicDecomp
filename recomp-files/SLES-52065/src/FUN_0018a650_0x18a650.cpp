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

// Function: FUN_0018a650
// Address: 0x18a650 - 0x18a6d8
void FUN_0018a650_0x18a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a650_0x18a650");
#endif

    switch (ctx->pc) {
        case 0x18a6b0u: goto label_18a6b0;
        case 0x18a6c4u: goto label_18a6c4;
        default: break;
    }

    ctx->pc = 0x18a650u;

    // 0x18a650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a654: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a668: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A668u;
    {
        const bool branch_taken_0x18a668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A668u;
        // 0x18a66c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a668) {
            ctx->pc = 0x18A67Cu;
            goto label_18a67c;
        }
    }
    ctx->pc = 0x18A670u;
    // 0x18a670: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18a670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18a674: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A674u;
    {
        const bool branch_taken_0x18a674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a674) {
            ctx->pc = 0x18A698u;
            goto label_18a698;
        }
    }
    ctx->pc = 0x18A67Cu;
label_18a67c:
    // 0x18a67c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a680: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A680u;
    {
        const bool branch_taken_0x18a680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a680) {
            ctx->pc = 0x18A690u;
            goto label_18a690;
        }
    }
    ctx->pc = 0x18A688u;
    // 0x18a688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A688u;
    {
        const bool branch_taken_0x18a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A688u;
        // 0x18a68c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a688) {
            ctx->pc = 0x18A69Cu;
            goto label_18a69c;
        }
    }
    ctx->pc = 0x18A690u;
label_18a690:
    // 0x18a690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A690u;
    {
        const bool branch_taken_0x18a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A690u;
        // 0x18a694: 0x8f9080dc  lw          $s0, -0x7F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a690) {
            ctx->pc = 0x18A69Cu;
            goto label_18a69c;
        }
    }
    ctx->pc = 0x18A698u;
label_18a698:
    // 0x18a698: 0xaf9080dc  sw          $s0, -0x7F24($gp)
    ctx->pc = 0x18a698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 16));
label_18a69c:
    // 0x18a69c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a6a0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A6A0u;
    {
        const bool branch_taken_0x18a6a0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18a6a0) {
            ctx->pc = 0x18A6B0u;
            goto label_18a6b0;
        }
    }
    ctx->pc = 0x18A6A8u;
    // 0x18a6a8: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18A6A8u;
    SET_GPR_U32(ctx, 31, 0x18A6B0u);
    ctx->pc = 0x18A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6A8u;
    // 0x18a6ac: 0x8f8580dc  lw          $a1, -0x7F24($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18A6A8u, 0x18A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6B0u;
label_18a6b0:
    // 0x18a6b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a6b4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A6B4u;
    {
        const bool branch_taken_0x18a6b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6B4u;
        // 0x18a6b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6b4) {
            ctx->pc = 0x18A6C4u;
            goto label_18a6c4;
        }
    }
    ctx->pc = 0x18A6BCu;
    // 0x18a6bc: 0xc076654  jal         func_1D9950
    ctx->pc = 0x18A6BCu;
    SET_GPR_U32(ctx, 31, 0x18A6C4u);
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x18A6BCu, 0x18A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A6C4u;
label_18a6c4:
    // 0x18a6c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6D0u;
        // 0x18a6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A6D8u;
}
