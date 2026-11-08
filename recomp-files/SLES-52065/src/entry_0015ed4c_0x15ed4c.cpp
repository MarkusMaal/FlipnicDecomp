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

// Function: entry_0015ed4c
// Address: 0x15ed4c - 0x15ed78
void entry_0015ed4c_0x15ed4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed4c_0x15ed4c");
#endif

    ctx->pc = 0x15ed4cu;

    // 0x15ed4c: 0x0  nop
    ctx->pc = 0x15ed4cu;
    // NOP
    // 0x15ed50: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15ed54: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15ED54u;
    {
        const bool branch_taken_0x15ed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED54u;
        // 0x15ed58: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed54) {
            ctx->pc = 0x15ED78u;
            return;
        }
    }
    ctx->pc = 0x15ED5Cu;
    // 0x15ed5c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15ed60: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x15ed60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15ed64: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15ed68: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x15ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
    // 0x15ed6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ed70: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x15ED70u;
    {
        const bool branch_taken_0x15ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED70u;
        // 0x15ed74: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed70) {
            ctx->pc = 0x15EEB8u;
            return;
        }
    }
    ctx->pc = 0x15ED78u;
}
