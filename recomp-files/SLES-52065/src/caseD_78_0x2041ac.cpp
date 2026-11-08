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

// Function: caseD_78
// Address: 0x2041ac - 0x2041b4
void caseD_78_0x2041ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_78_0x2041ac");
#endif

    ctx->pc = 0x2041acu;

    // 0x2041ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2041b0: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    ctx->pc = 0x2041b4u;
}
