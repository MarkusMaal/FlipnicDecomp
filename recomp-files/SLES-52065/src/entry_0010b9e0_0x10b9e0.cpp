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

// Function: entry_0010b9e0
// Address: 0x10b9e0 - 0x10ba38
void entry_0010b9e0_0x10b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b9e0_0x10b9e0");
#endif

    ctx->pc = 0x10b9e0u;

    // 0x10b9e0: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10b9e4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x10b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x10b9e8: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x10b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10b9ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10b9f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b9f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x10b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x10b9f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10b9fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x10b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10ba00: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x10ba04: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x10ba04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x10ba08: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x10BA08u;
    {
        const bool branch_taken_0x10ba08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ba08) {
            ctx->pc = 0x10BAB8u;
            return;
        }
    }
    ctx->pc = 0x10BA10u;
    // 0x10ba10: 0x84a401ec  lh          $a0, 0x1EC($a1)
    ctx->pc = 0x10ba10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 492)));
    // 0x10ba14: 0x8e032300  lw          $v1, 0x2300($s0)
    ctx->pc = 0x10ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8960)));
    // 0x10ba18: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BA18u;
    {
        const bool branch_taken_0x10ba18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10ba18) {
            ctx->pc = 0x10BA38u;
            return;
        }
    }
    ctx->pc = 0x10BA20u;
    // 0x10ba20: 0x8e032304  lw          $v1, 0x2304($s0)
    ctx->pc = 0x10ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8964)));
    // 0x10ba24: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BA24u;
    {
        const bool branch_taken_0x10ba24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10ba24) {
            ctx->pc = 0x10BA38u;
            return;
        }
    }
    ctx->pc = 0x10BA2Cu;
    // 0x10ba2c: 0x8e032308  lw          $v1, 0x2308($s0)
    ctx->pc = 0x10ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8968)));
    // 0x10ba30: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10BA30u;
    {
        const bool branch_taken_0x10ba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10ba30) {
            ctx->pc = 0x10BAB8u;
            return;
        }
    }
    ctx->pc = 0x10BA38u;
}
