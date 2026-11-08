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

// Function: entry_0012e6d4
// Address: 0x12e6d4 - 0x12e70c
void entry_0012e6d4_0x12e6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e6d4_0x12e6d4");
#endif

    ctx->pc = 0x12e6d4u;

    // 0x12e6d4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x12e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e6d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e6dc: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x12e6e0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x12e6e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12e6e4: 0x14200095  bnez        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x12E6E4u;
    {
        const bool branch_taken_0x12e6e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e6e4) {
            ctx->pc = 0x12E93Cu;
            return;
        }
    }
    ctx->pc = 0x12E6ECu;
    // 0x12e6ec: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12e6f0: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x12e6f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x12e6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e6f8: 0x2141823  subu        $v1, $s0, $s4
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x12e6fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E6FCu;
    {
        const bool branch_taken_0x12e6fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6FCu;
        // 0x12e700: 0x32943  sra         $a1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6fc) {
            ctx->pc = 0x12E70Cu;
            return;
        }
    }
    ctx->pc = 0x12E704u;
    // 0x12e704: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x12e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x12e708: 0x32943  sra         $a1, $v1, 5
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x12e70cu;
}
