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

// Function: entry_001c81ec
// Address: 0x1c81ec - 0x1c8208
void entry_001c81ec_0x1c81ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c81ec_0x1c81ec");
#endif

    switch (ctx->pc) {
        case 0x1c81f8u: goto label_1c81f8;
        case 0x1c8204u: goto label_1c8204;
        default: break;
    }

    ctx->pc = 0x1c81ecu;

    // 0x1c81ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c81ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C81F0u;
    SET_GPR_U32(ctx, 31, 0x1C81F8u);
    ctx->pc = 0x1C81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F0u;
    // 0x1c81f4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C81F0u, 0x1C81F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81F8u;
label_1c81f8:
    // 0x1c81f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c81f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81fc: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C81FCu;
    SET_GPR_U32(ctx, 31, 0x1C8204u);
    ctx->pc = 0x1C8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81FCu;
    // 0x1c8200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C81FCu, 0x1C8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8204u;
label_1c8204:
    // 0x1c8204: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c8204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1c8208u;
}
