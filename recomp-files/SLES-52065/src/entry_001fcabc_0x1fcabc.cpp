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

// Function: entry_001fcabc
// Address: 0x1fcabc - 0x1fcac0
void entry_001fcabc_0x1fcabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcabc_0x1fcabc");
#endif

    ctx->pc = 0x1fcabcu;

    // 0x1fcabc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x1fcac0u;
}
