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

// Function: entry_00148b10
// Address: 0x148b10 - 0x148b1c
void entry_00148b10_0x148b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b10_0x148b10");
#endif

    ctx->pc = 0x148b10u;

    // 0x148b10: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x148b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148b14: 0x1478ffcd  bne         $v1, $t8, . + 4 + (-0x33 << 2)
    ctx->pc = 0x148B14u;
    {
        const bool branch_taken_0x148b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        if (branch_taken_0x148b14) {
            ctx->pc = 0x148A4Cu;
            return;
        }
    }
    ctx->pc = 0x148B1Cu;
}
