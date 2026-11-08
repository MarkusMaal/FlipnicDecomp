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

// Function: entry_001d9620
// Address: 0x1d9620 - 0x1d9630
void entry_001d9620_0x1d9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9620_0x1d9620");
#endif

    ctx->pc = 0x1d9620u;

    // 0x1d9620: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9620u;
    {
        const bool branch_taken_0x1d9620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1D9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9620u;
        // 0x1d9624: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9620) {
            ctx->pc = 0x1D9630u;
            return;
        }
    }
    ctx->pc = 0x1D9628u;
    // 0x1d9628: 0xc0764ea  jal         func_1D93A8
    ctx->pc = 0x1D9628u;
    SET_GPR_U32(ctx, 31, 0x1D9630u);
    ctx->pc = 0x1D962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9628u;
    // 0x1d962c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93A8u, 0x1D9628u, 0x1D9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9630u;
}
