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

// Function: entry_00134958
// Address: 0x134958 - 0x13496c
void entry_00134958_0x134958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134958_0x134958");
#endif

    ctx->pc = 0x134958u;

    // 0x134958: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x134958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
    // 0x13495c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13495Cu;
    {
        const bool branch_taken_0x13495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13495Cu;
        // 0x134960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13495c) {
            ctx->pc = 0x13496Cu;
            return;
        }
    }
    ctx->pc = 0x134964u;
    // 0x134964: 0xc04d5e8  jal         func_1357A0
    ctx->pc = 0x134964u;
    SET_GPR_U32(ctx, 31, 0x13496Cu);
    ctx->pc = 0x1357A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1357A0u, 0x134964u, 0x13496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13496Cu;
}
