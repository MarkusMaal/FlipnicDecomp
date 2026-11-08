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

// Function: FUN_00201638
// Address: 0x201638 - 0x201694
void FUN_00201638_0x201638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201638_0x201638");
#endif

    switch (ctx->pc) {
        case 0x201660u: goto label_201660;
        default: break;
    }

    ctx->pc = 0x201638u;

    // 0x201638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20163c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201640: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x201640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201648: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x201648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20164c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x20164cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x201650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x201650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201654: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x201654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201658: 0xc07af7e  jal         func_1EBDF8
    ctx->pc = 0x201658u;
    SET_GPR_U32(ctx, 31, 0x201660u);
    ctx->pc = 0x20165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201658u;
    // 0x20165c: 0xae202c3c  sw          $zero, 0x2C3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBDF8u, 0x201658u, 0x201660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201660u;
label_201660:
    // 0x201660: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201668: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201668u;
    {
        const bool branch_taken_0x201668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201668u;
        // 0x20166c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201668) {
            ctx->pc = 0x201680u;
            goto label_201680;
        }
    }
    ctx->pc = 0x201670u;
    // 0x201670: 0x8e222c3c  lw          $v0, 0x2C3C($s1)
    ctx->pc = 0x201670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11324)));
    // 0x201674: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x201674u;
    {
        const bool branch_taken_0x201674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201674) {
            ctx->pc = 0x201678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201674u;
            // 0x201678: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201680u;
            goto label_201680;
        }
    }
    ctx->pc = 0x20167Cu;
    // 0x20167c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_201680:
    // 0x201680: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x201680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201684: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x201684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20168c: 0x3e00008  jr          $ra
    ctx->pc = 0x20168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20168Cu;
        // 0x201690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20168Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201694u;
}
