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

// Function: entry_0013a604
// Address: 0x13a604 - 0x13a608
void entry_0013a604_0x13a604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a604_0x13a604");
#endif

    ctx->pc = 0x13a604u;

    // 0x13a604: 0x24120022  addiu       $s2, $zero, 0x22
    ctx->pc = 0x13a604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x13a608u;
}
