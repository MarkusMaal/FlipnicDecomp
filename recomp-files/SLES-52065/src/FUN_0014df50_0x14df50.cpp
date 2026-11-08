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

// Function: FUN_0014df50
// Address: 0x14df50 - 0x14df9c
void FUN_0014df50_0x14df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014df50_0x14df50");
#endif

    switch (ctx->pc) {
        case 0x14df88u: goto label_14df88;
        default: break;
    }

    ctx->pc = 0x14df50u;

    // 0x14df50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14df54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14df58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14df5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x14df60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14df60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df64: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x14df64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x14df68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14df68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x14df6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14df70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14df74: 0x83a7002c  lb          $a3, 0x2C($sp)
    ctx->pc = 0x14df74u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14df78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14df7c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14df7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df80: 0xc053a44  jal         func_14E910
    ctx->pc = 0x14DF80u;
    SET_GPR_U32(ctx, 31, 0x14DF88u);
    ctx->pc = 0x14DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF80u;
    // 0x14df84: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E910u, 0x14DF80u, 0x14DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF88u;
label_14df88:
    // 0x14df88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14df88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14df8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14df90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df94: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF94u;
        // 0x14df98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DF9Cu;
}
