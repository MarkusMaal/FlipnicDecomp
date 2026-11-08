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

// Function: entry_00199108
// Address: 0x199108 - 0x19918c
void entry_00199108_0x199108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199108_0x199108");
#endif

    switch (ctx->pc) {
        case 0x199144u: goto label_199144;
        case 0x199154u: goto label_199154;
        default: break;
    }

    ctx->pc = 0x199108u;

    // 0x199108: 0x8cc30710  lw          $v1, 0x710($a2)
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1808)));
    // 0x19910c: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x19910Cu;
    {
        const bool branch_taken_0x19910c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19910Cu;
        // 0x199110: 0x24d00710  addiu       $s0, $a2, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19910c) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x199114u;
    // 0x199114: 0xae800674  sw          $zero, 0x674($s4)
    ctx->pc = 0x199114u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 0));
    // 0x199118: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19911c: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x19911cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x199120: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x199120u;
    {
        const bool branch_taken_0x199120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199120) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x199128u;
    // 0x199128: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19912c: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x19912Cu;
    {
        const bool branch_taken_0x19912c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19912c) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x199134u;
    // 0x199134: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19913c: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19913Cu;
    SET_GPR_U32(ctx, 31, 0x199144u);
    ctx->pc = 0x199140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19913Cu;
    // 0x199140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19913Cu, 0x199144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199144u;
label_199144:
    // 0x199144: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x199144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19914c: 0xc064c20  jal         func_193080
    ctx->pc = 0x19914Cu;
    SET_GPR_U32(ctx, 31, 0x199154u);
    ctx->pc = 0x199150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19914Cu;
    // 0x199150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19914Cu, 0x199154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199154u;
label_199154:
    // 0x199154: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199158: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x199158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x19915c: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x199160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199164: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x199164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
    // 0x199168: 0x8e840680  lw          $a0, 0x680($s4)
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x19916c: 0x8e830684  lw          $v1, 0x684($s4)
    ctx->pc = 0x19916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x199170: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x199170u;
    {
        const bool branch_taken_0x199170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x199170) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x199178u;
    // 0x199178: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x199178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x19917c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19917Cu;
    {
        const bool branch_taken_0x19917c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19917c) {
            ctx->pc = 0x19918Cu;
            return;
        }
    }
    ctx->pc = 0x199184u;
    // 0x199184: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x199184u;
    SET_GPR_U32(ctx, 31, 0x19918Cu);
    ctx->pc = 0x199188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199184u;
    // 0x199188: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199184u, 0x19918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19918Cu;
}
