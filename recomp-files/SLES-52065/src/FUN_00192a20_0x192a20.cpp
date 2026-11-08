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

// Function: FUN_00192a20
// Address: 0x192a20 - 0x192a70
void FUN_00192a20_0x192a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192a20_0x192a20");
#endif

    switch (ctx->pc) {
        case 0x192a44u: goto label_192a44;
        case 0x192a50u: goto label_192a50;
        default: break;
    }

    ctx->pc = 0x192a20u;

    // 0x192a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x192a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192a3c: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x192A3Cu;
    SET_GPR_U32(ctx, 31, 0x192A44u);
    ctx->pc = 0x192A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A3Cu;
    // 0x192a40: 0x7fa00030  sq          $zero, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x192A3Cu, 0x192A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A44u;
label_192a44:
    // 0x192a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a48: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x192A48u;
    SET_GPR_U32(ctx, 31, 0x192A50u);
    ctx->pc = 0x192A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A48u;
    // 0x192a4c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x192A48u, 0x192A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A50u;
label_192a50:
    // 0x192a50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192A50u;
    {
        const bool branch_taken_0x192a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a50) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A58u;
    // 0x192a58: 0xac500328  sw          $s0, 0x328($v0)
    ctx->pc = 0x192a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 16));
label_192a5c:
    // 0x192a5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a68: 0x3e00008  jr          $ra
    ctx->pc = 0x192A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A68u;
        // 0x192a6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A70u;
}
