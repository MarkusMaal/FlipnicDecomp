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

// Function: FUN_001f29c8
// Address: 0x1f29c8 - 0x1f2a44
void FUN_001f29c8_0x1f29c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f29c8_0x1f29c8");
#endif

    switch (ctx->pc) {
        case 0x1f2a24u: goto label_1f2a24;
        default: break;
    }

    ctx->pc = 0x1f29c8u;

    // 0x1f29c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f29c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f29cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f29ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f29d0: 0x8c62a478  lw          $v0, -0x5B88($v1)
    ctx->pc = 0x1f29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A478u));
    // 0x1f29d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f29d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f29d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f29dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F29DCu;
    {
        const bool branch_taken_0x1f29dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29DCu;
        // 0x1f29e0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29dc) {
            ctx->pc = 0x1F29ECu;
            goto label_1f29ec;
        }
    }
    ctx->pc = 0x1F29E4u;
    // 0x1f29e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F29E4u;
    {
        const bool branch_taken_0x1f29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29E4u;
        // 0x1f29e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29e4) {
            ctx->pc = 0x1F2A34u;
            goto label_1f2a34;
        }
    }
    ctx->pc = 0x1F29ECu;
label_1f29ec:
    // 0x1f29ec: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f29f0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f29f4: 0xace5fa40  sw          $a1, -0x5C0($a3)
    ctx->pc = 0x1f29f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f29f8: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f29f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f29fc: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2a00: 0x24e7fa40  addiu       $a3, $a3, -0x5C0
    ctx->pc = 0x1f2a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965824));
    // 0x1f2a04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2a08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a10: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2a14: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f2a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2a18: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2a1c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A24u);
    ctx->pc = 0x1F2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A1Cu;
    // 0x1f2a20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2A1Cu, 0x1F2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A24u;
label_1f2a24:
    // 0x1f2a24: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2A24u;
    {
        const bool branch_taken_0x1f2a24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2a24) {
            ctx->pc = 0x1F2A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2A24u;
            // 0x1f2a28: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2A34u;
            goto label_1f2a34;
        }
    }
    ctx->pc = 0x1F2A2Cu;
    // 0x1f2a2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f2a30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1f2a34:
    // 0x1f2a34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2a38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A3Cu;
        // 0x1f2a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2A44u;
}
