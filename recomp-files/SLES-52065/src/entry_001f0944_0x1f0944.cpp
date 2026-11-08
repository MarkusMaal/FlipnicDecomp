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

// Function: entry_001f0944
// Address: 0x1f0944 - 0x1f09b8
void entry_001f0944_0x1f0944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0944_0x1f0944");
#endif

    switch (ctx->pc) {
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09b0u: goto label_1f09b0;
        default: break;
    }

    ctx->pc = 0x1f0944u;

    // 0x1f0944: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0948: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f094c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0950: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f0950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f0954: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0954u;
    SET_GPR_U32(ctx, 31, 0x1F095Cu);
    ctx->pc = 0x1F0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0954u;
    // 0x1f0958: 0x2694ee40  addiu       $s4, $s4, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0954u, 0x1F095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F095Cu;
label_1f095c:
    // 0x1f095c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f095cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0960: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f0960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f0964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0968: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f0968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f096c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f096cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f0970: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f0974: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f0974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0978: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f097c: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1f0980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0984: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0988: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f098c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f098cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0990: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0990u;
    SET_GPR_U32(ctx, 31, 0x1F0998u);
    ctx->pc = 0x1F0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0990u;
    // 0x1f0994: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0990u, 0x1F0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0998u;
label_1f0998:
    // 0x1f0998: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0998u;
    {
        const bool branch_taken_0x1f0998 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0998u;
        // 0x1f099c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0998) {
            ctx->pc = 0x1F09B8u;
            return;
        }
    }
    ctx->pc = 0x1F09A0u;
    // 0x1f09a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F09A0u;
    SET_GPR_U32(ctx, 31, 0x1F09A8u);
    ctx->pc = 0x1F09A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09A0u;
    // 0x1f09a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F09A0u, 0x1F09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09A8u;
label_1f09a8:
    // 0x1f09a8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F09A8u;
    SET_GPR_U32(ctx, 31, 0x1F09B0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F09A8u, 0x1F09B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09B0u;
label_1f09b0:
    // 0x1f09b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F09B0u;
    {
        const bool branch_taken_0x1f09b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B0u;
        // 0x1f09b4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b0) {
            ctx->pc = 0x1F09F0u;
            return;
        }
    }
    ctx->pc = 0x1F09B8u;
}
