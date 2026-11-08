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

// Function: FUN_001f6c00
// Address: 0x1f6c00 - 0x1f6c68
void FUN_001f6c00_0x1f6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6c00_0x1f6c00");
#endif

    switch (ctx->pc) {
        case 0x1f6c4cu: goto label_1f6c4c;
        default: break;
    }

    ctx->pc = 0x1f6c00u;

    // 0x1f6c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6c04: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6c08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f6c0c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f6c10: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f6c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6c18: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1f6c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3912C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C4u, _value); } while (0);
    // 0x1f6c1c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f6c20: 0xac4612c0  sw          $a2, 0x12C0($v0)
    ctx->pc = 0x1f6c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f6c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6c28: 0x24641080  addiu       $a0, $v1, 0x1080
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
    // 0x1f6c2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6c30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c38: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6c3c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f6c3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c40: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f6c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6c44: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F6C44u;
    SET_GPR_U32(ctx, 31, 0x1F6C4Cu);
    ctx->pc = 0x1F6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6C44u;
    // 0x1f6c48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F6C44u, 0x1F6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C4Cu;
label_1f6c4c:
    // 0x1f6c4c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6C4Cu;
    {
        const bool branch_taken_0x1f6c4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f6c4c) {
            ctx->pc = 0x1F6C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C4Cu;
            // 0x1f6c50: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C58u;
            goto label_1f6c58;
        }
    }
    ctx->pc = 0x1F6C54u;
    // 0x1f6c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6c58:
    // 0x1f6c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6c5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f6c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C60u;
        // 0x1f6c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C68u;
}
