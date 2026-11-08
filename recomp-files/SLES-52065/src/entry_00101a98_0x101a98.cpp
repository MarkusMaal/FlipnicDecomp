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

// Function: entry_00101a98
// Address: 0x101a98 - 0x101ac4
void entry_00101a98_0x101a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a98_0x101a98");
#endif

    switch (ctx->pc) {
        case 0x101abcu: goto label_101abc;
        default: break;
    }

    ctx->pc = 0x101a98u;

    // 0x101a98: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x101A98u;
    {
        const bool branch_taken_0x101a98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x101a98) {
            ctx->pc = 0x101AC4u;
            return;
        }
    }
    ctx->pc = 0x101AA0u;
    // 0x101aa0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x101aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101aac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101ab0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x101ab4: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x101AB4u;
    SET_GPR_U32(ctx, 31, 0x101ABCu);
    ctx->pc = 0x101AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AB4u;
    // 0x101ab8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x101AB4u, 0x101ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101ABCu;
label_101abc:
    // 0x101abc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101ABCu;
    {
        const bool branch_taken_0x101abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ABCu;
        // 0x101ac0: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101abc) {
            ctx->pc = 0x101AC8u;
            return;
        }
    }
    ctx->pc = 0x101AC4u;
}
