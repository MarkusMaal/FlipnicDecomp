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

// Function: entry_0013536c
// Address: 0x13536c - 0x135380
void entry_0013536c_0x13536c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013536c_0x13536c");
#endif

    ctx->pc = 0x13536cu;

    // 0x13536c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x13536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x135370: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135370u;
    {
        const bool branch_taken_0x135370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x135370) {
            ctx->pc = 0x135380u;
            return;
        }
    }
    ctx->pc = 0x135378u;
    // 0x135378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x135378u;
    {
        const bool branch_taken_0x135378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135378) {
            ctx->pc = 0x135394u;
            return;
        }
    }
    ctx->pc = 0x135380u;
}
