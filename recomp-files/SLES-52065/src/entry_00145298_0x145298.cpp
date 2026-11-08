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

// Function: entry_00145298
// Address: 0x145298 - 0x1452bc
void entry_00145298_0x145298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145298_0x145298");
#endif

    switch (ctx->pc) {
        case 0x1452a8u: goto label_1452a8;
        default: break;
    }

    ctx->pc = 0x145298u;

    // 0x145298: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145298u;
    {
        const bool branch_taken_0x145298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145298u;
        // 0x14529c: 0xae5101a4  sw          $s1, 0x1A4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145298) {
            ctx->pc = 0x1452BCu;
            return;
        }
    }
    ctx->pc = 0x1452A0u;
    // 0x1452a0: 0xc0514ec  jal         func_1453B0
    ctx->pc = 0x1452A0u;
    SET_GPR_U32(ctx, 31, 0x1452A8u);
    ctx->pc = 0x1452A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452A0u;
    // 0x1452a4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453B0u, 0x1452A0u, 0x1452A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452A8u;
label_1452a8:
    // 0x1452a8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1452a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1452ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1452ACu;
    {
        const bool branch_taken_0x1452ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452ACu;
        // 0x1452b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452ac) {
            ctx->pc = 0x1452BCu;
            return;
        }
    }
    ctx->pc = 0x1452B4u;
    // 0x1452b4: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1452B4u;
    SET_GPR_U32(ctx, 31, 0x1452BCu);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1452B4u, 0x1452BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452BCu;
}
