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

// Function: entry_001b06cc
// Address: 0x1b06cc - 0x1b06e0
void entry_001b06cc_0x1b06cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b06cc_0x1b06cc");
#endif

    ctx->pc = 0x1b06ccu;

    // 0x1b06cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B06CCu;
    {
        const bool branch_taken_0x1b06cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06cc) {
            ctx->pc = 0x1B06E0u;
            return;
        }
    }
    ctx->pc = 0x1B06D4u;
    // 0x1b06d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b06d8: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b06d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
    // 0x1b06dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b06dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b06e0u;
}
