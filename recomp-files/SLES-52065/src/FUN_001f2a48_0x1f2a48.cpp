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

// Function: FUN_001f2a48
// Address: 0x1f2a48 - 0x1f2ac4
void FUN_001f2a48_0x1f2a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2a48_0x1f2a48");
#endif

    switch (ctx->pc) {
        case 0x1f2aa4u: goto label_1f2aa4;
        default: break;
    }

    ctx->pc = 0x1f2a48u;

    // 0x1f2a48: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f2a4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2a50: 0x8c62a478  lw          $v0, -0x5B88($v1)
    ctx->pc = 0x1f2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A478u));
    // 0x1f2a54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f2a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2a5c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2A5Cu;
    {
        const bool branch_taken_0x1f2a5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A5Cu;
        // 0x1f2a60: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a5c) {
            ctx->pc = 0x1F2A6Cu;
            goto label_1f2a6c;
        }
    }
    ctx->pc = 0x1F2A64u;
    // 0x1f2a64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2A64u;
    {
        const bool branch_taken_0x1f2a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A64u;
        // 0x1f2a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a64) {
            ctx->pc = 0x1F2AB4u;
            goto label_1f2ab4;
        }
    }
    ctx->pc = 0x1F2A6Cu;
label_1f2a6c:
    // 0x1f2a6c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f2a70: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f2a74: 0xace5fa40  sw          $a1, -0x5C0($a3)
    ctx->pc = 0x1f2a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f2a78: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f2a7c: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2a80: 0x24e7fa40  addiu       $a3, $a3, -0x5C0
    ctx->pc = 0x1f2a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965824));
    // 0x1f2a84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2a88: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f2a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a90: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f2a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2a94: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f2a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2a98: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2a9c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F2AA4u);
    ctx->pc = 0x1F2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A9Cu;
    // 0x1f2aa0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2A9Cu, 0x1F2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AA4u;
label_1f2aa4:
    // 0x1f2aa4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2AA4u;
    {
        const bool branch_taken_0x1f2aa4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2aa4) {
            ctx->pc = 0x1F2AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2AA4u;
            // 0x1f2aa8: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2AB4u;
            goto label_1f2ab4;
        }
    }
    ctx->pc = 0x1F2AACu;
    // 0x1f2aac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f2ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1f2ab4:
    // 0x1f2ab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2ab8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ABCu;
        // 0x1f2ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2AC4u;
}
