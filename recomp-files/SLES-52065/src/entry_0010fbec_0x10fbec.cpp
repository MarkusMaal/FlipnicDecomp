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

// Function: entry_0010fbec
// Address: 0x10fbec - 0x10fbf8
void entry_0010fbec_0x10fbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbec_0x10fbec");
#endif

    ctx->pc = 0x10fbecu;

    // 0x10fbec: 0x0  nop
    ctx->pc = 0x10fbecu;
    // NOP
    // 0x10fbf0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10fbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x10fbf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10fbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10fbf8u;
}
