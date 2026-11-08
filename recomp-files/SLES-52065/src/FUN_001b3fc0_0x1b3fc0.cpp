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

// Function: FUN_001b3fc0
// Address: 0x1b3fc0 - 0x1b4000
void FUN_001b3fc0_0x1b3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3fc0_0x1b3fc0");
#endif

    switch (ctx->pc) {
        case 0x1b3fd8u: goto label_1b3fd8;
        case 0x1b3fe8u: goto label_1b3fe8;
        default: break;
    }

    ctx->pc = 0x1b3fc0u;

    // 0x1b3fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fd0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B3FD0u;
    SET_GPR_U32(ctx, 31, 0x1B3FD8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B3FD0u, 0x1B3FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FD8u;
label_1b3fd8:
    // 0x1b3fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b3fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fdc: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1b3fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1b3fe0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1B3FE0u;
    SET_GPR_U32(ctx, 31, 0x1B3FE8u);
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1B3FE0u, 0x1B3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FE8u;
label_1b3fe8:
    // 0x1b3fe8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b3fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b3fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ff4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b3ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b3ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4000u;
}
