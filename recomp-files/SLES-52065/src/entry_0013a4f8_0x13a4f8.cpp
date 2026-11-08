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

// Function: entry_0013a4f8
// Address: 0x13a4f8 - 0x13a504
void entry_0013a4f8_0x13a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4f8_0x13a4f8");
#endif

    ctx->pc = 0x13a4f8u;

    // 0x13a4f8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a4fc: 0x1470ffd8  bne         $v1, $s0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13A4FCu;
    {
        const bool branch_taken_0x13a4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13a4fc) {
            ctx->pc = 0x13A460u;
            return;
        }
    }
    ctx->pc = 0x13A504u;
}
