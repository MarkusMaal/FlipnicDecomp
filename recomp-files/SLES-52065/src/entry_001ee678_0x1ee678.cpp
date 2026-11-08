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

// Function: entry_001ee678
// Address: 0x1ee678 - 0x1ee690
void entry_001ee678_0x1ee678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee678_0x1ee678");
#endif

    switch (ctx->pc) {
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee688u: goto label_1ee688;
        default: break;
    }

    ctx->pc = 0x1ee678u;

    // 0x1ee678: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EE678u;
    SET_GPR_U32(ctx, 31, 0x1EE680u);
    ctx->pc = 0x1EE67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE678u;
    // 0x1ee67c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EE678u, 0x1EE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE680u;
label_1ee680:
    // 0x1ee680: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE680u;
    SET_GPR_U32(ctx, 31, 0x1EE688u);
    ctx->pc = 0x1EE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE680u;
    // 0x1ee684: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE680u, 0x1EE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE688u;
label_1ee688:
    // 0x1ee688: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EE688u;
    {
        const bool branch_taken_0x1ee688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE688u;
        // 0x1ee68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee688) {
            ctx->pc = 0x1EE6CCu;
            return;
        }
    }
    ctx->pc = 0x1EE690u;
}
