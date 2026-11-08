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

// Function: entry_0018bd88
// Address: 0x18bd88 - 0x18bda0
void entry_0018bd88_0x18bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bd88_0x18bd88");
#endif

    ctx->pc = 0x18bd88u;

    // 0x18bd88: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x18BD88u;
    {
        const bool branch_taken_0x18bd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd88) {
            ctx->pc = 0x18BE48u;
            return;
        }
    }
    ctx->pc = 0x18BD90u;
    // 0x18bd90: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x18bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x18bd94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BD94u;
    {
        const bool branch_taken_0x18bd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd94) {
            ctx->pc = 0x18BDA0u;
            return;
        }
    }
    ctx->pc = 0x18BD9Cu;
    // 0x18bd9c: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    ctx->pc = 0x18bda0u;
}
