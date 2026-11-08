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

// Function: entry_00143654
// Address: 0x143654 - 0x14368c
void entry_00143654_0x143654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143654_0x143654");
#endif

    ctx->pc = 0x143654u;

    // 0x143654: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143658: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x143658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14365c: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x143660: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x143660u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x143664: 0x14200079  bnez        $at, . + 4 + (0x79 << 2)
    ctx->pc = 0x143664u;
    {
        const bool branch_taken_0x143664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143664) {
            ctx->pc = 0x14384Cu;
            return;
        }
    }
    ctx->pc = 0x14366Cu;
    // 0x14366c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x143670: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x143670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x143674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143678: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14367c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14367Cu;
    {
        const bool branch_taken_0x14367c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x143680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14367Cu;
        // 0x143680: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14367c) {
            ctx->pc = 0x14368Cu;
            return;
        }
    }
    ctx->pc = 0x143684u;
    // 0x143684: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x143688: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x143688u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
    ctx->pc = 0x14368cu;
}
