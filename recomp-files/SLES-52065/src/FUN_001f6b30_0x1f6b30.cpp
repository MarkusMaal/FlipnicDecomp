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

// Function: FUN_001f6b30
// Address: 0x1f6b30 - 0x1f6b98
void FUN_001f6b30_0x1f6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6b30_0x1f6b30");
#endif

    switch (ctx->pc) {
        case 0x1f6b7cu: goto label_1f6b7c;
        default: break;
    }

    ctx->pc = 0x1f6b30u;

    // 0x1f6b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6b34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6b38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f6b3c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1f6b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f6b40: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f6b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6b48: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1f6b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3912C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C4u, _value); } while (0);
    // 0x1f6b4c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f6b50: 0xac4612c0  sw          $a2, 0x12C0($v0)
    ctx->pc = 0x1f6b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f6b54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6b58: 0x24641080  addiu       $a0, $v1, 0x1080
    ctx->pc = 0x1f6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
    // 0x1f6b5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b68: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6b6c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f6b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b70: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f6b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6b74: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F6B74u;
    SET_GPR_U32(ctx, 31, 0x1F6B7Cu);
    ctx->pc = 0x1F6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B74u;
    // 0x1f6b78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F6B74u, 0x1F6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B7Cu;
label_1f6b7c:
    // 0x1f6b7c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6B7Cu;
    {
        const bool branch_taken_0x1f6b7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f6b7c) {
            ctx->pc = 0x1F6B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6B7Cu;
            // 0x1f6b80: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6B88u;
            goto label_1f6b88;
        }
    }
    ctx->pc = 0x1F6B84u;
    // 0x1f6b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6b88:
    // 0x1f6b88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6b8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f6b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B90u;
        // 0x1f6b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B98u;
}
