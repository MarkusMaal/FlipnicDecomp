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

// Function: entry_0019108c
// Address: 0x19108c - 0x1910dc
void entry_0019108c_0x19108c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019108c_0x19108c");
#endif

    ctx->pc = 0x19108cu;

    // 0x19108c: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x19108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x191090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191094: 0x10650180  beq         $v1, $a1, . + 4 + (0x180 << 2)
    ctx->pc = 0x191094u;
    {
        const bool branch_taken_0x191094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x191094) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19109Cu;
    // 0x19109c: 0x8d062c10  lw          $a2, 0x2C10($t0)
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11280)));
    // 0x1910a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1910a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1910a8: 0x8d032c1c  lw          $v1, 0x2C1C($t0)
    ctx->pc = 0x1910a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11292)));
    // 0x1910ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1910b0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1910b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1910b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1910bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1910c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1910c4: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1910c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x1910c8: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x1910c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x1910cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1910CCu;
    {
        const bool branch_taken_0x1910cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1910cc) {
            ctx->pc = 0x1910DCu;
            return;
        }
    }
    ctx->pc = 0x1910D4u;
    // 0x1910d4: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x1910D4u;
    {
        const bool branch_taken_0x1910d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D4u;
        // 0x1910d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910d4) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x1910DCu;
}
