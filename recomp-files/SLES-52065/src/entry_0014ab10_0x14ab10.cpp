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

// Function: entry_0014ab10
// Address: 0x14ab10 - 0x14ab20
void entry_0014ab10_0x14ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab10_0x14ab10");
#endif

    ctx->pc = 0x14ab10u;

    // 0x14ab10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ab14: 0x8fa3074c  lw          $v1, 0x74C($sp)
    ctx->pc = 0x14ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1868)));
    // 0x14ab18: 0x1483ffe0  bne         $a0, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14AB18u;
    {
        const bool branch_taken_0x14ab18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ab18) {
            ctx->pc = 0x14AA9Cu;
            return;
        }
    }
    ctx->pc = 0x14AB20u;
}
