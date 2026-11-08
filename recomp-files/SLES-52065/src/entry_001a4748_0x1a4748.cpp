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

// Function: entry_001a4748
// Address: 0x1a4748 - 0x1a4768
void entry_001a4748_0x1a4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4748_0x1a4748");
#endif

    switch (ctx->pc) {
        case 0x1a4760u: goto label_1a4760;
        default: break;
    }

    ctx->pc = 0x1a4748u;

    // 0x1a4748: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a474c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4750: 0xae220320  sw          $v0, 0x320($s1)
    ctx->pc = 0x1a4750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
    // 0x1a4754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4758: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A4758u;
    SET_GPR_U32(ctx, 31, 0x1A4760u);
    ctx->pc = 0x1A475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4758u;
    // 0x1a475c: 0xacc3093c  sw          $v1, 0x93C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 2364), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4758u, 0x1A4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4760u;
label_1a4760:
    // 0x1a4760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A4760u;
    {
        const bool branch_taken_0x1a4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4760) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4768u;
}
