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

// Function: entry_0015af54
// Address: 0x15af54 - 0x15af7c
void entry_0015af54_0x15af54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af54_0x15af54");
#endif

    switch (ctx->pc) {
        case 0x15af68u: goto label_15af68;
        default: break;
    }

    ctx->pc = 0x15af54u;

label_15af54:
    // 0x15af54: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15af58:
    // 0x15af58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15af5c:
    // 0x15af5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15af5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15af60:
    // 0x15af60: 0x320f809  jalr        $t9
label_15af64:
    if (ctx->pc == 0x15AF64u) {
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF68u;
        goto label_15af68;
    }
    ctx->pc = 0x15AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15AF68u);
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF60u, 0x15AF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF68u;
label_15af68:
    // 0x15af68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15af6c:
    // 0x15af6c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_15af70:
    if (ctx->pc == 0x15AF70u) {
        ctx->pc = 0x15AF74u;
        goto label_15af74;
    }
    ctx->pc = 0x15AF6Cu;
    {
        const bool branch_taken_0x15af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15af6c) {
            ctx->pc = 0x15AF80u;
            return;
        }
    }
    ctx->pc = 0x15AF74u;
label_15af74:
    // 0x15af74: 0x10000002  b           . + 4 + (0x2 << 2)
label_15af78:
    if (ctx->pc == 0x15AF78u) {
        ctx->pc = 0x15AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF74u;
        // 0x15af78: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF7Cu;
        goto label_fallthrough_0x15af74;
    }
    ctx->pc = 0x15AF74u;
    {
        const bool branch_taken_0x15af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF74u;
        // 0x15af78: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af74) {
            ctx->pc = 0x15AF80u;
            return;
        }
    }
label_fallthrough_0x15af74:
    ctx->pc = 0x15AF7Cu;
}
