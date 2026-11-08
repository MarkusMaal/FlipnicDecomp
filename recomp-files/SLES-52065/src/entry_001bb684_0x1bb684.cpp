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

// Function: entry_001bb684
// Address: 0x1bb684 - 0x1bb69c
void entry_001bb684_0x1bb684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb684_0x1bb684");
#endif

    switch (ctx->pc) {
        case 0x1bb698u: goto label_1bb698;
        default: break;
    }

    ctx->pc = 0x1bb684u;

    // 0x1bb684: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb688: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB688u;
    {
        const bool branch_taken_0x1bb688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB688u;
        // 0x1bb68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb688) {
            ctx->pc = 0x1BB69Cu;
            return;
        }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB690u;
    SET_GPR_U32(ctx, 31, 0x1BB698u);
    ctx->pc = 0x1BB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB690u;
    // 0x1bb694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1BB690u, 0x1BB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB698u;
label_1bb698:
    // 0x1bb698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb69cu;
}
