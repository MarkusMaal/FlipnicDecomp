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

// Function: entry_001f0cbc
// Address: 0x1f0cbc - 0x1f0cc0
void entry_001f0cbc_0x1f0cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0cbc_0x1f0cbc");
#endif

    ctx->pc = 0x1f0cbcu;

    // 0x1f0cbc: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f0cbcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    ctx->pc = 0x1f0cc0u;
}
