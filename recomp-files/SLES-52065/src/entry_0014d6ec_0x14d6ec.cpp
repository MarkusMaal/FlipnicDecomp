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

// Function: entry_0014d6ec
// Address: 0x14d6ec - 0x14d6fc
void entry_0014d6ec_0x14d6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d6ec_0x14d6ec");
#endif

    ctx->pc = 0x14d6ecu;

    // 0x14d6ec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D6ECu;
    {
        const bool branch_taken_0x14d6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6ECu;
        // 0x14d6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6ec) {
            ctx->pc = 0x14D6FCu;
            return;
        }
    }
    ctx->pc = 0x14D6F4u;
    // 0x14d6f4: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D6F4u;
    SET_GPR_U32(ctx, 31, 0x14D6FCu);
    ctx->pc = 0x14D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6F4u;
    // 0x14d6f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D6F4u, 0x14D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6FCu;
}
