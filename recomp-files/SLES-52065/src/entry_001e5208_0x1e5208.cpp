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

// Function: entry_001e5208
// Address: 0x1e5208 - 0x1e5230
void entry_001e5208_0x1e5208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5208_0x1e5208");
#endif

    switch (ctx->pc) {
        case 0x1e5228u: goto label_1e5228;
        default: break;
    }

    ctx->pc = 0x1e5208u;

    // 0x1e5208: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5208u;
    {
        const bool branch_taken_0x1e5208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e5208) {
            ctx->pc = 0x1E5230u;
            return;
        }
    }
    ctx->pc = 0x1E5210u;
    // 0x1e5210: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e5210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e5214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e521c: 0x603026  xor         $a2, $v1, $zero
    ctx->pc = 0x1e521cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1e5220: 0xc0798e4  jal         func_1E6390
    ctx->pc = 0x1E5220u;
    SET_GPR_U32(ctx, 31, 0x1E5228u);
    ctx->pc = 0x1E5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5220u;
    // 0x1e5224: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6390u, 0x1E5220u, 0x1E5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5228u;
label_1e5228:
    // 0x1e5228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5228u;
    {
        const bool branch_taken_0x1e5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5228) {
            ctx->pc = 0x1E5244u;
            return;
        }
    }
    ctx->pc = 0x1E5230u;
}
