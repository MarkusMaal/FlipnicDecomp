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

// Function: entry_001aee34
// Address: 0x1aee34 - 0x1aee38
void entry_001aee34_0x1aee34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aee34_0x1aee34");
#endif

    ctx->pc = 0x1aee34u;

    // 0x1aee34: 0xa28306ba  sb          $v1, 0x6BA($s4)
    ctx->pc = 0x1aee34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1722), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1aee38u;
}
