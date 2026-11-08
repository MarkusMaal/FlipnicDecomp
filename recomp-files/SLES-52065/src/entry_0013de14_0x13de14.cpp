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

// Function: entry_0013de14
// Address: 0x13de14 - 0x13de20
void entry_0013de14_0x13de14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013de14_0x13de14");
#endif

    ctx->pc = 0x13de14u;

    // 0x13de14: 0x0  nop
    ctx->pc = 0x13de14u;
    // NOP
    // 0x13de18: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13de1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13de1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x13de20u;
}
