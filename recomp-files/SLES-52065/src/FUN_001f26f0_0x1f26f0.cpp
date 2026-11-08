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

// Function: FUN_001f26f0
// Address: 0x1f26f0 - 0x1f2768
void FUN_001f26f0_0x1f26f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f26f0_0x1f26f0");
#endif

    switch (ctx->pc) {
        case 0x1f274cu: goto label_1f274c;
        default: break;
    }

    ctx->pc = 0x1f26f0u;

    // 0x1f26f0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f26f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f26f8: 0x8c62a478  lw          $v0, -0x5B88($v1)
    ctx->pc = 0x1f26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A478u));
    // 0x1f26fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f26fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2700: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2704: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2704u;
    {
        const bool branch_taken_0x1f2704 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2704u;
        // 0x1f2708: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2704) {
            ctx->pc = 0x1F2714u;
            goto label_1f2714;
        }
    }
    ctx->pc = 0x1F270Cu;
    // 0x1f270c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F270Cu;
    {
        const bool branch_taken_0x1f270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F270Cu;
        // 0x1f2710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f270c) {
            ctx->pc = 0x1F2758u;
            goto label_1f2758;
        }
    }
    ctx->pc = 0x1F2714u;
label_1f2714:
    // 0x1f2714: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f2714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f2718: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f271c: 0xace5fa40  sw          $a1, -0x5C0($a3)
    ctx->pc = 0x1f271cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f2720: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f2720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f2724: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f2724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2728: 0x24e7fa40  addiu       $a3, $a3, -0x5C0
    ctx->pc = 0x1f2728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965824));
    // 0x1f272c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f272cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2730: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f2730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2738: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f273c: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f273cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2740: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2744: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x1F2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2744u;
    // 0x1f2748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F274Cu;
    {
        const bool branch_taken_0x1f274c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F274Cu;
        // 0x1f2750: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f274c) {
            ctx->pc = 0x1F2758u;
            goto label_1f2758;
        }
    }
    ctx->pc = 0x1F2754u;
    // 0x1f2754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2758:
    // 0x1f2758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f275c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f275cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2760: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2760u;
        // 0x1f2764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2768u;
}
