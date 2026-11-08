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

// Function: entry_0017f610
// Address: 0x17f610 - 0x17f628
void entry_0017f610_0x17f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f610_0x17f610");
#endif

    switch (ctx->pc) {
        case 0x17f624u: goto label_17f624;
        default: break;
    }

    ctx->pc = 0x17f610u;

    // 0x17f610: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f614: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F614u;
    {
        const bool branch_taken_0x17f614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F614u;
        // 0x17f618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f614) {
            ctx->pc = 0x17F628u;
            return;
        }
    }
    ctx->pc = 0x17F61Cu;
    // 0x17f61c: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F61Cu;
    SET_GPR_U32(ctx, 31, 0x17F624u);
    ctx->pc = 0x17F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F61Cu;
    // 0x17f620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F61Cu, 0x17F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F624u;
label_17f624:
    // 0x17f624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f628u;
}
