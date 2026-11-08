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

// Function: entry_001a0644
// Address: 0x1a0644 - 0x1a0664
void entry_001a0644_0x1a0644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0644_0x1a0644");
#endif

    switch (ctx->pc) {
        case 0x1a065cu: goto label_1a065c;
        default: break;
    }

    ctx->pc = 0x1a0644u;

    // 0x1a0644: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1A0644u;
    {
        const bool branch_taken_0x1a0644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0644) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A064Cu;
    // 0x1a064c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a0650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0654: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A0654u;
    SET_GPR_U32(ctx, 31, 0x1A065Cu);
    ctx->pc = 0x1A0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0654u;
    // 0x1a0658: 0xae420328  sw          $v0, 0x328($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A0654u, 0x1A065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A065Cu;
label_1a065c:
    // 0x1a065c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1A065Cu;
    {
        const bool branch_taken_0x1a065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a065c) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A0664u;
}
