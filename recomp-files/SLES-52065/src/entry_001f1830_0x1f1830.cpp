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

// Function: entry_001f1830
// Address: 0x1f1830 - 0x1f18b8
void entry_001f1830_0x1f1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1830_0x1f1830");
#endif

    switch (ctx->pc) {
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18b0u: goto label_1f18b0;
        default: break;
    }

    ctx->pc = 0x1f1830u;

    // 0x1f1830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1834: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1838: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f183c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1840: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f1840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f1844: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1844u;
    SET_GPR_U32(ctx, 31, 0x1F184Cu);
    ctx->pc = 0x1F1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1844u;
    // 0x1f1848: 0x26d0e200  addiu       $s0, $s6, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1844u, 0x1F184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F184Cu;
label_1f184c:
    // 0x1f184c: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f184cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f1850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1858: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f185c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f185cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f1860: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1864: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1f1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f1868: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F1868u;
    SET_GPR_U32(ctx, 31, 0x1F1870u);
    ctx->pc = 0x1F186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1868u;
    // 0x1f186c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F1868u, 0x1F1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1870u;
label_1f1870:
    // 0x1f1870: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f1874: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f1874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1878: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f187c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1f187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f1880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1884: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1f1888: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f1888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f188c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f188cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1890: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1890u;
    SET_GPR_U32(ctx, 31, 0x1F1898u);
    ctx->pc = 0x1F1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1890u;
    // 0x1f1894: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1890u, 0x1F1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1898u;
label_1f1898:
    // 0x1f1898: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1898u;
    {
        const bool branch_taken_0x1f1898 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1898u;
        // 0x1f189c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1898) {
            ctx->pc = 0x1F18B8u;
            return;
        }
    }
    ctx->pc = 0x1F18A0u;
    // 0x1f18a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F18A0u;
    SET_GPR_U32(ctx, 31, 0x1F18A8u);
    ctx->pc = 0x1F18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18A0u;
    // 0x1f18a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F18A0u, 0x1F18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18A8u;
label_1f18a8:
    // 0x1f18a8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F18A8u;
    SET_GPR_U32(ctx, 31, 0x1F18B0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F18A8u, 0x1F18B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18B0u;
label_1f18b0:
    // 0x1f18b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F18B0u;
    {
        const bool branch_taken_0x1f18b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18B0u;
        // 0x1f18b4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18b0) {
            ctx->pc = 0x1F18F0u;
            return;
        }
    }
    ctx->pc = 0x1F18B8u;
}
