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

// Function: entry_001c4fac
// Address: 0x1c4fac - 0x1c4fb0
void entry_001c4fac_0x1c4fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4fac_0x1c4fac");
#endif

    ctx->pc = 0x1c4facu;

    // 0x1c4fac: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1c4facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1c4fb0u;
}
