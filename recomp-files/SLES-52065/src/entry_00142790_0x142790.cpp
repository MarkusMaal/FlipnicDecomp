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

// Function: entry_00142790
// Address: 0x142790 - 0x1427b0
void entry_00142790_0x142790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142790_0x142790");
#endif

    ctx->pc = 0x142790u;

    // 0x142790: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x142790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x142794: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x142798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14279c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1427a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1427A0u;
    {
        const bool branch_taken_0x1427a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1427A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427A0u;
        // 0x1427a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427a0) {
            ctx->pc = 0x1427B0u;
            return;
        }
    }
    ctx->pc = 0x1427A8u;
    // 0x1427a8: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x1427A8u;
    {
        const bool branch_taken_0x1427a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427A8u;
        // 0x1427ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427a8) {
            ctx->pc = 0x142F4Cu;
            return;
        }
    }
    ctx->pc = 0x1427B0u;
}
