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

// Function: FUN_0016f780
// Address: 0x16f780 - 0x16f7dc
void FUN_0016f780_0x16f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f780_0x16f780");
#endif

    switch (ctx->pc) {
        case 0x16f798u: goto label_16f798;
        case 0x16f7a4u: goto label_16f7a4;
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f7c8u: goto label_16f7c8;
        default: break;
    }

    ctx->pc = 0x16f780u;

    // 0x16f780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16f788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f790: 0xc0594e0  jal         func_165380
    ctx->pc = 0x16F790u;
    SET_GPR_U32(ctx, 31, 0x16F798u);
    ctx->pc = 0x16F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F790u;
    // 0x16f794: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165380u, 0x16F790u, 0x16F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F798u;
label_16f798:
    // 0x16f798: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f79c: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x16F79Cu;
    SET_GPR_U32(ctx, 31, 0x16F7A4u);
    ctx->pc = 0x16F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F79Cu;
    // 0x16f7a0: 0x80500025  lb          $s0, 0x25($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 37)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x16F79Cu, 0x16F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7A4u;
label_16f7a4:
    // 0x16f7a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7a8: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x16F7A8u;
    SET_GPR_U32(ctx, 31, 0x16F7B0u);
    ctx->pc = 0x16F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7A8u;
    // 0x16f7ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x16F7A8u, 0x16F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7B0u;
label_16f7b0:
    // 0x16f7b0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16f7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7b8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16f7bc: 0xae220240  sw          $v0, 0x240($s1)
    ctx->pc = 0x16f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
    // 0x16f7c0: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x16F7C0u;
    SET_GPR_U32(ctx, 31, 0x16F7C8u);
    ctx->pc = 0x16F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7C0u;
    // 0x16f7c4: 0xa623024c  sh          $v1, 0x24C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 588), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x16F7C0u, 0x16F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7C8u;
label_16f7c8:
    // 0x16f7c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f7cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f7ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f7d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7D4u;
        // 0x16f7d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F7DCu;
}
