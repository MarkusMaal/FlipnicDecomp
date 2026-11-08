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

// Function: entry_0015d744
// Address: 0x15d744 - 0x15d750
void entry_0015d744_0x15d744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d744_0x15d744");
#endif

    ctx->pc = 0x15d744u;

    // 0x15d744: 0x0  nop
    ctx->pc = 0x15d744u;
    // NOP
    // 0x15d748: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15d74c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x15d750u;
}
