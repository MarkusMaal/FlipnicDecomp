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

// Function: entry_001be2c8
// Address: 0x1be2c8 - 0x1be2d4
void entry_001be2c8_0x1be2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be2c8_0x1be2c8");
#endif

    ctx->pc = 0x1be2c8u;

    // 0x1be2c8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1be2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x1be2cc: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1be2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x1be2d0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1be2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1be2d4u;
}
