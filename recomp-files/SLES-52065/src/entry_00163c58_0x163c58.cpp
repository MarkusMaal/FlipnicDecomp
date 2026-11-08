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

// Function: entry_00163c58
// Address: 0x163c58 - 0x163c5c
void entry_00163c58_0x163c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163c58_0x163c58");
#endif

    ctx->pc = 0x163c58u;

    // 0x163c58: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x163c5cu;
}
