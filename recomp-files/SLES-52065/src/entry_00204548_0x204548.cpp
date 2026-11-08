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

// Function: entry_00204548
// Address: 0x204548 - 0x204578
void entry_00204548_0x204548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204548_0x204548");
#endif

    ctx->pc = 0x204548u;

    // 0x204548: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x204548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20454c: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20454Cu;
    {
        const bool branch_taken_0x20454c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x204550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20454Cu;
        // 0x204550: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20454c) {
            ctx->pc = 0x204624u;
            return;
        }
    }
    ctx->pc = 0x204554u;
    // 0x204554: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x204554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x204558: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x204558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x20455c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x20455cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x204560: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x204560u;
    {
        const bool branch_taken_0x204560 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204560u;
        // 0x204564: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204560) {
            ctx->pc = 0x204624u;
            return;
        }
    }
    ctx->pc = 0x204568u;
    // 0x204568: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204568u;
    {
        const bool branch_taken_0x204568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204568u;
        // 0x20456c: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204568) {
            ctx->pc = 0x2045D0u;
            return;
        }
    }
    ctx->pc = 0x204570u;
    // 0x204570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204570u;
    {
        const bool branch_taken_0x204570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204570u;
        // 0x204574: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204570) {
            ctx->pc = 0x20457Cu;
            return;
        }
    }
    ctx->pc = 0x204578u;
}
