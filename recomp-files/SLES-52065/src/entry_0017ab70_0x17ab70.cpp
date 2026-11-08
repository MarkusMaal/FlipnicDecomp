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

// Function: entry_0017ab70
// Address: 0x17ab70 - 0x17aba4
void entry_0017ab70_0x17ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab70_0x17ab70");
#endif

    ctx->pc = 0x17ab70u;

    // 0x17ab70: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17AB70u;
    {
        const bool branch_taken_0x17ab70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB70u;
        // 0x17ab74: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab70) {
            ctx->pc = 0x17ABA8u;
            return;
        }
    }
    ctx->pc = 0x17AB78u;
    // 0x17ab78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ab7c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x17ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x17ab80: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17AB80u;
    {
        const bool branch_taken_0x17ab80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB80u;
        // 0x17ab84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab80) {
            ctx->pc = 0x17ABA4u;
            return;
        }
    }
    ctx->pc = 0x17AB88u;
    // 0x17ab88: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ab8c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x17ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x17ab90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB90u;
    {
        const bool branch_taken_0x17ab90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB90u;
        // 0x17ab94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab90) {
            ctx->pc = 0x17ABA4u;
            return;
        }
    }
    ctx->pc = 0x17AB98u;
    // 0x17ab98: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ab9c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17aba0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x17aba4u;
}
