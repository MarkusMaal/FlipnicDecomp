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

// Function: entry_0011f114
// Address: 0x11f114 - 0x11f128
void entry_0011f114_0x11f114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f114_0x11f114");
#endif

    ctx->pc = 0x11f114u;

    // 0x11f114: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x11f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x11f118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f11c: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x11f120: 0xae630094  sw          $v1, 0x94($s3)
    ctx->pc = 0x11f120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
    // 0x11f124: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x11f124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
    ctx->pc = 0x11f128u;
}
