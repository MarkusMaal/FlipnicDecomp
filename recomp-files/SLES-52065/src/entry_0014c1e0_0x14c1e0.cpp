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

// Function: entry_0014c1e0
// Address: 0x14c1e0 - 0x14c1fc
void entry_0014c1e0_0x14c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c1e0_0x14c1e0");
#endif

    ctx->pc = 0x14c1e0u;

    // 0x14c1e0: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x14c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x14c1e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C1E4u;
    {
        const bool branch_taken_0x14c1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1e4) {
            ctx->pc = 0x14C1FCu;
            return;
        }
    }
    ctx->pc = 0x14C1ECu;
    // 0x14c1ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C1ECu;
    {
        const bool branch_taken_0x14c1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1ECu;
        // 0x14c1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1ec) {
            ctx->pc = 0x14C1FCu;
            return;
        }
    }
    ctx->pc = 0x14C1F4u;
    // 0x14c1f4: 0xc053764  jal         func_14DD90
    ctx->pc = 0x14C1F4u;
    SET_GPR_U32(ctx, 31, 0x14C1FCu);
    ctx->pc = 0x14DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD90u, 0x14C1F4u, 0x14C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1FCu;
}
