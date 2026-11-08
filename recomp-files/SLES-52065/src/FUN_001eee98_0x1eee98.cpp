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

// Function: FUN_001eee98
// Address: 0x1eee98 - 0x1eeef4
void FUN_001eee98_0x1eee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eee98_0x1eee98");
#endif

    switch (ctx->pc) {
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeedcu: goto label_1eeedc;
        default: break;
    }

    ctx->pc = 0x1eee98u;

    // 0x1eee98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eee98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eee9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eeea0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1eeea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1eeea4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1eeea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1eeea8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eeea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eeeac: 0x8e02a468  lw          $v0, -0x5B98($s0)
    ctx->pc = 0x1eeeacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A468u));
    // 0x1eeeb0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEEB0u;
    {
        const bool branch_taken_0x1eeeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEB0u;
        // 0x1eeeb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeeb0) {
            ctx->pc = 0x1EEEE8u;
            goto label_1eeee8;
        }
    }
    ctx->pc = 0x1EEEB8u;
    // 0x1eeeb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeebc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eeebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1eeec0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1eeec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1eeec4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eeec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeec8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EEEC8u;
    SET_GPR_U32(ctx, 31, 0x1EEED0u);
    ctx->pc = 0x1EEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEEC8u;
    // 0x1eeecc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EEEC8u, 0x1EEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEED0u;
label_1eeed0:
    // 0x1eeed0: 0xae02a468  sw          $v0, -0x5B98($s0)
    ctx->pc = 0x1eeed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943848), GPR_U32(ctx, 2));
    // 0x1eeed4: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EEED4u;
    SET_GPR_U32(ctx, 31, 0x1EEEDCu);
    ctx->pc = 0x1EEED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEED4u;
    // 0x1eeed8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EEED4u, 0x1EEEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEDCu;
label_1eeedc:
    // 0x1eeedc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1eeedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1eeee0: 0xac62a46c  sw          $v0, -0x5B94($v1)
    ctx->pc = 0x1eeee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21A46Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A46Cu, _value); } while (0);
    // 0x1eeee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eeee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1eeee8:
    // 0x1eeee8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1eeee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eeeec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEEECu;
        // 0x1eeef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEEF4u;
}
