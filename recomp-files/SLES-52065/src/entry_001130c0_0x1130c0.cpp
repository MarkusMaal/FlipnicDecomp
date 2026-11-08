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

// Function: entry_001130c0
// Address: 0x1130c0 - 0x1130f4
void entry_001130c0_0x1130c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001130c0_0x1130c0");
#endif

    ctx->pc = 0x1130c0u;

    // 0x1130c0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1130c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1130c4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1130c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1130c8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1130C8u;
    {
        const bool branch_taken_0x1130c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1130c8) {
            ctx->pc = 0x113070u;
            return;
        }
    }
    ctx->pc = 0x1130D0u;
    // 0x1130d0: 0x1672014b  bne         $s3, $s2, . + 4 + (0x14B << 2)
    ctx->pc = 0x1130D0u;
    {
        const bool branch_taken_0x1130d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1130D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130D0u;
        // 0x1130d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130d0) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x1130D8u;
    // 0x1130d8: 0xa2230042  sb          $v1, 0x42($s1)
    ctx->pc = 0x1130d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x1130dc: 0x8e320038  lw          $s2, 0x38($s1)
    ctx->pc = 0x1130dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1130e0: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1130E0u;
    {
        const bool branch_taken_0x1130e0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130E0u;
        // 0x1130e4: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130e0) {
            ctx->pc = 0x1130F4u;
            return;
        }
    }
    ctx->pc = 0x1130E8u;
    // 0x1130e8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1130e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1130ec: 0x0  nop
    ctx->pc = 0x1130ecu;
    // NOP
    // 0x1130f0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1130f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    ctx->pc = 0x1130f4u;
}
