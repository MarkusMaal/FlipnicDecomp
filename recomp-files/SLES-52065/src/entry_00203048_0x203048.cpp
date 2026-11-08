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

// Function: entry_00203048
// Address: 0x203048 - 0x203060
void entry_00203048_0x203048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203048_0x203048");
#endif

    switch (ctx->pc) {
        case 0x20305cu: goto label_20305c;
        default: break;
    }

    ctx->pc = 0x203048u;

    // 0x203048: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x203048u;
    {
        const bool branch_taken_0x203048 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203048u;
        // 0x20304c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203048) {
            ctx->pc = 0x203060u;
            return;
        }
    }
    ctx->pc = 0x203050u;
    // 0x203050: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x203050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203054: 0xc08009a  jal         func_200268
    ctx->pc = 0x203054u;
    SET_GPR_U32(ctx, 31, 0x20305Cu);
    ctx->pc = 0x203058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203054u;
    // 0x203058: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x203054u, 0x20305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20305Cu;
label_20305c:
    // 0x20305c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x20305cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x203060u;
}
