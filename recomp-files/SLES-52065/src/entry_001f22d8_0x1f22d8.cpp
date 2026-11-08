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

// Function: entry_001f22d8
// Address: 0x1f22d8 - 0x1f2350
void entry_001f22d8_0x1f22d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f22d8_0x1f22d8");
#endif

    switch (ctx->pc) {
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f2330u: goto label_1f2330;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f2348u: goto label_1f2348;
        default: break;
    }

    ctx->pc = 0x1f22d8u;

    // 0x1f22d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f22dc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f22e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f22e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f22e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f22e8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f22ec: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F22ECu;
    SET_GPR_U32(ctx, 31, 0x1F22F4u);
    ctx->pc = 0x1F22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22ECu;
    // 0x1f22f0: 0x2690ee40  addiu       $s0, $s4, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F22ECu, 0x1F22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22F4u;
label_1f22f4:
    // 0x1f22f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f22f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22f8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f22fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2300: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f2300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f2304: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f2304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f2308: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f2308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f230c: 0x26c7e200  addiu       $a3, $s6, -0x1E00
    ctx->pc = 0x1f230cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f2310: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1f2310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f2314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f231c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1f231cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f2320: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f2320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2324: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2328: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2328u;
    SET_GPR_U32(ctx, 31, 0x1F2330u);
    ctx->pc = 0x1F232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2328u;
    // 0x1f232c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2328u, 0x1F2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2330u;
label_1f2330:
    // 0x1f2330: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2330u;
    {
        const bool branch_taken_0x1f2330 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2330u;
        // 0x1f2334: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2330) {
            ctx->pc = 0x1F2350u;
            return;
        }
    }
    ctx->pc = 0x1F2338u;
    // 0x1f2338: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2338u;
    SET_GPR_U32(ctx, 31, 0x1F2340u);
    ctx->pc = 0x1F233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2338u;
    // 0x1f233c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2338u, 0x1F2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2340u;
label_1f2340:
    // 0x1f2340: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2340u;
    SET_GPR_U32(ctx, 31, 0x1F2348u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2340u, 0x1F2348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2348u;
label_1f2348:
    // 0x1f2348: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F2348u;
    {
        const bool branch_taken_0x1f2348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2348u;
        // 0x1f234c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2348) {
            ctx->pc = 0x1F2388u;
            return;
        }
    }
    ctx->pc = 0x1F2350u;
}
