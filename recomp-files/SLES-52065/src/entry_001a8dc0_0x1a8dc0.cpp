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

// Function: entry_001a8dc0
// Address: 0x1a8dc0 - 0x1a8dd0
void entry_001a8dc0_0x1a8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8dc0_0x1a8dc0");
#endif

    ctx->pc = 0x1a8dc0u;

    // 0x1a8dc0: 0x8e4206d4  lw          $v0, 0x6D4($s2)
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1748)));
    // 0x1a8dc4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8dc8: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1A8DC8u;
    {
        const bool branch_taken_0x1a8dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dc8) {
            ctx->pc = 0x1A8D1Cu;
            return;
        }
    }
    ctx->pc = 0x1A8DD0u;
}
