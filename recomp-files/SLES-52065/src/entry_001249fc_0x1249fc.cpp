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

// Function: entry_001249fc
// Address: 0x1249fc - 0x124a04
void entry_001249fc_0x1249fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001249fc_0x1249fc");
#endif

    ctx->pc = 0x1249fcu;

    // 0x1249fc: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1249fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x124a00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x124a04u;
}
