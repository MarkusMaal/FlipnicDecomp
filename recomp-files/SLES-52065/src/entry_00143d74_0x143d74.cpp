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

// Function: entry_00143d74
// Address: 0x143d74 - 0x143dac
void entry_00143d74_0x143d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143d74_0x143d74");
#endif

    ctx->pc = 0x143d74u;

    // 0x143d74: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143d78: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x143d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143d7c: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x143d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x143d80: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x143d80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x143d84: 0x14200095  bnez        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x143D84u;
    {
        const bool branch_taken_0x143d84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143d84) {
            ctx->pc = 0x143FDCu;
            return;
        }
    }
    ctx->pc = 0x143D8Cu;
    // 0x143d8c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x143d90: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x143d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x143d94: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x143d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143d98: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x143d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x143d9c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143D9Cu;
    {
        const bool branch_taken_0x143d9c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x143DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D9Cu;
        // 0x143da0: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d9c) {
            ctx->pc = 0x143DACu;
            return;
        }
    }
    ctx->pc = 0x143DA4u;
    // 0x143da4: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x143da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x143da8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x143da8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x143dacu;
}
