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

// Function: entry_001bb9a8
// Address: 0x1bb9a8 - 0x1bb9c4
void entry_001bb9a8_0x1bb9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb9a8_0x1bb9a8");
#endif

    switch (ctx->pc) {
        case 0x1bb9b8u: goto label_1bb9b8;
        default: break;
    }

    ctx->pc = 0x1bb9a8u;

    // 0x1bb9a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb9ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb9b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB9B0u;
    SET_GPR_U32(ctx, 31, 0x1BB9B8u);
    ctx->pc = 0x1BB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9B0u;
    // 0x1bb9b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB9B0u, 0x1BB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9B8u;
label_1bb9b8:
    // 0x1bb9b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb9bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bb9c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1bb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1bb9c4u;
}
