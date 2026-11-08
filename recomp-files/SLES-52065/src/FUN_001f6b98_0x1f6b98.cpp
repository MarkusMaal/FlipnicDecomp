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

// Function: FUN_001f6b98
// Address: 0x1f6b98 - 0x1f6bfc
void FUN_001f6b98_0x1f6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6b98_0x1f6b98");
#endif

    switch (ctx->pc) {
        case 0x1f6be0u: goto label_1f6be0;
        default: break;
    }

    ctx->pc = 0x1f6b98u;

    // 0x1f6b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6b9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6ba0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f6ba4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1f6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f6ba8: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x1f6ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f6bac: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f6bb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6bb4: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f6bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f6bb8: 0xac4312c0  sw          $v1, 0x12C0($v0)
    ctx->pc = 0x1f6bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f6bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6bc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bcc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6bd0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f6bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bd4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f6bd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6bd8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F6BD8u;
    SET_GPR_U32(ctx, 31, 0x1F6BE0u);
    ctx->pc = 0x1F6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BD8u;
    // 0x1f6bdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F6BD8u, 0x1F6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BE0u;
label_1f6be0:
    // 0x1f6be0: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6BE0u;
    {
        const bool branch_taken_0x1f6be0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f6be0) {
            ctx->pc = 0x1F6BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BE0u;
            // 0x1f6be4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BECu;
            goto label_1f6bec;
        }
    }
    ctx->pc = 0x1F6BE8u;
    // 0x1f6be8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6bec:
    // 0x1f6bec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6bf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f6bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BF4u;
        // 0x1f6bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6BFCu;
}
