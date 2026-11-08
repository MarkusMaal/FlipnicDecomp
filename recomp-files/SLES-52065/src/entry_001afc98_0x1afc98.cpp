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

// Function: entry_001afc98
// Address: 0x1afc98 - 0x1afc9c
void entry_001afc98_0x1afc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc98_0x1afc98");
#endif

    ctx->pc = 0x1afc98u;

    // 0x1afc98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1afc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1afc9cu;
}
