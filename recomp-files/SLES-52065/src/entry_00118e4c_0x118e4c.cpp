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

// Function: entry_00118e4c
// Address: 0x118e4c - 0x118e9c
void entry_00118e4c_0x118e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118e4c_0x118e4c");
#endif

    switch (ctx->pc) {
        case 0x118e70u: goto label_118e70;
        default: break;
    }

    ctx->pc = 0x118e4cu;

    // 0x118e4c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118e50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118e54: 0x24638770  addiu       $v1, $v1, -0x7890
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936432));
    // 0x118e58: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x118e5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118e60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x118e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x118e64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118e68: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x118E68u;
    SET_GPR_U32(ctx, 31, 0x118E70u);
    ctx->pc = 0x118E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E68u;
    // 0x118e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x118E68u, 0x118E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E70u;
label_118e70:
    // 0x118e70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x118e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118e7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x118e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x118e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e94: 0x3e00008  jr          $ra
    ctx->pc = 0x118E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E94u;
        // 0x118e98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E9Cu;
}
