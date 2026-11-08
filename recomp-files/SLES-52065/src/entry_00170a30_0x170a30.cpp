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

// Function: entry_00170a30
// Address: 0x170a30 - 0x170a34
void entry_00170a30_0x170a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a30_0x170a30");
#endif

    ctx->pc = 0x170a30u;

    // 0x170a30: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x170a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    ctx->pc = 0x170a34u;
}
