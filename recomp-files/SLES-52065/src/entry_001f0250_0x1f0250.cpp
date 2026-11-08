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

// Function: entry_001f0250
// Address: 0x1f0250 - 0x1f02a0
void entry_001f0250_0x1f0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0250_0x1f0250");
#endif

    switch (ctx->pc) {
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0298u: goto label_1f0298;
        default: break;
    }

    ctx->pc = 0x1f0250u;

    // 0x1f0250: 0x27d0ee40  addiu       $s0, $fp, -0x11C0
    ctx->pc = 0x1f0250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962752));
    // 0x1f0254: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f0258: 0x2444f900  addiu       $a0, $v0, -0x700
    ctx->pc = 0x1f0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x1f025c: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f025cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0260: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0264: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f0264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f026c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f026cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f0270: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f0270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0274: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0278: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0278u;
    SET_GPR_U32(ctx, 31, 0x1F0280u);
    ctx->pc = 0x1F027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0278u;
    // 0x1f027c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0278u, 0x1F0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0280u;
label_1f0280:
    // 0x1f0280: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0280u;
    {
        const bool branch_taken_0x1f0280 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0280u;
        // 0x1f0284: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0280) {
            ctx->pc = 0x1F02A0u;
            return;
        }
    }
    ctx->pc = 0x1F0288u;
    // 0x1f0288: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0288u;
    // 0x1f028c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0288u, 0x1F0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0290u;
    SET_GPR_U32(ctx, 31, 0x1F0298u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0290u, 0x1F0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0298u;
label_1f0298:
    // 0x1f0298: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0298u;
    {
        const bool branch_taken_0x1f0298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0298u;
        // 0x1f029c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0298) {
            ctx->pc = 0x1F02F0u;
            return;
        }
    }
    ctx->pc = 0x1F02A0u;
}
