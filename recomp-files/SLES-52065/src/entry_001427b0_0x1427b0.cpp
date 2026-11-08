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

// Function: entry_001427b0
// Address: 0x1427b0 - 0x1427e4
void entry_001427b0_0x1427b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001427b0_0x1427b0");
#endif

    ctx->pc = 0x1427b0u;

    // 0x1427b0: 0x10c7001c  beq         $a2, $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1427B0u;
    {
        const bool branch_taken_0x1427b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1427b0) {
            ctx->pc = 0x142824u;
            return;
        }
    }
    ctx->pc = 0x1427B8u;
    // 0x1427b8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x1427b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1427bc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1427BCu;
    {
        const bool branch_taken_0x1427bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427bc) {
            ctx->pc = 0x142824u;
            return;
        }
    }
    ctx->pc = 0x1427C4u;
    // 0x1427c4: 0x93c20028  lbu         $v0, 0x28($fp)
    ctx->pc = 0x1427c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1427c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1427cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1427ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1427d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1427d4: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1427D4u;
    {
        const bool branch_taken_0x1427d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1427D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427D4u;
        // 0x1427d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427d4) {
            ctx->pc = 0x1427E4u;
            return;
        }
    }
    ctx->pc = 0x1427DCu;
    // 0x1427dc: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x1427DCu;
    {
        const bool branch_taken_0x1427dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427DCu;
        // 0x1427e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427dc) {
            ctx->pc = 0x142F4Cu;
            return;
        }
    }
    ctx->pc = 0x1427E4u;
}
