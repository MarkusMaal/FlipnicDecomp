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

// Function: entry_0011a604
// Address: 0x11a604 - 0x11a620
void entry_0011a604_0x11a604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a604_0x11a604");
#endif

    switch (ctx->pc) {
        case 0x11a618u: goto label_11a618;
        default: break;
    }

    ctx->pc = 0x11a604u;

label_11a604:
    // 0x11a604: 0x0  nop
    ctx->pc = 0x11a604u;
    // NOP
    // 0x11a608: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A608u;
    {
        const bool branch_taken_0x11a608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a608) {
            ctx->pc = 0x11A620u;
            return;
        }
    }
    ctx->pc = 0x11A610u;
    // 0x11a610: 0xc04719c  jal         func_11C670
    ctx->pc = 0x11A610u;
    SET_GPR_U32(ctx, 31, 0x11A618u);
    ctx->pc = 0x11A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A610u;
    // 0x11a614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C670u, 0x11A610u, 0x11A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A618u;
label_11a618:
    // 0x11a618: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A618u;
    {
        const bool branch_taken_0x11a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A618u;
        // 0x11a61c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a618) {
            ctx->pc = 0x11A604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a604;
        }
    }
    ctx->pc = 0x11A620u;
}
