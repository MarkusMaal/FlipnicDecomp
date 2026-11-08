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

// Function: FUN_001a5df0
// Address: 0x1a5df0 - 0x1a5e60
void FUN_001a5df0_0x1a5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5df0_0x1a5df0");
#endif

    switch (ctx->pc) {
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e48u: goto label_1a5e48;
        default: break;
    }

    ctx->pc = 0x1a5df0u;

    // 0x1a5df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e04: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a5e08: 0xdc8400c8  ld          $a0, 0xC8($a0)
    ctx->pc = 0x1a5e08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1a5e0c: 0x8c5028dc  lw          $s0, 0x28DC($v0)
    ctx->pc = 0x1a5e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
    // 0x1a5e10: 0xc081c20  jal         func_207080
    ctx->pc = 0x1A5E10u;
    SET_GPR_U32(ctx, 31, 0x1A5E18u);
    ctx->pc = 0x1A5E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E10u;
    // 0x1a5e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A5E10u, 0x1A5E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E18u;
label_1a5e18:
    // 0x1a5e18: 0xfe2200c8  sd          $v0, 0xC8($s1)
    ctx->pc = 0x1a5e18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 2));
    // 0x1a5e1c: 0xde2400d0  ld          $a0, 0xD0($s1)
    ctx->pc = 0x1a5e1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1a5e20: 0xc081c20  jal         func_207080
    ctx->pc = 0x1A5E20u;
    SET_GPR_U32(ctx, 31, 0x1A5E28u);
    ctx->pc = 0x1A5E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E20u;
    // 0x1a5e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A5E20u, 0x1A5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E28u;
label_1a5e28:
    // 0x1a5e28: 0xfe2200d0  sd          $v0, 0xD0($s1)
    ctx->pc = 0x1a5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 2));
    // 0x1a5e2c: 0xc046458  jal         func_119160
    ctx->pc = 0x1A5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E34u);
    ctx->pc = 0x1A5E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E2Cu;
    // 0x1a5e30: 0x8f8480ec  lw          $a0, -0x7F14($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A5E2Cu, 0x1A5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E34u;
label_1a5e34:
    // 0x1a5e34: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x1a5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    // 0x1a5e38: 0xae310010  sw          $s1, 0x10($s1)
    ctx->pc = 0x1a5e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 17));
    // 0x1a5e3c: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a5e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1a5e40: 0xc054660  jal         func_151980
    ctx->pc = 0x1A5E40u;
    SET_GPR_U32(ctx, 31, 0x1A5E48u);
    ctx->pc = 0x1A5E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E40u;
    // 0x1a5e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A5E40u, 0x1A5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E48u;
label_1a5e48:
    // 0x1a5e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5e50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E58u;
        // 0x1a5e5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5E60u;
}
