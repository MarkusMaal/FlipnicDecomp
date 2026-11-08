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

// Function: entry_001795d4
// Address: 0x1795d4 - 0x1795dc
void entry_001795d4_0x1795d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001795d4_0x1795d4");
#endif

    ctx->pc = 0x1795d4u;

    // 0x1795d4: 0x0  nop
    ctx->pc = 0x1795d4u;
    // NOP
    // 0x1795d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1795d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x1795dcu;
}
