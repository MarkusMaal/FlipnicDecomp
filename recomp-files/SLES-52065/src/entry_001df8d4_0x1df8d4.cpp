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

// Function: entry_001df8d4
// Address: 0x1df8d4 - 0x1df8e8
void entry_001df8d4_0x1df8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8d4_0x1df8d4");
#endif

    switch (ctx->pc) {
        case 0x1df8dcu: goto label_1df8dc;
        default: break;
    }

    ctx->pc = 0x1df8d4u;

    // 0x1df8d4: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF8D4u;
    SET_GPR_U32(ctx, 31, 0x1DF8DCu);
    ctx->pc = 0x1DF8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8D4u;
    // 0x1df8d8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF8D4u, 0x1DF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8DCu;
label_1df8dc:
    // 0x1df8dc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1DF8DCu;
    {
        const bool branch_taken_0x1df8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8DCu;
        // 0x1df8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8dc) {
            ctx->pc = 0x1DFA40u;
            return;
        }
    }
    ctx->pc = 0x1DF8E4u;
    // 0x1df8e4: 0x0  nop
    ctx->pc = 0x1df8e4u;
    // NOP
    ctx->pc = 0x1df8e8u;
}
