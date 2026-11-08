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

// Function: entry_001a7774
// Address: 0x1a7774 - 0x1a7778
void entry_001a7774_0x1a7774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7774_0x1a7774");
#endif

    ctx->pc = 0x1a7774u;

    // 0x1a7774: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    ctx->pc = 0x1a7778u;
}
