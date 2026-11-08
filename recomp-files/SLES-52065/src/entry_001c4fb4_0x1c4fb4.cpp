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

// Function: entry_001c4fb4
// Address: 0x1c4fb4 - 0x1c4fe0
void entry_001c4fb4_0x1c4fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4fb4_0x1c4fb4");
#endif

    switch (ctx->pc) {
        case 0x1c4fbcu: goto label_1c4fbc;
        case 0x1c4fc4u: goto label_1c4fc4;
        default: break;
    }

    ctx->pc = 0x1c4fb4u;

    // 0x1c4fb4: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C4FB4u;
    SET_GPR_U32(ctx, 31, 0x1C4FBCu);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C4FB4u, 0x1C4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FBCu;
label_1c4fbc:
    // 0x1c4fbc: 0xc0714f4  jal         func_1C53D0
    ctx->pc = 0x1C4FBCu;
    SET_GPR_U32(ctx, 31, 0x1C4FC4u);
    ctx->pc = 0x1C4FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FBCu;
    // 0x1c4fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53D0u, 0x1C4FBCu, 0x1C4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FC4u;
label_1c4fc4:
    // 0x1c4fc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c4fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FD8u;
        // 0x1c4fdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4FE0u;
}
