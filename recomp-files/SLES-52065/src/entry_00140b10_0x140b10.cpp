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

// Function: entry_00140b10
// Address: 0x140b10 - 0x140b20
void entry_00140b10_0x140b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b10_0x140b10");
#endif

    ctx->pc = 0x140b10u;

    // 0x140b10: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x140b14: 0x8faa0074  lw          $t2, 0x74($sp)
    ctx->pc = 0x140b14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x140b18: 0x156affda  bne         $t3, $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x140B18u;
    {
        const bool branch_taken_0x140b18 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x140b18) {
            ctx->pc = 0x140A84u;
            return;
        }
    }
    ctx->pc = 0x140B20u;
}
