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

// Function: entry_00188e94
// Address: 0x188e94 - 0x188e9c
void entry_00188e94_0x188e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e94_0x188e94");
#endif

    ctx->pc = 0x188e94u;

    // 0x188e94: 0x0  nop
    ctx->pc = 0x188e94u;
    // NOP
    // 0x188e98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x188e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x188e9cu;
}
