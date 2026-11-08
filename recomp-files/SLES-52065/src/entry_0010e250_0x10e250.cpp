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

// Function: entry_0010e250
// Address: 0x10e250 - 0x10e258
void entry_0010e250_0x10e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e250_0x10e250");
#endif

    ctx->pc = 0x10e250u;

    // 0x10e250: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10e250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x10e254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10e258u;
}
