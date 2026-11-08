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

// Function: entry_0015f74c
// Address: 0x15f74c - 0x15f790
void entry_0015f74c_0x15f74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f74c_0x15f74c");
#endif

    ctx->pc = 0x15f74cu;

    // 0x15f74c: 0x0  nop
    ctx->pc = 0x15f74cu;
    // NOP
    // 0x15f750: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15f754: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x15F754u;
    {
        const bool branch_taken_0x15f754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f754) {
            ctx->pc = 0x15F668u;
            return;
        }
    }
    ctx->pc = 0x15F75Cu;
    // 0x15f75c: 0x8e432c1c  lw          $v1, 0x2C1C($s2)
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
    // 0x15f760: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15f764: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x15f768: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f76c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f770: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15f774: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x15f774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15f778: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15f77c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f780: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x15f780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15f784: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f788: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x15F788u;
    {
        const bool branch_taken_0x15f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F788u;
        // 0x15f78c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f788) {
            ctx->pc = 0x15F95Cu;
            return;
        }
    }
    ctx->pc = 0x15F790u;
}
