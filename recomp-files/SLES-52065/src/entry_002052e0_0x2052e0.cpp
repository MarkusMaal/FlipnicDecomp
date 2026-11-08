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

// Function: entry_002052e0
// Address: 0x2052e0 - 0x2052f8
void entry_002052e0_0x2052e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002052e0_0x2052e0");
#endif

    ctx->pc = 0x2052e0u;

    // 0x2052e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2052e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2052e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2052e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2052e8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2052ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2052f0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2052f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2052f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2052f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x2052f8u;
}
