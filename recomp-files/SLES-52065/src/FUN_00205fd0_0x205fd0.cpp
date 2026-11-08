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

// Function: FUN_00205fd0
// Address: 0x205fd0 - 0x206030
void FUN_00205fd0_0x205fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205fd0_0x205fd0");
#endif

    switch (ctx->pc) {
        case 0x205ffcu: goto label_205ffc;
        default: break;
    }

    ctx->pc = 0x205fd0u;

    // 0x205fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x205fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205fe0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x205fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fe4: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x205fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x205fe8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205ff0: 0xae202c3c  sw          $zero, 0x2C3C($s1)
    ctx->pc = 0x205ff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x392C3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x392C3Cu, _value); } while (0);
    // 0x205ff4: 0xc07aefa  jal         func_1EBBE8
    ctx->pc = 0x205FF4u;
    SET_GPR_U32(ctx, 31, 0x205FFCu);
    ctx->pc = 0x205FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FF4u;
    // 0x205ff8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBBE8u, 0x205FF4u, 0x205FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FFCu;
label_205ffc:
    // 0x205ffc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205ffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x206000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206004: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206004u;
    {
        const bool branch_taken_0x206004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206004u;
        // 0x206008: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206004) {
            ctx->pc = 0x20601Cu;
            goto label_20601c;
        }
    }
    ctx->pc = 0x20600Cu;
    // 0x20600c: 0x8e222c3c  lw          $v0, 0x2C3C($s1)
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11324)));
    // 0x206010: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x206010u;
    {
        const bool branch_taken_0x206010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206010) {
            ctx->pc = 0x206014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206010u;
            // 0x206014: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20601Cu;
            goto label_20601c;
        }
    }
    ctx->pc = 0x206018u;
    // 0x206018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20601c:
    // 0x20601c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20601cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206020: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206028: 0x3e00008  jr          $ra
    ctx->pc = 0x206028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206028u;
        // 0x20602c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206030u;
}
