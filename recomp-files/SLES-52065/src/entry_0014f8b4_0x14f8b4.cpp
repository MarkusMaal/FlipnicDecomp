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

// Function: entry_0014f8b4
// Address: 0x14f8b4 - 0x14f8bc
void entry_0014f8b4_0x14f8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f8b4_0x14f8b4");
#endif

    ctx->pc = 0x14f8b4u;

    // 0x14f8b4: 0x0  nop
    ctx->pc = 0x14f8b4u;
    // NOP
    // 0x14f8b8: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x14f8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x14f8bcu;
}
