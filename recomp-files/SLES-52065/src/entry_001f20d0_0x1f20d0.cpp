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

// Function: entry_001f20d0
// Address: 0x1f20d0 - 0x1f2168
void entry_001f20d0_0x1f20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f20d0_0x1f20d0");
#endif

    switch (ctx->pc) {
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f2160u: goto label_1f2160;
        default: break;
    }

    ctx->pc = 0x1f20d0u;

    // 0x1f20d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f20d4: 0xae57080c  sw          $s7, 0x80C($s2)
    ctx->pc = 0x1f20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 23));
    // 0x1f20d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f20d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f20dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f20e0: 0x2634ee40  addiu       $s4, $s1, -0x11C0
    ctx->pc = 0x1f20e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962752));
    // 0x1f20e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f20e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f20ec: 0x2450e200  addiu       $s0, $v0, -0x1E00
    ctx->pc = 0x1f20ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959616));
    // 0x1f20f0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F20F0u;
    SET_GPR_U32(ctx, 31, 0x1F20F8u);
    ctx->pc = 0x1F20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20F0u;
    // 0x1f20f4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F20F0u, 0x1F20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20F8u;
label_1f20f8:
    // 0x1f20f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f20f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20fc: 0xae560818  sw          $s6, 0x818($s2)
    ctx->pc = 0x1f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2072), GPR_U32(ctx, 22));
    // 0x1f2100: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2108: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f2108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f210c: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1f2110: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f2110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f2114: 0xae5e0814  sw          $fp, 0x814($s2)
    ctx->pc = 0x1f2114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 30));
    // 0x1f2118: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F2118u;
    SET_GPR_U32(ctx, 31, 0x1F2120u);
    ctx->pc = 0x1F211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2118u;
    // 0x1f211c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F2118u, 0x1F2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2120u;
label_1f2120:
    // 0x1f2120: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f2120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f2124: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f2124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2128: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f212c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1f212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1f2130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2134: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1f2138: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f2138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f213c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f213cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2140: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2140u;
    SET_GPR_U32(ctx, 31, 0x1F2148u);
    ctx->pc = 0x1F2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2140u;
    // 0x1f2144: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2140u, 0x1F2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2148u;
label_1f2148:
    // 0x1f2148: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2148u;
    {
        const bool branch_taken_0x1f2148 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2148u;
        // 0x1f214c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2148) {
            ctx->pc = 0x1F2168u;
            return;
        }
    }
    ctx->pc = 0x1F2150u;
    // 0x1f2150: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2150u;
    SET_GPR_U32(ctx, 31, 0x1F2158u);
    ctx->pc = 0x1F2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2150u;
    // 0x1f2154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2150u, 0x1F2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2158u;
label_1f2158:
    // 0x1f2158: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2158u;
    SET_GPR_U32(ctx, 31, 0x1F2160u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2158u, 0x1F2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2160u;
label_1f2160:
    // 0x1f2160: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F2160u;
    {
        const bool branch_taken_0x1f2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2160u;
        // 0x1f2164: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2160) {
            ctx->pc = 0x1F21A0u;
            return;
        }
    }
    ctx->pc = 0x1F2168u;
}
