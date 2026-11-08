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

// Function: entry_00187d78
// Address: 0x187d78 - 0x187d8c
void entry_00187d78_0x187d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d78_0x187d78");
#endif

    ctx->pc = 0x187d78u;

    // 0x187d78: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x187d78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x187d7c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x187d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x187d80: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x187d80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x187d84: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x187d88: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x187d8cu;
}
