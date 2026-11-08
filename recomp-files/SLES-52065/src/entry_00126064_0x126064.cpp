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

// Function: entry_00126064
// Address: 0x126064 - 0x126070
void entry_00126064_0x126064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126064_0x126064");
#endif

    ctx->pc = 0x126064u;

    // 0x126064: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x126064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x126068: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x126068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x12606c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x126070u;
}
