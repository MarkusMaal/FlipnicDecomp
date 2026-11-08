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

// Function: entry_00202930
// Address: 0x202930 - 0x202944
void entry_00202930_0x202930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202930_0x202930");
#endif

    ctx->pc = 0x202930u;

    // 0x202930: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x202930u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x202934: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202938: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20293c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20293Cu;
    {
        const bool branch_taken_0x20293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20293Cu;
        // 0x202940: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20293c) {
            ctx->pc = 0x202A84u;
            return;
        }
    }
    ctx->pc = 0x202944u;
}
