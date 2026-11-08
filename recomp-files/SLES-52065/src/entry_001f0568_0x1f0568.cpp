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

// Function: entry_001f0568
// Address: 0x1f0568 - 0x1f0578
void entry_001f0568_0x1f0568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0568_0x1f0568");
#endif

    ctx->pc = 0x1f0568u;

    // 0x1f0568: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1f056c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0570: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0570u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0574: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f0574u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f0578u;
}
