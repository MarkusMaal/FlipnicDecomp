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

// Function: entry_001e93ac
// Address: 0x1e93ac - 0x1e93c4
void entry_001e93ac_0x1e93ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e93ac_0x1e93ac");
#endif

    ctx->pc = 0x1e93acu;

    // 0x1e93ac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e93acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e93b0: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E93B0u;
    {
        const bool branch_taken_0x1e93b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e93b0) {
            ctx->pc = 0x1E93CCu;
            return;
        }
    }
    ctx->pc = 0x1E93B8u;
    // 0x1e93b8: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E93B8u;
    {
        const bool branch_taken_0x1e93b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e93b8) {
            ctx->pc = 0x1E93C4u;
            return;
        }
    }
    ctx->pc = 0x1E93C0u;
    // 0x1e93c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1e93c4u;
}
