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

// Function: entry_001daeb8
// Address: 0x1daeb8 - 0x1daebc
void entry_001daeb8_0x1daeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daeb8_0x1daeb8");
#endif

    ctx->pc = 0x1daeb8u;

    // 0x1daeb8: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x1daeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x1daebcu;
}
