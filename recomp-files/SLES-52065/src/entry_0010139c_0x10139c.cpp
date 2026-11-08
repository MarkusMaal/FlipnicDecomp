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

// Function: entry_0010139c
// Address: 0x10139c - 0x1013c0
void entry_0010139c_0x10139c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010139c_0x10139c");
#endif

    switch (ctx->pc) {
        case 0x1013b0u: goto label_1013b0;
        default: break;
    }

    ctx->pc = 0x10139cu;

    // 0x10139c: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1013a0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1013a4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1013a4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1013a8: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x1013A8u;
    SET_GPR_U32(ctx, 31, 0x1013B0u);
    ctx->pc = 0x1013ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013A8u;
    // 0x1013ac: 0x7c460010  sq          $a2, 0x10($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1013A8u, 0x1013B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013B0u;
label_1013b0:
    // 0x1013b0: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1013b4: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1013b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1013b8: 0xc0513d0  jal         func_144F40
    ctx->pc = 0x1013B8u;
    SET_GPR_U32(ctx, 31, 0x1013C0u);
    ctx->pc = 0x1013BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013B8u;
    // 0x1013bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F40u, 0x1013B8u, 0x1013C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013C0u;
}
