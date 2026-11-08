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

// Function: entry_002043c0
// Address: 0x2043c0 - 0x2043e8
void entry_002043c0_0x2043c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002043c0_0x2043c0");
#endif

    ctx->pc = 0x2043c0u;

    // 0x2043c0: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x2043C0u;
    {
        const bool branch_taken_0x2043c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043C0u;
        // 0x2043c4: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043c0) {
            ctx->pc = 0x2044A0u;
            return;
        }
    }
    ctx->pc = 0x2043C8u;
    // 0x2043c8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2043cc: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x2043ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2043d0: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2043D0u;
    {
        const bool branch_taken_0x2043d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2043D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043D0u;
        // 0x2043d4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043d0) {
            ctx->pc = 0x2044A0u;
            return;
        }
    }
    ctx->pc = 0x2043D8u;
    // 0x2043d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2043D8u;
    {
        const bool branch_taken_0x2043d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2043DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043D8u;
        // 0x2043dc: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043d8) {
            ctx->pc = 0x204448u;
            return;
        }
    }
    ctx->pc = 0x2043E0u;
    // 0x2043e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2043E0u;
    {
        const bool branch_taken_0x2043e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043E0u;
        // 0x2043e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043e0) {
            ctx->pc = 0x2043ECu;
            return;
        }
    }
    ctx->pc = 0x2043E8u;
}
