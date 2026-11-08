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

// Function: entry_00198b18
// Address: 0x198b18 - 0x198b20
void entry_00198b18_0x198b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b18_0x198b18");
#endif

    ctx->pc = 0x198b18u;

    // 0x198b18: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198b1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x198b20u;
}
