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

// Function: entry_001f19dc
// Address: 0x1f19dc - 0x1f19e8
void entry_001f19dc_0x1f19dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f19dc_0x1f19dc");
#endif

    ctx->pc = 0x1f19dcu;

    // 0x1f19dc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f19dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f19e0: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f19e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f19e4: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f19e8u;
}
