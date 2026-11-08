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

// Function: entry_0014c120
// Address: 0x14c120 - 0x14c138
void entry_0014c120_0x14c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c120_0x14c120");
#endif

    switch (ctx->pc) {
        case 0x14c134u: goto label_14c134;
        default: break;
    }

    ctx->pc = 0x14c120u;

    // 0x14c120: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14c124: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14c128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c12c: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x14C12Cu;
    SET_GPR_U32(ctx, 31, 0x14C134u);
    ctx->pc = 0x14C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C12Cu;
    // 0x14c130: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x14C12Cu, 0x14C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C134u;
label_14c134:
    // 0x14c134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x14c138u;
}
