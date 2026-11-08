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

// Function: entry_00114228
// Address: 0x114228 - 0x11423c
void entry_00114228_0x114228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114228_0x114228");
#endif

    ctx->pc = 0x114228u;

    // 0x114228: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x114228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11422c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x114230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114234: 0x8c432c10  lw          $v1, 0x2C10($v0)
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x114238: 0x0  nop
    ctx->pc = 0x114238u;
    // NOP
    ctx->pc = 0x11423cu;
}
