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

// Function: entry_00148840
// Address: 0x148840 - 0x148880
void entry_00148840_0x148840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148840_0x148840");
#endif

    ctx->pc = 0x148840u;

    // 0x148840: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148848: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x148848u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x14884c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x14884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148850: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x148850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x148854: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x148854u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x148858: 0x8d900000  lw          $s0, 0x0($t4)
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14885c: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14885Cu;
    {
        const bool branch_taken_0x14885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x14885c) {
            ctx->pc = 0x1488D0u;
            return;
        }
    }
    ctx->pc = 0x148864u;
    // 0x148864: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148868: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14886c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14886cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148870: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148870u;
    {
        const bool branch_taken_0x148870 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x148874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148870u;
        // 0x148874: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148870) {
            ctx->pc = 0x148880u;
            return;
        }
    }
    ctx->pc = 0x148878u;
    // 0x148878: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x148878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x14887c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x14887cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    ctx->pc = 0x148880u;
}
