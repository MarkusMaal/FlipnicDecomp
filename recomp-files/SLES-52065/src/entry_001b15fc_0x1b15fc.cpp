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

// Function: entry_001b15fc
// Address: 0x1b15fc - 0x1b1604
void entry_001b15fc_0x1b15fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15fc_0x1b15fc");
#endif

    ctx->pc = 0x1b15fcu;

    // 0x1b15fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b15fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1600: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b1600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1b1604u;
}
