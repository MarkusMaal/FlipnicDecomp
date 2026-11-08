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

// Function: entry_001056a4
// Address: 0x1056a4 - 0x1056bc
void entry_001056a4_0x1056a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001056a4_0x1056a4");
#endif

    ctx->pc = 0x1056a4u;

    // 0x1056a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1056a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1056a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1056a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1056ac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1056ACu;
    {
        const bool branch_taken_0x1056ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1056B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056ACu;
        // 0x1056b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056ac) {
            ctx->pc = 0x1056BCu;
            return;
        }
    }
    ctx->pc = 0x1056B4u;
    // 0x1056b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1056B4u;
    SET_GPR_U32(ctx, 31, 0x1056BCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1056B4u, 0x1056BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056BCu;
}
