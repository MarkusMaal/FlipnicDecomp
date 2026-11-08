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

// Function: entry_0011f128
// Address: 0x11f128 - 0x11f13c
void entry_0011f128_0x11f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f128_0x11f128");
#endif

    ctx->pc = 0x11f128u;

    // 0x11f128: 0x8e750094  lw          $s5, 0x94($s3)
    ctx->pc = 0x11f128u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x11f12c: 0x295082a  slt         $at, $s4, $s5
    ctx->pc = 0x11f12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11f130: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F130u;
    {
        const bool branch_taken_0x11f130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f130) {
            ctx->pc = 0x11F13Cu;
            return;
        }
    }
    ctx->pc = 0x11F138u;
    // 0x11f138: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x11f138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11f13cu;
}
