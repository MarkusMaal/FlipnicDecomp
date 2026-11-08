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

// Function: entry_00187e20
// Address: 0x187e20 - 0x187e30
void entry_00187e20_0x187e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e20_0x187e20");
#endif

    ctx->pc = 0x187e20u;

    // 0x187e20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x187e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x187e24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x187E24u;
    {
        const bool branch_taken_0x187e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e24) {
            ctx->pc = 0x187E30u;
            return;
        }
    }
    ctx->pc = 0x187E2Cu;
    // 0x187e2c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x187e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x187e30u;
}
