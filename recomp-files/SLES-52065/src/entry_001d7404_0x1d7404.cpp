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

// Function: entry_001d7404
// Address: 0x1d7404 - 0x1d7428
void entry_001d7404_0x1d7404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7404_0x1d7404");
#endif

    switch (ctx->pc) {
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7420u: goto label_1d7420;
        default: break;
    }

    ctx->pc = 0x1d7404u;

    // 0x1d7404: 0xc077868  jal         func_1DE1A0
    ctx->pc = 0x1D7404u;
    SET_GPR_U32(ctx, 31, 0x1D740Cu);
    ctx->pc = 0x1DE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1A0u, 0x1D7404u, 0x1D740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D740Cu;
label_1d740c:
    // 0x1d740c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7410: 0x92c70002  lbu         $a3, 0x2($s6)
    ctx->pc = 0x1d7410u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1d7414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7418: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D7418u;
    SET_GPR_U32(ctx, 31, 0x1D7420u);
    ctx->pc = 0x1D741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7418u;
    // 0x1d741c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D7418u, 0x1D7420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7420u;
label_1d7420:
    // 0x1d7420: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D7420u;
    {
        const bool branch_taken_0x1d7420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7420u;
        // 0x1d7424: 0x8ea20030  lw          $v0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7420) {
            ctx->pc = 0x1D7458u;
            return;
        }
    }
    ctx->pc = 0x1D7428u;
}
