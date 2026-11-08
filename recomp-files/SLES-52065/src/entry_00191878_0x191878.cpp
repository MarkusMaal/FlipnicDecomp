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

// Function: entry_00191878
// Address: 0x191878 - 0x19189c
void entry_00191878_0x191878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191878_0x191878");
#endif

    ctx->pc = 0x191878u;

    // 0x191878: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19187c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191880: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x191884: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x191884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
    // 0x191888: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19188c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19188Cu;
    {
        const bool branch_taken_0x19188c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x191890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19188Cu;
        // 0x191890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19188c) {
            ctx->pc = 0x19189Cu;
            return;
        }
    }
    ctx->pc = 0x191894u;
    // 0x191894: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x191894u;
    {
        const bool branch_taken_0x191894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191894u;
        // 0x191898: 0xac6204d0  sw          $v0, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191894) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x19189Cu;
}
