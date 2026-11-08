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

// Function: entry_0012f7c4
// Address: 0x12f7c4 - 0x12f7dc
void entry_0012f7c4_0x12f7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f7c4_0x12f7c4");
#endif

    switch (ctx->pc) {
        case 0x12f7d4u: goto label_12f7d4;
        default: break;
    }

    ctx->pc = 0x12f7c4u;

    // 0x12f7c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12f7c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12f7cc: 0xc04be08  jal         func_12F820
    ctx->pc = 0x12F7CCu;
    SET_GPR_U32(ctx, 31, 0x12F7D4u);
    ctx->pc = 0x12F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F7CCu;
    // 0x12f7d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x12F7CCu, 0x12F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7D4u;
label_12f7d4:
    // 0x12f7d4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x12f7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x12f7d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12f7dcu;
}
