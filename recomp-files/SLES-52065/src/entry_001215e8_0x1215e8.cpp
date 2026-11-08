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

// Function: entry_001215e8
// Address: 0x1215e8 - 0x1215f8
void entry_001215e8_0x1215e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215e8_0x1215e8");
#endif

    ctx->pc = 0x1215e8u;

    // 0x1215e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1215e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1215ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1215ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1215f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1215f4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1215f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1215f8u;
}
