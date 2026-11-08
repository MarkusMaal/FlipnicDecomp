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

// Function: entry_00100448
// Address: 0x100448 - 0x10044c
void entry_00100448_0x100448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100448_0x100448");
#endif

    ctx->pc = 0x100448u;

    // 0x100448: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    ctx->pc = 0x10044cu;
}
