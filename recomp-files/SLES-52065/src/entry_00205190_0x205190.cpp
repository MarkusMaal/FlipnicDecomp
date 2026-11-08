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

// Function: entry_00205190
// Address: 0x205190 - 0x20519c
void entry_00205190_0x205190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205190_0x205190");
#endif

    ctx->pc = 0x205190u;

    // 0x205190: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x205190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x205194: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x205194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x205198: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x205198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20519cu;
}
