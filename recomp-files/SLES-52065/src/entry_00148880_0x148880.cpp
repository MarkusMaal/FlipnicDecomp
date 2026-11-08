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

// Function: entry_00148880
// Address: 0x148880 - 0x1488b8
void entry_00148880_0x148880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148880_0x148880");
#endif

    ctx->pc = 0x148880u;

    // 0x148880: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148884: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148888: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x148888u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x14888c: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x14888cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148890: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x148894: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x148894u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    // 0x148898: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14889c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x14889cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1488a0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1488a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1488a4: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x1488a8: 0x219c821  addu        $t9, $s0, $t9
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x1488ac: 0x16390002  bne         $s1, $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x1488ACu;
    {
        const bool branch_taken_0x1488ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 25));
        if (branch_taken_0x1488ac) {
            ctx->pc = 0x1488B8u;
            return;
        }
    }
    ctx->pc = 0x1488B4u;
    // 0x1488b4: 0xadd00000  sw          $s0, 0x0($t6)
    ctx->pc = 0x1488b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1488b8u;
}
