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

// Function: entry_00190700
// Address: 0x190700 - 0x190724
void entry_00190700_0x190700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190700_0x190700");
#endif

    ctx->pc = 0x190700u;

    // 0x190700: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190704: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190708: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19070c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19070cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190710: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x190714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190718: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19071c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x19071Cu;
    {
        const bool branch_taken_0x19071c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19071Cu;
        // 0x190720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19071c) {
            ctx->pc = 0x1907A0u;
            return;
        }
    }
    ctx->pc = 0x190724u;
}
