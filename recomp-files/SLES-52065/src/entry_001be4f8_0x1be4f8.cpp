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

// Function: entry_001be4f8
// Address: 0x1be4f8 - 0x1be510
void entry_001be4f8_0x1be4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be4f8_0x1be4f8");
#endif

    switch (ctx->pc) {
        case 0x1be50cu: goto label_1be50c;
        default: break;
    }

    ctx->pc = 0x1be4f8u;

    // 0x1be4f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be4fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE4FCu;
    {
        const bool branch_taken_0x1be4fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4FCu;
        // 0x1be500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4fc) {
            ctx->pc = 0x1BE510u;
            return;
        }
    }
    ctx->pc = 0x1BE504u;
    // 0x1be504: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE504u;
    SET_GPR_U32(ctx, 31, 0x1BE50Cu);
    ctx->pc = 0x1BE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE504u;
    // 0x1be508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE504u, 0x1BE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE50Cu;
label_1be50c:
    // 0x1be50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be510u;
}
