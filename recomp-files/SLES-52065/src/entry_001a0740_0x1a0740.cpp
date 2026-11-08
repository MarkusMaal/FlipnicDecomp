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

// Function: entry_001a0740
// Address: 0x1a0740 - 0x1a075c
void entry_001a0740_0x1a0740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0740_0x1a0740");
#endif

    switch (ctx->pc) {
        case 0x1a0748u: goto label_1a0748;
        case 0x1a0754u: goto label_1a0754;
        default: break;
    }

    ctx->pc = 0x1a0740u;

    // 0x1a0740: 0xc04be08  jal         func_12F820
    ctx->pc = 0x1A0740u;
    SET_GPR_U32(ctx, 31, 0x1A0748u);
    ctx->pc = 0x1A0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0740u;
    // 0x1a0744: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A0740u, 0x1A0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0748u;
label_1a0748:
    // 0x1a0748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a074c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A074Cu;
    SET_GPR_U32(ctx, 31, 0x1A0754u);
    ctx->pc = 0x1A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A074Cu;
    // 0x1a0750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A074Cu, 0x1A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A0754u;
    {
        const bool branch_taken_0x1a0754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0754) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A075Cu;
}
