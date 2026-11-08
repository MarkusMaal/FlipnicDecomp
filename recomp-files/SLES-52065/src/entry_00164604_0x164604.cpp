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

// Function: entry_00164604
// Address: 0x164604 - 0x164630
void entry_00164604_0x164604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164604_0x164604");
#endif

    ctx->pc = 0x164604u;

    // 0x164604: 0x14910043  bne         $a0, $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x164604u;
    {
        const bool branch_taken_0x164604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x164604) {
            ctx->pc = 0x164714u;
            return;
        }
    }
    ctx->pc = 0x16460Cu;
    // 0x16460c: 0x8e4301d4  lw          $v1, 0x1D4($s2)
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x164610: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x164610u;
    {
        const bool branch_taken_0x164610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164610u;
        // 0x164614: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164610) {
            ctx->pc = 0x164714u;
            return;
        }
    }
    ctx->pc = 0x164618u;
    // 0x164618: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164618u;
    {
        const bool branch_taken_0x164618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164618) {
            ctx->pc = 0x164644u;
            return;
        }
    }
    ctx->pc = 0x164620u;
    // 0x164620: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164620u;
    {
        const bool branch_taken_0x164620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x164620) {
            ctx->pc = 0x164630u;
            return;
        }
    }
    ctx->pc = 0x164628u;
    // 0x164628: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x164628u;
    {
        const bool branch_taken_0x164628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164628u;
        // 0x16462c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164628) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x164630u;
}
