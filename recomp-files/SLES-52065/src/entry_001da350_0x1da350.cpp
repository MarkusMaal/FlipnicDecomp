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

// Function: entry_001da350
// Address: 0x1da350 - 0x1da354
void entry_001da350_0x1da350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da350_0x1da350");
#endif

    ctx->pc = 0x1da350u;

    // 0x1da350: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x1da354u;
}
