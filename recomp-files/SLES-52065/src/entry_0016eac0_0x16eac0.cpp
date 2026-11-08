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

// Function: entry_0016eac0
// Address: 0x16eac0 - 0x16eac8
void entry_0016eac0_0x16eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eac0_0x16eac0");
#endif

    ctx->pc = 0x16eac0u;

    // 0x16eac0: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x16eac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x16eac4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16eac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x16eac8u;
}
