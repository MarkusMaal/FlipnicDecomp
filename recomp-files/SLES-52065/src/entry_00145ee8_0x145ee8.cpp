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

// Function: entry_00145ee8
// Address: 0x145ee8 - 0x145ef4
void entry_00145ee8_0x145ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ee8_0x145ee8");
#endif

    ctx->pc = 0x145ee8u;

    // 0x145ee8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x145ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x145eec: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x145eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x145ef0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x145ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x145ef4u;
}
