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

// Function: entry_0013893c
// Address: 0x13893c - 0x138950
void entry_0013893c_0x13893c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013893c_0x13893c");
#endif

    ctx->pc = 0x13893cu;

    // 0x13893c: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x13893Cu;
    {
        const bool branch_taken_0x13893c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x13893c) {
            ctx->pc = 0x138950u;
            return;
        }
    }
    ctx->pc = 0x138944u;
    // 0x138944: 0x8f8284fc  lw          $v0, -0x7B04($gp)
    ctx->pc = 0x138944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935804)));
    // 0x138948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13894c: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x13894cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x138950u;
}
