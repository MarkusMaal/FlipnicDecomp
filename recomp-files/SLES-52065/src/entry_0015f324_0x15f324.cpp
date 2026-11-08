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

// Function: entry_0015f324
// Address: 0x15f324 - 0x15f358
void entry_0015f324_0x15f324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f324_0x15f324");
#endif

    ctx->pc = 0x15f324u;

    // 0x15f324: 0x0  nop
    ctx->pc = 0x15f324u;
    // NOP
    // 0x15f328: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15f32c: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x15F32Cu;
    {
        const bool branch_taken_0x15f32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f32c) {
            ctx->pc = 0x15F180u;
            return;
        }
    }
    ctx->pc = 0x15F334u;
    // 0x15f334: 0x8e442c1c  lw          $a0, 0x2C1C($s2)
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
    // 0x15f338: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15f33c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15f340: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15f344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f348: 0x8c700030  lw          $s0, 0x30($v1)
    ctx->pc = 0x15f348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15f34c: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15f350: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15F350u;
    {
        const bool branch_taken_0x15f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F350u;
        // 0x15f354: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f350) {
            ctx->pc = 0x15F43Cu;
            return;
        }
    }
    ctx->pc = 0x15F358u;
}
