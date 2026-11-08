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

// Function: entry_001964c8
// Address: 0x1964c8 - 0x1964e8
void entry_001964c8_0x1964c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001964c8_0x1964c8");
#endif

    switch (ctx->pc) {
        case 0x1964e0u: goto label_1964e0;
        default: break;
    }

    ctx->pc = 0x1964c8u;

    // 0x1964c8: 0x8e630670  lw          $v1, 0x670($s3)
    ctx->pc = 0x1964c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
    // 0x1964cc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1964ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1964d0: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x1964D0u;
    {
        const bool branch_taken_0x1964d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964d0) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1964D8u;
    // 0x1964d8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1964D8u;
    SET_GPR_U32(ctx, 31, 0x1964E0u);
    ctx->pc = 0x1964DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964D8u;
    // 0x1964dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1964D8u, 0x1964E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964E0u;
label_1964e0:
    // 0x1964e0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1964E0u;
    {
        const bool branch_taken_0x1964e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964e0) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1964E8u;
}
