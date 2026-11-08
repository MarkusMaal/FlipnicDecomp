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

// Function: entry_001b3b68
// Address: 0x1b3b68 - 0x1b3b74
void entry_001b3b68_0x1b3b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b68_0x1b3b68");
#endif

    ctx->pc = 0x1b3b68u;

    // 0x1b3b68: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b3b6c: 0xa0602784  sb          $zero, 0x2784($v1)
    ctx->pc = 0x1b3b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10116), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b3b74u;
}
