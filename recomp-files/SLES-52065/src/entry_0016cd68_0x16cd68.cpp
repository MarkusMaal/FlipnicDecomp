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

// Function: entry_0016cd68
// Address: 0x16cd68 - 0x16cd84
void entry_0016cd68_0x16cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cd68_0x16cd68");
#endif

    switch (ctx->pc) {
        case 0x16cd7cu: goto label_16cd7c;
        default: break;
    }

    ctx->pc = 0x16cd68u;

label_16cd68:
    // 0x16cd68: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cd6c:
    // 0x16cd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cd70:
    // 0x16cd70: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cd74:
    // 0x16cd74: 0x320f809  jalr        $t9
label_16cd78:
    if (ctx->pc == 0x16CD78u) {
        ctx->pc = 0x16CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD74u;
        // 0x16cd78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD7Cu;
        goto label_16cd7c;
    }
    ctx->pc = 0x16CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CD7Cu);
        ctx->pc = 0x16CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD74u;
        // 0x16cd78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD74u, 0x16CD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CD7Cu;
label_16cd7c:
    // 0x16cd7c: 0x10000022  b           . + 4 + (0x22 << 2)
label_16cd80:
    if (ctx->pc == 0x16CD80u) {
        ctx->pc = 0x16CD84u;
        goto label_fallthrough_0x16cd7c;
    }
    ctx->pc = 0x16CD7Cu;
    {
        const bool branch_taken_0x16cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd7c) {
            ctx->pc = 0x16CE08u;
            return;
        }
    }
label_fallthrough_0x16cd7c:
    ctx->pc = 0x16CD84u;
}
