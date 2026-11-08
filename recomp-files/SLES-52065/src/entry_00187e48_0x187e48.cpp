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

// Function: entry_00187e48
// Address: 0x187e48 - 0x187e58
void entry_00187e48_0x187e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e48_0x187e48");
#endif

    ctx->pc = 0x187e48u;

    // 0x187e48: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x187e48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x187e4c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x187e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x187e54: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x187e58u;
}
