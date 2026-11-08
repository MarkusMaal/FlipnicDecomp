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

// Function: entry_001f1100
// Address: 0x1f1100 - 0x1f1188
void entry_001f1100_0x1f1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1100_0x1f1100");
#endif

    switch (ctx->pc) {
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f1178u: goto label_1f1178;
        case 0x1f1180u: goto label_1f1180;
        default: break;
    }

    ctx->pc = 0x1f1100u;

    // 0x1f1100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1104: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1108: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f110c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f110cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f1110: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1114: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1114u;
    SET_GPR_U32(ctx, 31, 0x1F111Cu);
    ctx->pc = 0x1F1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1114u;
    // 0x1f1118: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1114u, 0x1F111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f111cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1120: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f1120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1124: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f1124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f1128: 0xae91e200  sw          $s1, -0x1E00($s4)
    ctx->pc = 0x1f1128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 17));
    // 0x1f112c: 0x2453ee40  addiu       $s3, $v0, -0x11C0
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f1130: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f1130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f1134: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1138: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1f1138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1f113c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f113cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1140: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f1140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f1144: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f1144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1148: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f114c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1154: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1f1154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1158: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1f1158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f115c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f115cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1160: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1160u;
    SET_GPR_U32(ctx, 31, 0x1F1168u);
    ctx->pc = 0x1F1164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1160u;
    // 0x1f1164: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1160u, 0x1F1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1168u;
label_1f1168:
    // 0x1f1168: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1168u;
    {
        const bool branch_taken_0x1f1168 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f1168) {
            ctx->pc = 0x1F116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1168u;
            // 0x1f116c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1188u;
            return;
        }
    }
    ctx->pc = 0x1F1170u;
    // 0x1f1170: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1170u;
    SET_GPR_U32(ctx, 31, 0x1F1178u);
    ctx->pc = 0x1F1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1170u;
    // 0x1f1174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1170u, 0x1F1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1178u;
label_1f1178:
    // 0x1f1178: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1178u;
    SET_GPR_U32(ctx, 31, 0x1F1180u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1178u, 0x1F1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1180u;
label_1f1180:
    // 0x1f1180: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1180u;
    {
        const bool branch_taken_0x1f1180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1180u;
        // 0x1f1184: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1180) {
            ctx->pc = 0x1F11D0u;
            return;
        }
    }
    ctx->pc = 0x1F1188u;
}
