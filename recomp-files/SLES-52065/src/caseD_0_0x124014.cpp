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

// Function: caseD_0
// Address: 0x124014 - 0x124040
void caseD_0_0x124014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x124014");
#endif

    ctx->pc = 0x124014u;

    // 0x124014: 0x0  nop
    ctx->pc = 0x124014u;
    // NOP
    // 0x124018: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x124018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12401c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x12401Cu;
    {
        const bool branch_taken_0x12401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12401c) {
            ctx->pc = 0x1240ACu;
            return;
        }
    }
    ctx->pc = 0x124024u;
    // 0x124024: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x124024u;
    {
        const bool branch_taken_0x124024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x124028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124024u;
        // 0x124028: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124024) {
            ctx->pc = 0x1240ACu;
            return;
        }
    }
    ctx->pc = 0x12402Cu;
    // 0x12402c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12402cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124030: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124030u;
    {
        const bool branch_taken_0x124030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x124030) {
            ctx->pc = 0x124040u;
            return;
        }
    }
    ctx->pc = 0x124038u;
    // 0x124038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x124038u;
    {
        const bool branch_taken_0x124038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124038u;
        // 0x12403c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124038) {
            ctx->pc = 0x12405Cu;
            return;
        }
    }
    ctx->pc = 0x124040u;
}
