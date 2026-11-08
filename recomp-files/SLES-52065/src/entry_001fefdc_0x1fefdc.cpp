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

// Function: entry_001fefdc
// Address: 0x1fefdc - 0x1fefe0
void entry_001fefdc_0x1fefdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fefdc_0x1fefdc");
#endif

    ctx->pc = 0x1fefdcu;

    // 0x1fefdc: 0x240b007e  addiu       $t3, $zero, 0x7E
    ctx->pc = 0x1fefdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->pc = 0x1fefe0u;
}
