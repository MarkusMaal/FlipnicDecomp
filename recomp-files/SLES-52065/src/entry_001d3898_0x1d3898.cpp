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

// Function: entry_001d3898
// Address: 0x1d3898 - 0x1d38ac
void entry_001d3898_0x1d3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3898_0x1d3898");
#endif

    ctx->pc = 0x1d3898u;

    // 0x1d3898: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3898u;
    {
        const bool branch_taken_0x1d3898 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3898u;
        // 0x1d389c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3898) {
            ctx->pc = 0x1D38ACu;
            return;
        }
    }
    ctx->pc = 0x1D38A0u;
    // 0x1d38a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38a4: 0xc07725e  jal         func_1DC978
    ctx->pc = 0x1D38A4u;
    SET_GPR_U32(ctx, 31, 0x1D38ACu);
    ctx->pc = 0x1D38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38A4u;
    // 0x1d38a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC978u, 0x1D38A4u, 0x1D38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38ACu;
}
