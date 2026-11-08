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

// Function: entry_00108b28
// Address: 0x108b28 - 0x108b80
void entry_00108b28_0x108b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108b28_0x108b28");
#endif

    switch (ctx->pc) {
        case 0x108b38u: goto label_108b38;
        case 0x108b44u: goto label_108b44;
        case 0x108b4cu: goto label_108b4c;
        case 0x108b5cu: goto label_108b5c;
        default: break;
    }

    ctx->pc = 0x108b28u;

    // 0x108b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b30: 0xc057040  jal         func_15C100
    ctx->pc = 0x108B30u;
    SET_GPR_U32(ctx, 31, 0x108B38u);
    ctx->pc = 0x108B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B30u;
    // 0x108b34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x108B30u, 0x108B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B38u;
label_108b38:
    // 0x108b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xc058018  jal         func_160060
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B3Cu;
    // 0x108b40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x108B3Cu, 0x108B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x108B44u;
    SET_GPR_U32(ctx, 31, 0x108B4Cu);
    ctx->pc = 0x108B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B44u;
    // 0x108b48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x108B44u, 0x108B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B4Cu;
label_108b4c:
    // 0x108b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b54: 0xc042360  jal         func_108D80
    ctx->pc = 0x108B54u;
    SET_GPR_U32(ctx, 31, 0x108B5Cu);
    ctx->pc = 0x108B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B54u;
    // 0x108b58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x108B54u, 0x108B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B5Cu;
label_108b5c:
    // 0x108b5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x108b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108b60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x108b60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x108b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108b68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108b78: 0x3e00008  jr          $ra
    ctx->pc = 0x108B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B78u;
        // 0x108b7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B80u;
}
