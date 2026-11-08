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

// Function: entry_00140d54
// Address: 0x140d54 - 0x140da0
void entry_00140d54_0x140d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140d54_0x140d54");
#endif

    ctx->pc = 0x140d54u;

    // 0x140d54: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x140d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x140d58: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x140d5c: 0x71b021  addu        $s6, $v1, $s1
    ctx->pc = 0x140d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x140d60: 0xf6082b  sltu        $at, $a3, $s6
    ctx->pc = 0x140d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x140d64: 0x142001a4  bnez        $at, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x140D64u;
    {
        const bool branch_taken_0x140d64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d64) {
            ctx->pc = 0x1413F8u;
            return;
        }
    }
    ctx->pc = 0x140D6Cu;
    // 0x140d6c: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140d70: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x140d74: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x140d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x140d78: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x140d78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x140d7c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140D7Cu;
    {
        const bool branch_taken_0x140d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D7Cu;
        // 0x140d80: 0xc09821  addu        $s3, $a2, $zero (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d7c) {
            ctx->pc = 0x140DA0u;
            return;
        }
    }
    ctx->pc = 0x140D84u;
    // 0x140d84: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x140d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140d88: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x140d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x140d8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x140d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x140d90: 0xafb200a0  sw          $s2, 0xA0($sp)
    ctx->pc = 0x140d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
    // 0x140d94: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x140d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x140d98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x140D98u;
    {
        const bool branch_taken_0x140d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D98u;
        // 0x140d9c: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d98) {
            ctx->pc = 0x140DBCu;
            return;
        }
    }
    ctx->pc = 0x140DA0u;
}
