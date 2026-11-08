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

// Function: entry_001ef8d4
// Address: 0x1ef8d4 - 0x1ef8e4
void entry_001ef8d4_0x1ef8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef8d4_0x1ef8d4");
#endif

    ctx->pc = 0x1ef8d4u;

    // 0x1ef8d4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ef8d8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef8dc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1ef8dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1ef8e0: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1ef8e4u;
}
