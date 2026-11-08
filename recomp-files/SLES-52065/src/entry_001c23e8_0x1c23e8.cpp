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

// Function: entry_001c23e8
// Address: 0x1c23e8 - 0x1c2414
void entry_001c23e8_0x1c23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c23e8_0x1c23e8");
#endif

    switch (ctx->pc) {
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c240cu: goto label_1c240c;
        default: break;
    }

    ctx->pc = 0x1c23e8u;

    // 0x1c23e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23F0u;
    SET_GPR_U32(ctx, 31, 0x1C23F8u);
    ctx->pc = 0x1C23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23F0u;
    // 0x1c23f4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23F0u, 0x1C23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23F8u;
label_1c23f8:
    // 0x1c23f8: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c23f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c23fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2404: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2404u;
    SET_GPR_U32(ctx, 31, 0x1C240Cu);
    ctx->pc = 0x1C2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2404u;
    // 0x1c2408: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2404u, 0x1C240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C240Cu;
label_1c240c:
    // 0x1c240c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C240Cu;
    {
        const bool branch_taken_0x1c240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C240Cu;
        // 0x1c2410: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c240c) {
            ctx->pc = 0x1C2484u;
            return;
        }
    }
    ctx->pc = 0x1C2414u;
}
