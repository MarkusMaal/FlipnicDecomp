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

// Function: entry_001d9f90
// Address: 0x1d9f90 - 0x1d9f98
void entry_001d9f90_0x1d9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f90_0x1d9f90");
#endif

    ctx->pc = 0x1d9f90u;

    // 0x1d9f90: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d9f94: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1d9f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x1d9f98u;
}
