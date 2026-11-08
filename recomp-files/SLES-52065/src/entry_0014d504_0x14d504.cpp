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

// Function: entry_0014d504
// Address: 0x14d504 - 0x14d52c
void entry_0014d504_0x14d504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d504_0x14d504");
#endif

    ctx->pc = 0x14d504u;

    // 0x14d504: 0x0  nop
    ctx->pc = 0x14d504u;
    // NOP
    // 0x14d508: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d50c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d510: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d514: 0x236182b  sltu        $v1, $s1, $s6
    ctx->pc = 0x14d514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d518: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14d51c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D51Cu;
    {
        const bool branch_taken_0x14d51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D51Cu;
        // 0x14d520: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d51c) {
            ctx->pc = 0x14D4F4u;
            return;
        }
    }
    ctx->pc = 0x14D524u;
    // 0x14d524: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14D524u;
    {
        const bool branch_taken_0x14d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d524) {
            ctx->pc = 0x14D5E4u;
            return;
        }
    }
    ctx->pc = 0x14D52Cu;
}
