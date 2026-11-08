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

// Function: FUN_001f2600
// Address: 0x1f2600 - 0x1f2670
void FUN_001f2600_0x1f2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2600_0x1f2600");
#endif

    switch (ctx->pc) {
        case 0x1f2654u: goto label_1f2654;
        default: break;
    }

    ctx->pc = 0x1f2600u;

    // 0x1f2600: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f2604: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2608: 0x8c62a478  lw          $v0, -0x5B88($v1)
    ctx->pc = 0x1f2608u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A478u));
    // 0x1f260c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f260cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2614: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F2614u;
    {
        const bool branch_taken_0x1f2614 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2614u;
        // 0x1f2618: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2614) {
            ctx->pc = 0x1F265Cu;
            goto label_1f265c;
        }
    }
    ctx->pc = 0x1F261Cu;
    // 0x1f261c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f2620: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f2624: 0xace5fa40  sw          $a1, -0x5C0($a3)
    ctx->pc = 0x1f2624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f2628: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f262c: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2630: 0x24e7fa40  addiu       $a3, $a3, -0x5C0
    ctx->pc = 0x1f2630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965824));
    // 0x1f2634: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f263c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2640: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f2640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2644: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f2644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2648: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f264c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F264Cu;
    SET_GPR_U32(ctx, 31, 0x1F2654u);
    ctx->pc = 0x1F2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F264Cu;
    // 0x1f2650: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F264Cu, 0x1F2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2654u;
label_1f2654:
    // 0x1f2654: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2654u;
    {
        const bool branch_taken_0x1f2654 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2654u;
        // 0x1f2658: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2654) {
            ctx->pc = 0x1F2660u;
            goto label_1f2660;
        }
    }
    ctx->pc = 0x1F265Cu;
label_1f265c:
    // 0x1f265c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f265cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2660:
    // 0x1f2660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2664: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2668: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2668u;
        // 0x1f266c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2670u;
}
