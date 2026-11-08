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

// Function: entry_0019d388
// Address: 0x19d388 - 0x19d390
void entry_0019d388_0x19d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d388_0x19d388");
#endif

    ctx->pc = 0x19d388u;

    // 0x19d388: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x19d38c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x19d390u;
}
