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

// Function: entry_001a9958
// Address: 0x1a9958 - 0x1a996c
void entry_001a9958_0x1a9958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9958_0x1a9958");
#endif

    ctx->pc = 0x1a9958u;

    // 0x1a9958: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x1a9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1a995c: 0xac6206b8  sw          $v0, 0x6B8($v1)
    ctx->pc = 0x1a995cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1720), GPR_U32(ctx, 2));
    // 0x1a9960: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1a9960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1a9964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9968: 0xa2a206cd  sb          $v0, 0x6CD($s5)
    ctx->pc = 0x1a9968u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1741), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a996cu;
}
