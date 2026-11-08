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

// Function: entry_00202d64
// Address: 0x202d64 - 0x202d78
void entry_00202d64_0x202d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202d64_0x202d64");
#endif

    ctx->pc = 0x202d64u;

    // 0x202d64: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x202d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x202d68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x202d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202d6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202d70: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x202D70u;
    {
        const bool branch_taken_0x202d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D70u;
        // 0x202d74: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d70) {
            ctx->pc = 0x202DFCu;
            return;
        }
    }
    ctx->pc = 0x202D78u;
}
