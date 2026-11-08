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

// Function: FUN_001f8e00
// Address: 0x1f8e00 - 0x1f8e6c
void FUN_001f8e00_0x1f8e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8e00_0x1f8e00");
#endif

    switch (ctx->pc) {
        case 0x1f8e40u: goto label_1f8e40;
        case 0x1f8e50u: goto label_1f8e50;
        default: break;
    }

    ctx->pc = 0x1f8e00u;

    // 0x1f8e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8e04: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f8e08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8e0c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f8e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f8e10: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f8e10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f8e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8e18: 0x24841600  addiu       $a0, $a0, 0x1600
    ctx->pc = 0x1f8e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
    // 0x1f8e1c: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8e20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8e24: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1f8e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e2c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8e30: 0x26092bc0  addiu       $t1, $s0, 0x2BC0
    ctx->pc = 0x1f8e30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11200));
    // 0x1f8e34: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8e38: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8E38u;
    SET_GPR_U32(ctx, 31, 0x1F8E40u);
    ctx->pc = 0x1F8E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E38u;
    // 0x1f8e3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8E38u, 0x1F8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E40u;
label_1f8e40:
    // 0x1f8e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8E40u;
    {
        const bool branch_taken_0x1f8e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E40u;
        // 0x1f8e44: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e40) {
            ctx->pc = 0x1F8E58u;
            goto label_1f8e58;
        }
    }
    ctx->pc = 0x1F8E48u;
    // 0x1f8e48: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8E48u;
    SET_GPR_U32(ctx, 31, 0x1F8E50u);
    ctx->pc = 0x1F8E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E48u;
    // 0x1f8e4c: 0x248448c0  addiu       $a0, $a0, 0x48C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8E48u, 0x1F8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E50u;
label_1f8e50:
    // 0x1f8e50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8E50u;
    {
        const bool branch_taken_0x1f8e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E50u;
        // 0x1f8e54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e50) {
            ctx->pc = 0x1F8E5Cu;
            goto label_1f8e5c;
        }
    }
    ctx->pc = 0x1F8E58u;
label_1f8e58:
    // 0x1f8e58: 0x8e022bc0  lw          $v0, 0x2BC0($s0)
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11200)));
label_1f8e5c:
    // 0x1f8e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8e60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E64u;
        // 0x1f8e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8E6Cu;
}
