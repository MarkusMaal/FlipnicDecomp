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

// Function: entry_00111094
// Address: 0x111094 - 0x1110dc
void entry_00111094_0x111094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111094_0x111094");
#endif

    ctx->pc = 0x111094u;

    // 0x111094: 0x0  nop
    ctx->pc = 0x111094u;
    // NOP
    // 0x111098: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x111098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11109c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x11109cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1110a0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1110A0u;
    {
        const bool branch_taken_0x1110a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1110a0) {
            ctx->pc = 0x111060u;
            return;
        }
    }
    ctx->pc = 0x1110A8u;
    // 0x1110a8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1110a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1110ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1110acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1110b0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1110b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1110b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1110b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1110b8: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x1110b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1110bc: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1110c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1110c4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1110c8: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1110cc: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x1110d0: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1110d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1110d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1110D4u;
    {
        const bool branch_taken_0x1110d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D4u;
        // 0x1110d8: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d4) {
            ctx->pc = 0x11110Cu;
            return;
        }
    }
    ctx->pc = 0x1110DCu;
}
