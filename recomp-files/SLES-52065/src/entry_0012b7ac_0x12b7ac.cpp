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

// Function: entry_0012b7ac
// Address: 0x12b7ac - 0x12b7e0
void entry_0012b7ac_0x12b7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b7ac_0x12b7ac");
#endif

    ctx->pc = 0x12b7acu;

    // 0x12b7ac: 0x0  nop
    ctx->pc = 0x12b7acu;
    // NOP
    // 0x12b7b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b7b4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x12b7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b7b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12B7B8u;
    {
        const bool branch_taken_0x12b7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B8u;
        // 0x12b7bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7b8) {
            ctx->pc = 0x12B790u;
            return;
        }
    }
    ctx->pc = 0x12B7C0u;
    // 0x12b7c0: 0x8e0d002c  lw          $t5, 0x2C($s0)
    ctx->pc = 0x12b7c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12b7c4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12b7c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12b7c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12b7d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b7d4: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x12b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x12b7d8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12B7D8u;
    {
        const bool branch_taken_0x12b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D8u;
        // 0x12b7dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d8) {
            ctx->pc = 0x12B854u;
            return;
        }
    }
    ctx->pc = 0x12B7E0u;
}
