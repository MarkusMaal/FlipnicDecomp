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

// Function: entry_00121954
// Address: 0x121954 - 0x12195c
void entry_00121954_0x121954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121954_0x121954");
#endif

    ctx->pc = 0x121954u;

    // 0x121954: 0x0  nop
    ctx->pc = 0x121954u;
    // NOP
    // 0x121958: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x121958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x12195cu;
}
