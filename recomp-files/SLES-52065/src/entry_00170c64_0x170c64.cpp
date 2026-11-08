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

// Function: entry_00170c64
// Address: 0x170c64 - 0x170c70
void entry_00170c64_0x170c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c64_0x170c64");
#endif

    ctx->pc = 0x170c64u;

    // 0x170c64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x170c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x170c68: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x170c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x170c6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x170c70u;
}
