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

// Function: entry_0020522c
// Address: 0x20522c - 0x205244
void entry_0020522c_0x20522c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020522c_0x20522c");
#endif

    ctx->pc = 0x20522cu;

    // 0x20522c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x205230: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x205234: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x205234u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x205238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20523c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x20523cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x205240: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x205244u;
}
