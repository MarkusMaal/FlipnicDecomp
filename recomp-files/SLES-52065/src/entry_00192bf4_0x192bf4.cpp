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

// Function: entry_00192bf4
// Address: 0x192bf4 - 0x192bfc
void entry_00192bf4_0x192bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192bf4_0x192bf4");
#endif

    ctx->pc = 0x192bf4u;

    // 0x192bf4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x192bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x192bf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x192bfcu;
}
