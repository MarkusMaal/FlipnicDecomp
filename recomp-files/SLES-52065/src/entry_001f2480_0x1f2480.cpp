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

// Function: entry_001f2480
// Address: 0x1f2480 - 0x1f2514
void entry_001f2480_0x1f2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2480_0x1f2480");
#endif

    switch (ctx->pc) {
        case 0x1f249cu: goto label_1f249c;
        case 0x1f24b8u: goto label_1f24b8;
        case 0x1f24f4u: goto label_1f24f4;
        case 0x1f2504u: goto label_1f2504;
        case 0x1f250cu: goto label_1f250c;
        default: break;
    }

    ctx->pc = 0x1f2480u;

    // 0x1f2480: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1f2480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f2484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f2484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2488: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x1f2488u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1f248c: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1f248cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x1f2490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2494: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F2494u;
    SET_GPR_U32(ctx, 31, 0x1F249Cu);
    ctx->pc = 0x1F2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2494u;
    // 0x1f2498: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F2494u, 0x1F249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F249Cu;
label_1f249c:
    // 0x1f249c: 0x2690ee40  addiu       $s0, $s4, -0x11C0
    ctx->pc = 0x1f249cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f24a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f24a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f24a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f24ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f24acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f24b0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F24B0u;
    SET_GPR_U32(ctx, 31, 0x1F24B8u);
    ctx->pc = 0x1F24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24B0u;
    // 0x1f24b4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F24B0u, 0x1F24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24B8u;
label_1f24b8:
    // 0x1f24b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f24b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24bc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f24c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f24c4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f24c8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f24cc: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1f24ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1f24d0: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f24d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f24d4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1f24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f24d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f24dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f24dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24e0: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f24e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f24e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f24ec: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F24ECu;
    SET_GPR_U32(ctx, 31, 0x1F24F4u);
    ctx->pc = 0x1F24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24ECu;
    // 0x1f24f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F24ECu, 0x1F24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24F4u;
label_1f24f4:
    // 0x1f24f4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F24F4u;
    {
        const bool branch_taken_0x1f24f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24F4u;
        // 0x1f24f8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24f4) {
            ctx->pc = 0x1F2514u;
            return;
        }
    }
    ctx->pc = 0x1F24FCu;
    // 0x1f24fc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F24FCu;
    SET_GPR_U32(ctx, 31, 0x1F2504u);
    ctx->pc = 0x1F2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24FCu;
    // 0x1f2500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F24FCu, 0x1F2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2504u;
label_1f2504:
    // 0x1f2504: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2504u;
    SET_GPR_U32(ctx, 31, 0x1F250Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2504u, 0x1F250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F250Cu;
label_1f250c:
    // 0x1f250c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F250Cu;
    {
        const bool branch_taken_0x1f250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F250Cu;
        // 0x1f2510: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f250c) {
            ctx->pc = 0x1F254Cu;
            return;
        }
    }
    ctx->pc = 0x1F2514u;
}
