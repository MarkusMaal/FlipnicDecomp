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

// Function: entry_0013fb0c
// Address: 0x13fb0c - 0x13fb20
void entry_0013fb0c_0x13fb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fb0c_0x13fb0c");
#endif

    ctx->pc = 0x13fb0cu;

    // 0x13fb0c: 0x0  nop
    ctx->pc = 0x13fb0cu;
    // NOP
    // 0x13fb10: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x13fb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fb14: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x13fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x13fb18: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13FB18u;
    {
        const bool branch_taken_0x13fb18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fb18) {
            ctx->pc = 0x13FAC4u;
            return;
        }
    }
    ctx->pc = 0x13FB20u;
}
