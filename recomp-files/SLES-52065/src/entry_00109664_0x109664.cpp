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

// Function: entry_00109664
// Address: 0x109664 - 0x109680
void entry_00109664_0x109664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109664_0x109664");
#endif

    switch (ctx->pc) {
        case 0x10967cu: goto label_10967c;
        default: break;
    }

    ctx->pc = 0x109664u;

label_109664:
    // 0x109664: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x109664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_109668:
    // 0x109668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10966c:
    // 0x10966c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109670:
    // 0x109670: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109674:
    // 0x109674: 0x320f809  jalr        $t9
label_109678:
    if (ctx->pc == 0x109678u) {
        ctx->pc = 0x109678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109674u;
        // 0x109678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10967Cu;
        goto label_10967c;
    }
    ctx->pc = 0x109674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10967Cu);
        ctx->pc = 0x109678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109674u;
        // 0x109678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109674u, 0x10967Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10967Cu;
label_10967c:
    // 0x10967c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10967cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109680u;
}
