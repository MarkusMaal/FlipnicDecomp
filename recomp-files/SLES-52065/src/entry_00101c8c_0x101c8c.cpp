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

// Function: entry_00101c8c
// Address: 0x101c8c - 0x101cd0
void entry_00101c8c_0x101c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101c8c_0x101c8c");
#endif

    switch (ctx->pc) {
        case 0x101c98u: goto label_101c98;
        case 0x101ca4u: goto label_101ca4;
        case 0x101cacu: goto label_101cac;
        default: break;
    }

    ctx->pc = 0x101c8cu;

    // 0x101c8c: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x101c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
    // 0x101c90: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x101C90u;
    SET_GPR_U32(ctx, 31, 0x101C98u);
    ctx->pc = 0x101C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C90u;
    // 0x101c94: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x101C90u, 0x101C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C98u;
label_101c98:
    // 0x101c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c9c: 0xc040734  jal         func_101CD0
    ctx->pc = 0x101C9Cu;
    SET_GPR_U32(ctx, 31, 0x101CA4u);
    ctx->pc = 0x101CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C9Cu;
    // 0x101ca0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CD0u, 0x101C9Cu, 0x101CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CA4u;
label_101ca4:
    // 0x101ca4: 0xc046494  jal         func_119250
    ctx->pc = 0x101CA4u;
    SET_GPR_U32(ctx, 31, 0x101CACu);
    ctx->pc = 0x101CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CA4u;
    // 0x101ca8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119250u, 0x101CA4u, 0x101CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CACu;
label_101cac:
    // 0x101cac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x101cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101cb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x101CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CC8u;
        // 0x101ccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101CD0u;
}
