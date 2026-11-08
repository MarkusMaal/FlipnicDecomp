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

// Function: entry_00198bdc
// Address: 0x198bdc - 0x198be8
void entry_00198bdc_0x198bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198bdc_0x198bdc");
#endif

    ctx->pc = 0x198bdcu;

    // 0x198bdc: 0x0  nop
    ctx->pc = 0x198bdcu;
    // NOP
    // 0x198be0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198be4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x198be8u;
}
