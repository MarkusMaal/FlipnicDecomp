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

// Function: FUN_00124c20
// Address: 0x124c20 - 0x124c6c
void FUN_00124c20_0x124c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124c20_0x124c20");
#endif

    switch (ctx->pc) {
        case 0x124c34u: goto label_124c34;
        default: break;
    }

    ctx->pc = 0x124c20u;

    // 0x124c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124c2c: 0xc048ecc  jal         func_123B30
    ctx->pc = 0x124C2Cu;
    SET_GPR_U32(ctx, 31, 0x124C34u);
    ctx->pc = 0x124C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C2Cu;
    // 0x124c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123B30u, 0x124C2Cu, 0x124C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C34u;
label_124c34:
    // 0x124c34: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x124c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x124c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c3c: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x124c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x124c40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x124c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x124c44: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x124c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x124c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c4c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x124c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x124c50: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x124c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x124c54: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x124c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x124c58: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x124c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x124c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124c64: 0x3e00008  jr          $ra
    ctx->pc = 0x124C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C64u;
        // 0x124c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124C6Cu;
}
