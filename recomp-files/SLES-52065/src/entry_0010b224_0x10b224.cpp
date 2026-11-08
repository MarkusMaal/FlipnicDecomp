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

// Function: entry_0010b224
// Address: 0x10b224 - 0x10b234
void entry_0010b224_0x10b224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b224_0x10b224");
#endif

    ctx->pc = 0x10b224u;

    // 0x10b224: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B224u;
    {
        const bool branch_taken_0x10b224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b224) {
            ctx->pc = 0x10B234u;
            return;
        }
    }
    ctx->pc = 0x10B22Cu;
    // 0x10b22c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b230: 0xac832328  sw          $v1, 0x2328($a0)
    ctx->pc = 0x10b230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9000), GPR_U32(ctx, 3));
    ctx->pc = 0x10b234u;
}
