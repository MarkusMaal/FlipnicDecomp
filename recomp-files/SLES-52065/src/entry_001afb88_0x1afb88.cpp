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

// Function: entry_001afb88
// Address: 0x1afb88 - 0x1afbec
void entry_001afb88_0x1afb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb88_0x1afb88");
#endif

    ctx->pc = 0x1afb88u;

    // 0x1afb88: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1afb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1afb8c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1afb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1afb90: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1afb94: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1afb98: 0x28e20030  slti        $v0, $a3, 0x30
    ctx->pc = 0x1afb98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1afb9c: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1AFB9Cu;
    {
        const bool branch_taken_0x1afb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB9Cu;
        // 0x1afba0: 0x28e1003a  slti        $at, $a3, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb9c) {
            ctx->pc = 0x1AFD44u;
            return;
        }
    }
    ctx->pc = 0x1AFBA4u;
    // 0x1afba4: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x1AFBA4u;
    {
        const bool branch_taken_0x1afba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afba4) {
            ctx->pc = 0x1AFD44u;
            return;
        }
    }
    ctx->pc = 0x1AFBACu;
    // 0x1afbac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1afbb0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1afbb4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afbb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afbbc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AFBBCu;
    {
        const bool branch_taken_0x1afbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBBCu;
        // 0x1afbc0: 0x8c55ff4c  lw          $s5, -0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbbc) {
            ctx->pc = 0x1AFC10u;
            return;
        }
    }
    ctx->pc = 0x1AFBC4u;
    // 0x1afbc4: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1afbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1afbc8: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afbc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afbcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afbd0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afbd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFBD8u;
    {
        const bool branch_taken_0x1afbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBD8u;
        // 0x1afbdc: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbd8) {
            ctx->pc = 0x1AFBECu;
            return;
        }
    }
    ctx->pc = 0x1AFBE0u;
    // 0x1afbe0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afbe4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afbe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1afbecu;
}
