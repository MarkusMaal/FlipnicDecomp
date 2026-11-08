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

// Function: entry_00203018
// Address: 0x203018 - 0x203030
void entry_00203018_0x203018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203018_0x203018");
#endif

    switch (ctx->pc) {
        case 0x20302cu: goto label_20302c;
        default: break;
    }

    ctx->pc = 0x203018u;

    // 0x203018: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x203018u;
    {
        const bool branch_taken_0x203018 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x20301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203018u;
        // 0x20301c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203018) {
            ctx->pc = 0x203030u;
            return;
        }
    }
    ctx->pc = 0x203020u;
    // 0x203020: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x203020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203024: 0xc08005a  jal         func_200168
    ctx->pc = 0x203024u;
    SET_GPR_U32(ctx, 31, 0x20302Cu);
    ctx->pc = 0x203028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203024u;
    // 0x203028: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x203024u, 0x20302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20302Cu;
label_20302c:
    // 0x20302c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x20302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x203030u;
}
