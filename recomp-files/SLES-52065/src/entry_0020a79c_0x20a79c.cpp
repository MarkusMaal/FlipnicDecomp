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

// Function: entry_0020a79c
// Address: 0x20a79c - 0x20a7a0
void entry_0020a79c_0x20a79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a79c_0x20a79c");
#endif

    ctx->pc = 0x20a79cu;

    // 0x20a79c: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x20a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
    ctx->pc = 0x20a7a0u;
}
