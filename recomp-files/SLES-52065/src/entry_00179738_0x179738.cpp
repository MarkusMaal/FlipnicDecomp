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

// Function: entry_00179738
// Address: 0x179738 - 0x179744
void entry_00179738_0x179738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179738_0x179738");
#endif

    ctx->pc = 0x179738u;

    // 0x179738: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x179738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x17973c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x179740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x179744u;
}
