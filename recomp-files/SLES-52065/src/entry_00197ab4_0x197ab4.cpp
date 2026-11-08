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

// Function: entry_00197ab4
// Address: 0x197ab4 - 0x197ae4
void entry_00197ab4_0x197ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197ab4_0x197ab4");
#endif

    ctx->pc = 0x197ab4u;

    // 0x197ab4: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x197ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x197ab8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x197ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197abc: 0x8c440674  lw          $a0, 0x674($v0)
    ctx->pc = 0x197abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
    // 0x197ac0: 0x2445068c  addiu       $a1, $v0, 0x68C
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1676));
    // 0x197ac4: 0x8c42068c  lw          $v0, 0x68C($v0)
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
    // 0x197ac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x197ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x197acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197ad4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x197ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197ad8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x197AD8u;
    {
        const bool branch_taken_0x197ad8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD8u;
        // 0x197adc: 0x8c632cd8  lw          $v1, 0x2CD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ad8) {
            ctx->pc = 0x197AE4u;
            return;
        }
    }
    ctx->pc = 0x197AE0u;
    // 0x197ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x197ae4u;
}
