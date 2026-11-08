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

// Function: entry_0013c3f8
// Address: 0x13c3f8 - 0x13c414
void entry_0013c3f8_0x13c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c3f8_0x13c3f8");
#endif

    ctx->pc = 0x13c3f8u;

    // 0x13c3f8: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x13c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x13c3fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C3FCu;
    {
        const bool branch_taken_0x13c3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3fc) {
            ctx->pc = 0x13C414u;
            return;
        }
    }
    ctx->pc = 0x13C404u;
    // 0x13c404: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C404u;
    {
        const bool branch_taken_0x13c404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C404u;
        // 0x13c408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c404) {
            ctx->pc = 0x13C414u;
            return;
        }
    }
    ctx->pc = 0x13C40Cu;
    // 0x13c40c: 0xc048414  jal         func_121050
    ctx->pc = 0x13C40Cu;
    SET_GPR_U32(ctx, 31, 0x13C414u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x13C40Cu, 0x13C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C414u;
}
