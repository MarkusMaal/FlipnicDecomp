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

// Function: entry_001bb584
// Address: 0x1bb584 - 0x1bb5a4
void entry_001bb584_0x1bb584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb584_0x1bb584");
#endif

    ctx->pc = 0x1bb584u;

    // 0x1bb584: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb584u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb588: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB588u;
    {
        const bool branch_taken_0x1bb588 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB588u;
        // 0x1bb58c: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb588) {
            ctx->pc = 0x1BB5E4u;
            return;
        }
    }
    ctx->pc = 0x1BB590u;
    // 0x1bb590: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb594: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB594u;
    {
        const bool branch_taken_0x1bb594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB594u;
        // 0x1bb598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb594) {
            ctx->pc = 0x1BB5A4u;
            return;
        }
    }
    ctx->pc = 0x1BB59Cu;
    // 0x1bb59c: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB59Cu;
    SET_GPR_U32(ctx, 31, 0x1BB5A4u);
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1BB59Cu, 0x1BB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5A4u;
}
