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

// Function: entry_001b4290
// Address: 0x1b4290 - 0x1b429c
void entry_001b4290_0x1b4290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4290_0x1b4290");
#endif

    ctx->pc = 0x1b4290u;

    // 0x1b4290: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1b4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b4294: 0xa0440010  sb          $a0, 0x10($v0)
    ctx->pc = 0x1b4294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b4298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1b429cu;
}
