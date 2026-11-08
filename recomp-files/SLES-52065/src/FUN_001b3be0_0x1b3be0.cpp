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

// Function: FUN_001b3be0
// Address: 0x1b3be0 - 0x1b3c28
void FUN_001b3be0_0x1b3be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3be0_0x1b3be0");
#endif

    switch (ctx->pc) {
        case 0x1b3c04u: goto label_1b3c04;
        case 0x1b3c10u: goto label_1b3c10;
        default: break;
    }

    ctx->pc = 0x1b3be0u;

    // 0x1b3be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bf0: 0x8c842780  lw          $a0, 0x2780($a0)
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10112)));
    // 0x1b3bf4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3BF4u;
    {
        const bool branch_taken_0x1b3bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bf4) {
            ctx->pc = 0x1B3C14u;
            goto label_1b3c14;
        }
    }
    ctx->pc = 0x1B3BFCu;
    // 0x1b3bfc: 0xc06cff0  jal         func_1B3FC0
    ctx->pc = 0x1B3BFCu;
    SET_GPR_U32(ctx, 31, 0x1B3C04u);
    ctx->pc = 0x1B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FC0u, 0x1B3BFCu, 0x1B3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C04u;
label_1b3c04:
    // 0x1b3c04: 0x8e042780  lw          $a0, 0x2780($s0)
    ctx->pc = 0x1b3c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10112)));
    // 0x1b3c08: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B3C08u;
    SET_GPR_U32(ctx, 31, 0x1B3C10u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B3C08u, 0x1B3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C10u;
label_1b3c10:
    // 0x1b3c10: 0xae002780  sw          $zero, 0x2780($s0)
    ctx->pc = 0x1b3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10112), GPR_U32(ctx, 0));
label_1b3c14:
    // 0x1b3c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b3c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b3c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3C28u;
}
