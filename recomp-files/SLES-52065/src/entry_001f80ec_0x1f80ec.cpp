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

// Function: entry_001f80ec
// Address: 0x1f80ec - 0x1f8104
void entry_001f80ec_0x1f80ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f80ec_0x1f80ec");
#endif

    switch (ctx->pc) {
        case 0x1f8100u: goto label_1f8100;
        default: break;
    }

    ctx->pc = 0x1f80ecu;

    // 0x1f80ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f80f0: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x1f80f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1f80f4: 0x8c44bb2c  lw          $a0, -0x44D4($v0)
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21BB2Cu));
    // 0x1f80f8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F80F8u;
    SET_GPR_U32(ctx, 31, 0x1F8100u);
    ctx->pc = 0x1F80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F80F8u;
    // 0x1f80fc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F80F8u, 0x1F8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8100u;
label_1f8100:
    // 0x1f8100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f8104u;
}
