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

// Function: entry_001da278
// Address: 0x1da278 - 0x1da280
void entry_001da278_0x1da278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da278_0x1da278");
#endif

    ctx->pc = 0x1da278u;

    // 0x1da278: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da27c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x1da280u;
}
