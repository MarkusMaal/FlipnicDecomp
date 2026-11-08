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

// Function: entry_001c1e90
// Address: 0x1c1e90 - 0x1c1eb4
void entry_001c1e90_0x1c1e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e90_0x1c1e90");
#endif

    switch (ctx->pc) {
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1eb0u: goto label_1c1eb0;
        default: break;
    }

    ctx->pc = 0x1c1e90u;

    // 0x1c1e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e94: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1E94u;
    SET_GPR_U32(ctx, 31, 0x1C1E9Cu);
    ctx->pc = 0x1C1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E94u;
    // 0x1c1e98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1E94u, 0x1C1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E9Cu;
label_1c1e9c:
    // 0x1c1e9c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c1e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c1ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ea4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1ea8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1EA8u;
    SET_GPR_U32(ctx, 31, 0x1C1EB0u);
    ctx->pc = 0x1C1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EA8u;
    // 0x1c1eac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1EA8u, 0x1C1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EB0u;
label_1c1eb0:
    // 0x1c1eb0: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c1eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1c1eb4u;
}
