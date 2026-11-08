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

// Function: entry_00112b60
// Address: 0x112b60 - 0x112b68
void entry_00112b60_0x112b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b60_0x112b60");
#endif

    ctx->pc = 0x112b60u;

    // 0x112b60: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x112b64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x112b68u;
}
