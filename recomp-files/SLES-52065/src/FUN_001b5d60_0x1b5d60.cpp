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

// Function: FUN_001b5d60
// Address: 0x1b5d60 - 0x1b5d94
void FUN_001b5d60_0x1b5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5d60_0x1b5d60");
#endif

    switch (ctx->pc) {
        case 0x1b5d80u: goto label_1b5d80;
        default: break;
    }

    ctx->pc = 0x1b5d60u;

    // 0x1b5d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5d64: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b5d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b5d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5d70: 0x8c25c688  lw          $a1, -0x3978($at)
    ctx->pc = 0x1b5d70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x22C688u));
    // 0x1b5d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d78: 0xc06d804  jal         func_1B6010
    ctx->pc = 0x1B5D78u;
    SET_GPR_U32(ctx, 31, 0x1B5D80u);
    ctx->pc = 0x1B5D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D78u;
    // 0x1b5d7c: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6010u, 0x1B5D78u, 0x1B5D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D80u;
label_1b5d80:
    // 0x1b5d80: 0x9202006c  lbu         $v0, 0x6C($s0)
    ctx->pc = 0x1b5d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1b5d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D8Cu;
        // 0x1b5d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D94u;
}
