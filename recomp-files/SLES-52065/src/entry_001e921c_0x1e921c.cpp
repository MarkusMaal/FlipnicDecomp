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

// Function: entry_001e921c
// Address: 0x1e921c - 0x1e9230
void entry_001e921c_0x1e921c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e921c_0x1e921c");
#endif

    ctx->pc = 0x1e921cu;

    // 0x1e921c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1e921cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9220: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1e9224: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9224u;
    {
        const bool branch_taken_0x1e9224 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9224) {
            ctx->pc = 0x1E9230u;
            return;
        }
    }
    ctx->pc = 0x1E922Cu;
    // 0x1e922c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1e9230u;
}
