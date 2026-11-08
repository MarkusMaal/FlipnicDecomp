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

// Function: entry_00190a80
// Address: 0x190a80 - 0x190a98
void entry_00190a80_0x190a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190a80_0x190a80");
#endif

    ctx->pc = 0x190a80u;

    // 0x190a80: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x190A80u;
    {
        const bool branch_taken_0x190a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a80) {
            ctx->pc = 0x190B40u;
            return;
        }
    }
    ctx->pc = 0x190A88u;
    // 0x190a88: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x190a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x190a8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190A8Cu;
    {
        const bool branch_taken_0x190a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a8c) {
            ctx->pc = 0x190A98u;
            return;
        }
    }
    ctx->pc = 0x190A94u;
    // 0x190a94: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    ctx->pc = 0x190a98u;
}
