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

// Function: entry_00143160
// Address: 0x143160 - 0x14316c
void entry_00143160_0x143160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143160_0x143160");
#endif

    ctx->pc = 0x143160u;

    // 0x143160: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x143164: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x143164u;
    {
        const bool branch_taken_0x143164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x143164) {
            ctx->pc = 0x143140u;
            return;
        }
    }
    ctx->pc = 0x14316Cu;
}
