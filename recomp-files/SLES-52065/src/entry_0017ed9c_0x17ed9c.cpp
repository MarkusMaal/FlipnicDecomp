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

// Function: entry_0017ed9c
// Address: 0x17ed9c - 0x17edb4
void entry_0017ed9c_0x17ed9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed9c_0x17ed9c");
#endif

    ctx->pc = 0x17ed9cu;

    // 0x17ed9c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x17ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17eda0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17eda4: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDA4u;
    {
        const bool branch_taken_0x17eda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17eda4) {
            ctx->pc = 0x17EDB4u;
            return;
        }
    }
    ctx->pc = 0x17EDACu;
    // 0x17edac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17EDACu;
    {
        const bool branch_taken_0x17edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17edac) {
            ctx->pc = 0x17EDDCu;
            return;
        }
    }
    ctx->pc = 0x17EDB4u;
}
