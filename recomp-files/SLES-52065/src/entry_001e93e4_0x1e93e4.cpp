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

// Function: entry_001e93e4
// Address: 0x1e93e4 - 0x1e93f8
void entry_001e93e4_0x1e93e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e93e4_0x1e93e4");
#endif

    ctx->pc = 0x1e93e4u;

    // 0x1e93e4: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1e93e4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e93e8: 0x11060003  beq         $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93E8u;
    {
        const bool branch_taken_0x1e93e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e93e8) {
            ctx->pc = 0x1E93F8u;
            return;
        }
    }
    ctx->pc = 0x1E93F0u;
    // 0x1e93f0: 0x1505000c  bne         $t0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E93F0u;
    {
        const bool branch_taken_0x1e93f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e93f0) {
            ctx->pc = 0x1E9424u;
            return;
        }
    }
    ctx->pc = 0x1E93F8u;
}
