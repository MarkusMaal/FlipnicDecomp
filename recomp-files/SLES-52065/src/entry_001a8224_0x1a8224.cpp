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

// Function: entry_001a8224
// Address: 0x1a8224 - 0x1a823c
void entry_001a8224_0x1a8224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8224_0x1a8224");
#endif

    switch (ctx->pc) {
        case 0x1a8234u: goto label_1a8234;
        default: break;
    }

    ctx->pc = 0x1a8224u;

    // 0x1a8224: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x1A8224u;
    {
        const bool branch_taken_0x1a8224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8224) {
            ctx->pc = 0x1A855Cu;
            return;
        }
    }
    ctx->pc = 0x1A822Cu;
    // 0x1a822c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A822Cu;
    SET_GPR_U32(ctx, 31, 0x1A8234u);
    ctx->pc = 0x1A8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A822Cu;
    // 0x1a8230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A822Cu, 0x1A8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8234u;
label_1a8234:
    // 0x1a8234: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1A8234u;
    {
        const bool branch_taken_0x1a8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8234) {
            ctx->pc = 0x1A855Cu;
            return;
        }
    }
    ctx->pc = 0x1A823Cu;
}
