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

// Function: entry_00200094
// Address: 0x200094 - 0x20009c
void entry_00200094_0x200094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200094_0x200094");
#endif

    ctx->pc = 0x200094u;

    // 0x200094: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x200094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200098: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    ctx->pc = 0x20009cu;
}
