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

// Function: entry_00138b40
// Address: 0x138b40 - 0x138b54
void entry_00138b40_0x138b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b40_0x138b40");
#endif

    ctx->pc = 0x138b40u;

    // 0x138b40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B40u;
    {
        const bool branch_taken_0x138b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b40) {
            ctx->pc = 0x138B54u;
            return;
        }
    }
    ctx->pc = 0x138B48u;
    // 0x138b48: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138b50: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x138b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    ctx->pc = 0x138b54u;
}
