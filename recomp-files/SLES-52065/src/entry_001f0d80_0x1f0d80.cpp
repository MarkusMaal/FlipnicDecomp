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

// Function: entry_001f0d80
// Address: 0x1f0d80 - 0x1f0d90
void entry_001f0d80_0x1f0d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d80_0x1f0d80");
#endif

    ctx->pc = 0x1f0d80u;

    // 0x1f0d80: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0d84: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0d84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0d88: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f0d8c: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x1f0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
    ctx->pc = 0x1f0d90u;
}
