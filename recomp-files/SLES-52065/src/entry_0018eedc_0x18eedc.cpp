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

// Function: entry_0018eedc
// Address: 0x18eedc - 0x18eef0
void entry_0018eedc_0x18eedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eedc_0x18eedc");
#endif

    ctx->pc = 0x18eedcu;

    // 0x18eedc: 0x0  nop
    ctx->pc = 0x18eedcu;
    // NOP
    // 0x18eee0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x18eee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x18eee4: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x18eee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x18eee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18eee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18eeec: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x18eeecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->pc = 0x18eef0u;
}
