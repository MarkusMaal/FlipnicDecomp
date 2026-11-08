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

// Function: entry_001b3de4
// Address: 0x1b3de4 - 0x1b3e00
void entry_001b3de4_0x1b3de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3de4_0x1b3de4");
#endif

    ctx->pc = 0x1b3de4u;

    // 0x1b3de4: 0x0  nop
    ctx->pc = 0x1b3de4u;
    // NOP
    // 0x1b3de8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1b3de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b3dec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B3DECu;
    {
        const bool branch_taken_0x1b3dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3dec) {
            ctx->pc = 0x1B3D98u;
            return;
        }
    }
    ctx->pc = 0x1B3DF4u;
    // 0x1b3df4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3df8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3DF8u;
    {
        const bool branch_taken_0x1b3df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3df8) {
            ctx->pc = 0x1B3E04u;
            return;
        }
    }
    ctx->pc = 0x1B3E00u;
}
