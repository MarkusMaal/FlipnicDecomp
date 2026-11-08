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

// Function: entry_00188120
// Address: 0x188120 - 0x18812c
void entry_00188120_0x188120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188120_0x188120");
#endif

    ctx->pc = 0x188120u;

    // 0x188120: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x188120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188124: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x188124u;
    {
        const bool branch_taken_0x188124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x188124) {
            ctx->pc = 0x1880E0u;
            return;
        }
    }
    ctx->pc = 0x18812Cu;
}
