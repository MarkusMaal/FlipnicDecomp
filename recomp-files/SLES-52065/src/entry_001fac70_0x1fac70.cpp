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

// Function: entry_001fac70
// Address: 0x1fac70 - 0x1fac74
void entry_001fac70_0x1fac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fac70_0x1fac70");
#endif

    ctx->pc = 0x1fac70u;

    // 0x1fac70: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x1fac70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    ctx->pc = 0x1fac74u;
}
