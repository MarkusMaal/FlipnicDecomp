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

// Function: entry_00106250
// Address: 0x106250 - 0x106268
void entry_00106250_0x106250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106250_0x106250");
#endif

    ctx->pc = 0x106250u;

    // 0x106250: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x106254: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106258: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106258u;
    {
        const bool branch_taken_0x106258 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106258u;
        // 0x10625c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106258) {
            ctx->pc = 0x10626Cu;
            return;
        }
    }
    ctx->pc = 0x106260u;
    // 0x106260: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106260u;
    SET_GPR_U32(ctx, 31, 0x106268u);
    ctx->pc = 0x106264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106260u;
    // 0x106264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106260u, 0x106268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106268u;
}
