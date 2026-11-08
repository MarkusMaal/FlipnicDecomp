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

// Function: entry_001cff04
// Address: 0x1cff04 - 0x1cff14
void entry_001cff04_0x1cff04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff04_0x1cff04");
#endif

    ctx->pc = 0x1cff04u;

    // 0x1cff04: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1cff08: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1cff08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cff0c: 0x221100a  movz        $v0, $s1, $at
    ctx->pc = 0x1cff0cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x1cff10: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x1cff10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1cff14u;
}
