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

// Function: entry_001fad50
// Address: 0x1fad50 - 0x1fad54
void entry_001fad50_0x1fad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad50_0x1fad50");
#endif

    ctx->pc = 0x1fad50u;

    // 0x1fad50: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x1fad50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->pc = 0x1fad54u;
}
