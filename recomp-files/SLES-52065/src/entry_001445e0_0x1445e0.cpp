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

// Function: entry_001445e0
// Address: 0x1445e0 - 0x144600
void entry_001445e0_0x1445e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001445e0_0x1445e0");
#endif

    switch (ctx->pc) {
        case 0x1445e8u: goto label_1445e8;
        case 0x1445fcu: goto label_1445fc;
        default: break;
    }

    ctx->pc = 0x1445e0u;

    // 0x1445e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1445E0u;
    SET_GPR_U32(ctx, 31, 0x1445E8u);
    ctx->pc = 0x1445E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445E0u;
    // 0x1445e4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1445E0u, 0x1445E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445E8u;
label_1445e8:
    // 0x1445e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1445e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445ec: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1445ECu;
    {
        const bool branch_taken_0x1445ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ECu;
        // 0x1445f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445ec) {
            ctx->pc = 0x144600u;
            return;
        }
    }
    ctx->pc = 0x1445F4u;
    // 0x1445f4: 0xc04ceb4  jal         func_133AD0
    ctx->pc = 0x1445F4u;
    SET_GPR_U32(ctx, 31, 0x1445FCu);
    ctx->pc = 0x133AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133AD0u, 0x1445F4u, 0x1445FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445FCu;
label_1445fc:
    // 0x1445fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1445fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144600u;
}
