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

// Function: entry_0013021c
// Address: 0x13021c - 0x130240
void entry_0013021c_0x13021c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013021c_0x13021c");
#endif

    switch (ctx->pc) {
        case 0x13023cu: goto label_13023c;
        default: break;
    }

    ctx->pc = 0x13021cu;

    // 0x13021c: 0x8f9085c8  lw          $s0, -0x7A38($gp)
    ctx->pc = 0x13021cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x130220: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130220u;
    {
        const bool branch_taken_0x130220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130220) {
            ctx->pc = 0x130248u;
            return;
        }
    }
    ctx->pc = 0x130228u;
    // 0x130228: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130228u;
    {
        const bool branch_taken_0x130228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130228u;
        // 0x13022c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130228) {
            ctx->pc = 0x130240u;
            return;
        }
    }
    ctx->pc = 0x130230u;
    // 0x130230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130234: 0xc048414  jal         func_121050
    ctx->pc = 0x130234u;
    SET_GPR_U32(ctx, 31, 0x13023Cu);
    ctx->pc = 0x130238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130234u;
    // 0x130238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x130234u, 0x13023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13023Cu;
label_13023c:
    // 0x13023c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130240u;
}
