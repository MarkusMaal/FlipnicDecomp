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

// Function: entry_00140da0
// Address: 0x140da0 - 0x140dbc
void entry_00140da0_0x140da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140da0_0x140da0");
#endif

    ctx->pc = 0x140da0u;

    // 0x140da0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140da4: 0x1272823  subu        $a1, $t1, $a3
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x140da8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x140da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x140dac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x140dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x140db0: 0xafb200a0  sw          $s2, 0xA0($sp)
    ctx->pc = 0x140db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
    // 0x140db4: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x140db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x140db8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x140db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    ctx->pc = 0x140dbcu;
}
