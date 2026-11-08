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

// Function: entry_00155208
// Address: 0x155208 - 0x155224
void entry_00155208_0x155208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155208_0x155208");
#endif

    ctx->pc = 0x155208u;

    // 0x155208: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x15520c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x155210: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155214: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155218: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x15521c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x15521cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x155220: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->pc = 0x155224u;
}
