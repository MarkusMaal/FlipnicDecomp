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

// Function: entry_001170fc
// Address: 0x1170fc - 0x117100
void entry_001170fc_0x1170fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001170fc_0x1170fc");
#endif

    ctx->pc = 0x1170fcu;

    // 0x1170fc: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    ctx->pc = 0x117100u;
}
