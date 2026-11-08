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

// Function: entry_0018a374
// Address: 0x18a374 - 0x18a37c
void entry_0018a374_0x18a374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a374_0x18a374");
#endif

    ctx->pc = 0x18a374u;

    // 0x18a374: 0x0  nop
    ctx->pc = 0x18a374u;
    // NOP
    // 0x18a378: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x18a378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
    ctx->pc = 0x18a37cu;
}
