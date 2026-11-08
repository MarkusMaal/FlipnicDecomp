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

// Function: FUN_001fbfa0
// Address: 0x1fbfa0 - 0x1fbff8
void FUN_001fbfa0_0x1fbfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbfa0_0x1fbfa0");
#endif

    switch (ctx->pc) {
        case 0x1fbfc4u: goto label_1fbfc4;
        default: break;
    }

    ctx->pc = 0x1fbfa0u;

    // 0x1fbfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbfa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fbfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fbfa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbfac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fbfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfb0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1fbfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1fbfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fbfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fbfb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fbfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfbc: 0xc07af42  jal         func_1EBD08
    ctx->pc = 0x1FBFBCu;
    SET_GPR_U32(ctx, 31, 0x1FBFC4u);
    ctx->pc = 0x1FBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFBCu;
    // 0x1fbfc0: 0xae002c3c  sw          $zero, 0x2C3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBD08u, 0x1FBFBCu, 0x1FBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFC4u;
label_1fbfc4:
    // 0x1fbfc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fbfc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbfcc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBFCCu;
    {
        const bool branch_taken_0x1fbfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFCCu;
        // 0x1fbfd0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfcc) {
            ctx->pc = 0x1FBFE4u;
            goto label_1fbfe4;
        }
    }
    ctx->pc = 0x1FBFD4u;
    // 0x1fbfd4: 0x8e022c3c  lw          $v0, 0x2C3C($s0)
    ctx->pc = 0x1fbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11324)));
    // 0x1fbfd8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBFD8u;
    {
        const bool branch_taken_0x1fbfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbfd8) {
            ctx->pc = 0x1FBFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBFD8u;
            // 0x1fbfdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBFE4u;
            goto label_1fbfe4;
        }
    }
    ctx->pc = 0x1FBFE0u;
    // 0x1fbfe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fbfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbfe4:
    // 0x1fbfe4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1fbfe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fbfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbfec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFF0u;
        // 0x1fbff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBFF8u;
}
