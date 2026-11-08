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

// Function: entry_0010cb60
// Address: 0x10cb60 - 0x10cb80
void entry_0010cb60_0x10cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb60_0x10cb60");
#endif

    switch (ctx->pc) {
        case 0x10cb7cu: goto label_10cb7c;
        default: break;
    }

    ctx->pc = 0x10cb60u;

label_10cb60:
    // 0x10cb60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10cb64:
    // 0x10cb64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10cb68:
    // 0x10cb68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10cb6c:
    // 0x10cb6c: 0x8c59068c  lw          $t9, 0x68C($v0)
    ctx->pc = 0x10cb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
label_10cb70:
    // 0x10cb70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10cb74:
    // 0x10cb74: 0x320f809  jalr        $t9
label_10cb78:
    if (ctx->pc == 0x10CB78u) {
        ctx->pc = 0x10CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB74u;
        // 0x10cb78: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB7Cu;
        goto label_10cb7c;
    }
    ctx->pc = 0x10CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CB7Cu);
        ctx->pc = 0x10CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB74u;
        // 0x10cb78: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB74u, 0x10CB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CB7Cu;
label_10cb7c:
    // 0x10cb7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10cb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10cb80u;
}
