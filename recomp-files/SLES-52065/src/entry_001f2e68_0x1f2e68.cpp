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

// Function: entry_001f2e68
// Address: 0x1f2e68 - 0x1f2e70
void entry_001f2e68_0x1f2e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2e68_0x1f2e68");
#endif

    ctx->pc = 0x1f2e68u;

    // 0x1f2e68: 0x8e82fb80  lw          $v0, -0x480($s4)
    ctx->pc = 0x1f2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966144)));
    // 0x1f2e6c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1f2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1f2e70u;
}
