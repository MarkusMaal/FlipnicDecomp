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

// Function: entry_001c62f4
// Address: 0x1c62f4 - 0x1c6324
void entry_001c62f4_0x1c62f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c62f4_0x1c62f4");
#endif

    ctx->pc = 0x1c62f4u;

    // 0x1c62f4: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c62f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c62fc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C62FCu;
    {
        const bool branch_taken_0x1c62fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c62fc) {
            ctx->pc = 0x1C6330u;
            return;
        }
    }
    ctx->pc = 0x1C6304u;
    // 0x1c6304: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1c6304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c6308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c630c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C630Cu;
    {
        const bool branch_taken_0x1c630c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c630c) {
            ctx->pc = 0x1C632Cu;
            return;
        }
    }
    ctx->pc = 0x1C6314u;
    // 0x1c6314: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6314u;
    {
        const bool branch_taken_0x1c6314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6314) {
            ctx->pc = 0x1C6324u;
            return;
        }
    }
    ctx->pc = 0x1C631Cu;
    // 0x1c631c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C631Cu;
    {
        const bool branch_taken_0x1c631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C631Cu;
        // 0x1c6320: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c631c) {
            ctx->pc = 0x1C6334u;
            return;
        }
    }
    ctx->pc = 0x1C6324u;
}
