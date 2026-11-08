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

// Function: entry_00153538
// Address: 0x153538 - 0x15353c
void entry_00153538_0x153538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153538_0x153538");
#endif

    ctx->pc = 0x153538u;

    // 0x153538: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x15353cu;
}
