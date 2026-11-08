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

// Function: entry_00100300
// Address: 0x100300 - 0x100340
void entry_00100300_0x100300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100300_0x100300");
#endif

    switch (ctx->pc) {
        case 0x100308u: goto label_100308;
        case 0x100314u: goto label_100314;
        case 0x10031cu: goto label_10031c;
        case 0x100338u: goto label_100338;
        default: break;
    }

    ctx->pc = 0x100300u;

label_100300:
    // 0x100300: 0xc040524  jal         func_101490
label_100304:
    if (ctx->pc == 0x100304u) {
        ctx->pc = 0x100304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100300u;
        // 0x100304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100308u;
        goto label_100308;
    }
    ctx->pc = 0x100300u;
    SET_GPR_U32(ctx, 31, 0x100308u);
    ctx->pc = 0x100304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100300u;
    // 0x100304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101490u, 0x100300u, 0x100308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100308u;
label_100308:
    // 0x100308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10030c:
    // 0x10030c: 0xc054660  jal         func_151980
label_100310:
    if (ctx->pc == 0x100310u) {
        ctx->pc = 0x100310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10030Cu;
        // 0x100310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100314u;
        goto label_100314;
    }
    ctx->pc = 0x10030Cu;
    SET_GPR_U32(ctx, 31, 0x100314u);
    ctx->pc = 0x100310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10030Cu;
    // 0x100310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x10030Cu, 0x100314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100314u;
label_100314:
    // 0x100314: 0xc0405d0  jal         func_101740
label_100318:
    if (ctx->pc == 0x100318u) {
        ctx->pc = 0x100318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100314u;
        // 0x100318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10031Cu;
        goto label_10031c;
    }
    ctx->pc = 0x100314u;
    SET_GPR_U32(ctx, 31, 0x10031Cu);
    ctx->pc = 0x100318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100314u;
    // 0x100318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101740u, 0x100314u, 0x10031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10031Cu;
label_10031c:
    // 0x10031c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_100320:
    if (ctx->pc == 0x100320u) {
        ctx->pc = 0x100324u;
        goto label_100324;
    }
    ctx->pc = 0x10031Cu;
    {
        const bool branch_taken_0x10031c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10031c) {
            ctx->pc = 0x1002D8u;
            return;
        }
    }
    ctx->pc = 0x100324u;
label_100324:
    // 0x100324: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x100324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_100328:
    // 0x100328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10032c:
    // 0x10032c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10032cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_100330:
    // 0x100330: 0x320f809  jalr        $t9
label_100334:
    if (ctx->pc == 0x100334u) {
        ctx->pc = 0x100334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100330u;
        // 0x100334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100338u;
        goto label_100338;
    }
    ctx->pc = 0x100330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100338u);
        ctx->pc = 0x100334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100330u;
        // 0x100334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100330u, 0x100338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100338u;
label_100338:
    // 0x100338: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_10033c:
    if (ctx->pc == 0x10033Cu) {
        ctx->pc = 0x100340u;
        goto label_fallthrough_0x100338;
    }
    ctx->pc = 0x100338u;
    {
        const bool branch_taken_0x100338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100338) {
            ctx->pc = 0x1002D8u;
            return;
        }
    }
label_fallthrough_0x100338:
    ctx->pc = 0x100340u;
}
