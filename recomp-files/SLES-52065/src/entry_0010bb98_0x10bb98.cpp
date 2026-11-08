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

// Function: entry_0010bb98
// Address: 0x10bb98 - 0x10bba8
void entry_0010bb98_0x10bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb98_0x10bb98");
#endif

    ctx->pc = 0x10bb98u;

    // 0x10bb98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BB98u;
    {
        const bool branch_taken_0x10bb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB98u;
        // 0x10bb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb98) {
            ctx->pc = 0x10BBA8u;
            return;
        }
    }
    ctx->pc = 0x10BBA0u;
    // 0x10bba0: 0xc042118  jal         func_108460
    ctx->pc = 0x10BBA0u;
    SET_GPR_U32(ctx, 31, 0x10BBA8u);
    ctx->pc = 0x10BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBA0u;
    // 0x10bba4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10BBA0u, 0x10BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBA8u;
}
