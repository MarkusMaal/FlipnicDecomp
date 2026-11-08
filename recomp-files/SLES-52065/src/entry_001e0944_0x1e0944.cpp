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

// Function: entry_001e0944
// Address: 0x1e0944 - 0x1e0948
void entry_001e0944_0x1e0944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0944_0x1e0944");
#endif

    ctx->pc = 0x1e0944u;

    // 0x1e0944: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1e0944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x1e0948u;
}
