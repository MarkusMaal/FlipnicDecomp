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

// Function: entry_0012f9e4
// Address: 0x12f9e4 - 0x12fa00
void entry_0012f9e4_0x12f9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f9e4_0x12f9e4");
#endif

    switch (ctx->pc) {
        case 0x12f9f8u: goto label_12f9f8;
        default: break;
    }

    ctx->pc = 0x12f9e4u;

    // 0x12f9e4: 0x0  nop
    ctx->pc = 0x12f9e4u;
    // NOP
    // 0x12f9e8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12f9ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12f9f0: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x12F9F0u;
    SET_GPR_U32(ctx, 31, 0x12F9F8u);
    ctx->pc = 0x12F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9F0u;
    // 0x12f9f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x12F9F0u, 0x12F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9F8u;
label_12f9f8:
    // 0x12f9f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12f9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12f9fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12fa00u;
}
