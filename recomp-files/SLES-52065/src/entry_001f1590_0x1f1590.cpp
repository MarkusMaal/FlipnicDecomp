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

// Function: entry_001f1590
// Address: 0x1f1590 - 0x1f159c
void entry_001f1590_0x1f1590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1590_0x1f1590");
#endif

    ctx->pc = 0x1f1590u;

    // 0x1f1590: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1f1590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1594: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1598: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f159cu;
}
