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

// Function: entry_0012f584
// Address: 0x12f584 - 0x12f590
void entry_0012f584_0x12f584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f584_0x12f584");
#endif

    ctx->pc = 0x12f584u;

    // 0x12f584: 0x0  nop
    ctx->pc = 0x12f584u;
    // NOP
    // 0x12f588: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x12f588u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f58c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12f590u;
}
