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

// Function: entry_0019c078
// Address: 0x19c078 - 0x19c07c
void entry_0019c078_0x19c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c078_0x19c078");
#endif

    ctx->pc = 0x19c078u;

    // 0x19c078: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    ctx->pc = 0x19c07cu;
}
