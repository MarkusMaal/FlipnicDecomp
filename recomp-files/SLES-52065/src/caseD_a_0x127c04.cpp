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

// Function: caseD_a
// Address: 0x127c04 - 0x127c14
void caseD_a_0x127c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x127c04");
#endif

    ctx->pc = 0x127c04u;

    // 0x127c04: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x127c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x127c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c0c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x127c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x127c10: 0xaf83843c  sw          $v1, -0x7BC4($gp)
    ctx->pc = 0x127c10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 3));
    ctx->pc = 0x127c14u;
}
