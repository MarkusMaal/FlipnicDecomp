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

// Function: entry_0012b2dc
// Address: 0x12b2dc - 0x12b300
void entry_0012b2dc_0x12b2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b2dc_0x12b2dc");
#endif

    switch (ctx->pc) {
        case 0x12b2e8u: goto label_12b2e8;
        default: break;
    }

    ctx->pc = 0x12b2dcu;

    // 0x12b2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2e0: 0xc04a81c  jal         func_12A070
    ctx->pc = 0x12B2E0u;
    SET_GPR_U32(ctx, 31, 0x12B2E8u);
    ctx->pc = 0x12B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2E0u;
    // 0x12b2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A070u, 0x12B2E0u, 0x12B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2E8u;
label_12b2e8:
    // 0x12b2e8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12b2ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b2f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B2F0u;
    {
        const bool branch_taken_0x12b2f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F0u;
        // 0x12b2f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2f0) {
            ctx->pc = 0x12B304u;
            return;
        }
    }
    ctx->pc = 0x12B2F8u;
    // 0x12b2f8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12B2F8u;
    SET_GPR_U32(ctx, 31, 0x12B300u);
    ctx->pc = 0x12B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2F8u;
    // 0x12b2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12B2F8u, 0x12B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B300u;
}
