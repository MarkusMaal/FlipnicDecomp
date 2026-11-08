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

// Function: entry_00113194
// Address: 0x113194 - 0x1131a0
void entry_00113194_0x113194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113194_0x113194");
#endif

    ctx->pc = 0x113194u;

    // 0x113194: 0x0  nop
    ctx->pc = 0x113194u;
    // NOP
    // 0x113198: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x11319c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11319cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1131a0u;
}
