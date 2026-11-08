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

// Function: entry_0019cb80
// Address: 0x19cb80 - 0x19cbb4
void entry_0019cb80_0x19cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb80_0x19cb80");
#endif

    ctx->pc = 0x19cb80u;

    // 0x19cb80: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19CB80u;
    {
        const bool branch_taken_0x19cb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cb80) {
            ctx->pc = 0x19CBB4u;
            return;
        }
    }
    ctx->pc = 0x19CB88u;
    // 0x19cb88: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cb8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb90: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19cb94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19cb98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19cb9c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19cba0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x19cba4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CBA4u;
    {
        const bool branch_taken_0x19cba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x19CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA4u;
        // 0x19cba8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cba4) {
            ctx->pc = 0x19CBB4u;
            return;
        }
    }
    ctx->pc = 0x19CBACu;
    // 0x19cbac: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
    // 0x19cbb0: 0xae440690  sw          $a0, 0x690($s2)
    ctx->pc = 0x19cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 4));
    ctx->pc = 0x19cbb4u;
}
