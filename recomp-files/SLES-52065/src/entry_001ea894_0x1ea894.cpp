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

// Function: entry_001ea894
// Address: 0x1ea894 - 0x1ea8b8
void entry_001ea894_0x1ea894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea894_0x1ea894");
#endif

    switch (ctx->pc) {
        case 0x1ea8a4u: goto label_1ea8a4;
        default: break;
    }

    ctx->pc = 0x1ea894u;

    // 0x1ea894: 0x0  nop
    ctx->pc = 0x1ea894u;
    // NOP
    // 0x1ea898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea89c: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1EA89Cu;
    SET_GPR_U32(ctx, 31, 0x1EA8A4u);
    ctx->pc = 0x1EA8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA89Cu;
    // 0x1ea8a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1EA89Cu, 0x1EA8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8A4u;
label_1ea8a4:
    // 0x1ea8a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ea8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ea8a8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA848u;
            return;
        }
    }
    ctx->pc = 0x1EA8B0u;
    // 0x1ea8b0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1EA8B0u;
    {
        const bool branch_taken_0x1ea8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8b0) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA8B8u;
}
