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

// Function: caseD_9
// Address: 0x1728a4 - 0x1728ac
void caseD_9_0x1728a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1728a4");
#endif

    ctx->pc = 0x1728a4u;

    // 0x1728a4: 0x26032b70  addiu       $v1, $s0, 0x2B70
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    // 0x1728a8: 0xae034020  sw          $v1, 0x4020($s0)
    ctx->pc = 0x1728a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
    ctx->pc = 0x1728acu;
}
