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

// Function: entry_001f32fc
// Address: 0x1f32fc - 0x1f3348
void entry_001f32fc_0x1f32fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f32fc_0x1f32fc");
#endif

    switch (ctx->pc) {
        case 0x1f3310u: goto label_1f3310;
        default: break;
    }

    ctx->pc = 0x1f32fcu;

    // 0x1f32fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f32fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3300: 0x2451fb88  addiu       $s1, $v0, -0x478
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966152));
    // 0x1f3304: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1f3304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3308: 0xc080804  jal         func_202010
    ctx->pc = 0x1F3308u;
    SET_GPR_U32(ctx, 31, 0x1F3310u);
    ctx->pc = 0x1F330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3308u;
    // 0x1f330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F3308u, 0x1F3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3310u;
label_1f3310:
    // 0x1f3310: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1f3314: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F3314u;
    {
        const bool branch_taken_0x1f3314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3314u;
        // 0x1f3318: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3314) {
            ctx->pc = 0x1F3448u;
            return;
        }
    }
    ctx->pc = 0x1F331Cu;
    // 0x1f331c: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x1f331cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1f3320: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F3320u;
    {
        const bool branch_taken_0x1f3320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3320u;
        // 0x1f3324: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3320) {
            ctx->pc = 0x1F3430u;
            return;
        }
    }
    ctx->pc = 0x1F3328u;
    // 0x1f3328: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1f3328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1f332c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1f332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1f3330: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f3334: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F3334u;
    {
        const bool branch_taken_0x1f3334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3334u;
        // 0x1f3338: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3334) {
            ctx->pc = 0x1F33A4u;
            return;
        }
    }
    ctx->pc = 0x1F333Cu;
    // 0x1f333c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f3340: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f3340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f3344: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f3348u;
}
