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

// Function: entry_001bb664
// Address: 0x1bb664 - 0x1bb684
void entry_001bb664_0x1bb664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb664_0x1bb664");
#endif

    ctx->pc = 0x1bb664u;

    // 0x1bb664: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb668: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB668u;
        // 0x1bb66c: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB6C4u;
            return;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb674: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB674u;
    {
        const bool branch_taken_0x1bb674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB674u;
        // 0x1bb678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb674) {
            ctx->pc = 0x1BB684u;
            return;
        }
    }
    ctx->pc = 0x1BB67Cu;
    // 0x1bb67c: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB67Cu;
    SET_GPR_U32(ctx, 31, 0x1BB684u);
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1BB67Cu, 0x1BB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB684u;
}
