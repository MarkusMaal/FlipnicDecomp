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

// Function: entry_0018ddfc
// Address: 0x18ddfc - 0x18de00
void entry_0018ddfc_0x18ddfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ddfc_0x18ddfc");
#endif

    ctx->pc = 0x18ddfcu;

    // 0x18ddfc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x18de00u;
}
