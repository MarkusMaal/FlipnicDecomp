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

// Function: entry_00121320
// Address: 0x121320 - 0x121344
void entry_00121320_0x121320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121320_0x121320");
#endif

    ctx->pc = 0x121320u;

    // 0x121320: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121324: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12132c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121330: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x121330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x121334: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121334u;
    {
        const bool branch_taken_0x121334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x121338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121334u;
        // 0x121338: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121334) {
            ctx->pc = 0x121344u;
            return;
        }
    }
    ctx->pc = 0x12133Cu;
    // 0x12133c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x121340: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x121340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x121344u;
}
