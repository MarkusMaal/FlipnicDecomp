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

// Function: FUN_001300f0
// Address: 0x1300f0 - 0x130280
void FUN_001300f0_0x1300f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001300f0_0x1300f0");
#endif

    switch (ctx->pc) {
        case 0x130118u: goto label_130118;
        case 0x13012cu: goto label_13012c;
        case 0x130138u: goto label_130138;
        case 0x130144u: goto label_130144;
        case 0x130160u: goto label_130160;
        case 0x130174u: goto label_130174;
        case 0x130180u: goto label_130180;
        case 0x13018cu: goto label_13018c;
        case 0x1301a8u: goto label_1301a8;
        case 0x1301bcu: goto label_1301bc;
        case 0x1301c8u: goto label_1301c8;
        case 0x1301d4u: goto label_1301d4;
        case 0x1301f0u: goto label_1301f0;
        case 0x130204u: goto label_130204;
        case 0x130210u: goto label_130210;
        case 0x13021cu: goto label_13021c;
        case 0x13023cu: goto label_13023c;
        case 0x130248u: goto label_130248;
        case 0x130260u: goto label_130260;
        case 0x130268u: goto label_130268;
        case 0x130270u: goto label_130270;
        default: break;
    }

    ctx->pc = 0x1300f0u;

    // 0x1300f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1300f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1300f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1300f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1300f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1300f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1300fc: 0x8f908588  lw          $s0, -0x7A78($gp)
    ctx->pc = 0x1300fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x130100: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130100u;
    {
        const bool branch_taken_0x130100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130100) {
            ctx->pc = 0x130144u;
            goto label_130144;
        }
    }
    ctx->pc = 0x130108u;
    // 0x130108: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x130108u;
    {
        const bool branch_taken_0x130108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130108u;
        // 0x13010c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130108) {
            ctx->pc = 0x13013Cu;
            goto label_13013c;
        }
    }
    ctx->pc = 0x130110u;
    // 0x130110: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x130110u;
    SET_GPR_U32(ctx, 31, 0x130118u);
    ctx->pc = 0x130114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130110u;
    // 0x130114: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x130110u, 0x130118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130118u;
label_130118:
    // 0x130118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13011c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13011Cu;
    {
        const bool branch_taken_0x13011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13011Cu;
        // 0x130120: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13011c) {
            ctx->pc = 0x130138u;
            goto label_130138;
        }
    }
    ctx->pc = 0x130124u;
    // 0x130124: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x130124u;
    SET_GPR_U32(ctx, 31, 0x13012Cu);
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x130124u, 0x13012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13012Cu;
label_13012c:
    // 0x13012c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13012cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130130: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130130u;
    SET_GPR_U32(ctx, 31, 0x130138u);
    ctx->pc = 0x130134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130130u;
    // 0x130134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130130u, 0x130138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130138u;
label_130138:
    // 0x130138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13013c:
    // 0x13013c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13013Cu;
    SET_GPR_U32(ctx, 31, 0x130144u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13013Cu, 0x130144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130144u;
label_130144:
    // 0x130144: 0x8f908584  lw          $s0, -0x7A7C($gp)
    ctx->pc = 0x130144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935940)));
    // 0x130148: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130148u;
    {
        const bool branch_taken_0x130148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130148) {
            ctx->pc = 0x13018Cu;
            goto label_13018c;
        }
    }
    ctx->pc = 0x130150u;
    // 0x130150: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x130150u;
    {
        const bool branch_taken_0x130150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130150u;
        // 0x130154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130150) {
            ctx->pc = 0x130184u;
            goto label_130184;
        }
    }
    ctx->pc = 0x130158u;
    // 0x130158: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x130158u;
    SET_GPR_U32(ctx, 31, 0x130160u);
    ctx->pc = 0x13015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130158u;
    // 0x13015c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x130158u, 0x130160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130160u;
label_130160:
    // 0x130160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130164: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x130164u;
    {
        const bool branch_taken_0x130164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130164u;
        // 0x130168: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130164) {
            ctx->pc = 0x130180u;
            goto label_130180;
        }
    }
    ctx->pc = 0x13016Cu;
    // 0x13016c: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x13016Cu;
    SET_GPR_U32(ctx, 31, 0x130174u);
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x13016Cu, 0x130174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130174u;
label_130174:
    // 0x130174: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130178: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130178u;
    SET_GPR_U32(ctx, 31, 0x130180u);
    ctx->pc = 0x13017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130178u;
    // 0x13017c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130178u, 0x130180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130180u;
label_130180:
    // 0x130180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130184:
    // 0x130184: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130184u;
    SET_GPR_U32(ctx, 31, 0x13018Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130184u, 0x13018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13018Cu;
label_13018c:
    // 0x13018c: 0x8f908580  lw          $s0, -0x7A80($gp)
    ctx->pc = 0x13018cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    // 0x130190: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130190u;
    {
        const bool branch_taken_0x130190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130190) {
            ctx->pc = 0x1301D4u;
            goto label_1301d4;
        }
    }
    ctx->pc = 0x130198u;
    // 0x130198: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x130198u;
    {
        const bool branch_taken_0x130198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130198u;
        // 0x13019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130198) {
            ctx->pc = 0x1301CCu;
            goto label_1301cc;
        }
    }
    ctx->pc = 0x1301A0u;
    // 0x1301a0: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x1301A0u;
    SET_GPR_U32(ctx, 31, 0x1301A8u);
    ctx->pc = 0x1301A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301A0u;
    // 0x1301a4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x1301A0u, 0x1301A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301A8u;
label_1301a8:
    // 0x1301a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1301a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1301ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1301ACu;
    {
        const bool branch_taken_0x1301ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301ACu;
        // 0x1301b0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301ac) {
            ctx->pc = 0x1301C8u;
            goto label_1301c8;
        }
    }
    ctx->pc = 0x1301B4u;
    // 0x1301b4: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x1301B4u;
    SET_GPR_U32(ctx, 31, 0x1301BCu);
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x1301B4u, 0x1301BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301BCu;
label_1301bc:
    // 0x1301bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1301bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1301c0: 0xc04c304  jal         func_130C10
    ctx->pc = 0x1301C0u;
    SET_GPR_U32(ctx, 31, 0x1301C8u);
    ctx->pc = 0x1301C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301C0u;
    // 0x1301c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x1301C0u, 0x1301C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301C8u;
label_1301c8:
    // 0x1301c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1301c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1301cc:
    // 0x1301cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1301CCu;
    SET_GPR_U32(ctx, 31, 0x1301D4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1301CCu, 0x1301D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D4u;
label_1301d4:
    // 0x1301d4: 0x8f90858c  lw          $s0, -0x7A74($gp)
    ctx->pc = 0x1301d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x1301d8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1301D8u;
    {
        const bool branch_taken_0x1301d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1301d8) {
            ctx->pc = 0x13021Cu;
            goto label_13021c;
        }
    }
    ctx->pc = 0x1301E0u;
    // 0x1301e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1301E0u;
    {
        const bool branch_taken_0x1301e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301E0u;
        // 0x1301e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301e0) {
            ctx->pc = 0x130214u;
            goto label_130214;
        }
    }
    ctx->pc = 0x1301E8u;
    // 0x1301e8: 0xc04c0a0  jal         func_130280
    ctx->pc = 0x1301E8u;
    SET_GPR_U32(ctx, 31, 0x1301F0u);
    ctx->pc = 0x1301ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301E8u;
    // 0x1301ec: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130280u, 0x1301E8u, 0x1301F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301F0u;
label_1301f0:
    // 0x1301f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1301f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1301F4u;
    {
        const bool branch_taken_0x1301f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301F4u;
        // 0x1301f8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301f4) {
            ctx->pc = 0x130210u;
            goto label_130210;
        }
    }
    ctx->pc = 0x1301FCu;
    // 0x1301fc: 0xc04c0a0  jal         func_130280
    ctx->pc = 0x1301FCu;
    SET_GPR_U32(ctx, 31, 0x130204u);
    ctx->pc = 0x130280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130280u, 0x1301FCu, 0x130204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130204u;
label_130204:
    // 0x130204: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130208: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130208u;
    SET_GPR_U32(ctx, 31, 0x130210u);
    ctx->pc = 0x13020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130208u;
    // 0x13020c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E10u, 0x130208u, 0x130210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130210u;
label_130210:
    // 0x130210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130214:
    // 0x130214: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130214u;
    SET_GPR_U32(ctx, 31, 0x13021Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130214u, 0x13021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13021Cu;
label_13021c:
    // 0x13021c: 0x8f9085c8  lw          $s0, -0x7A38($gp)
    ctx->pc = 0x13021cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x130220: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130220u;
    {
        const bool branch_taken_0x130220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130220) {
            ctx->pc = 0x130248u;
            goto label_130248;
        }
    }
    ctx->pc = 0x130228u;
    // 0x130228: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130228u;
    {
        const bool branch_taken_0x130228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130228u;
        // 0x13022c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130228) {
            ctx->pc = 0x130240u;
            goto label_130240;
        }
    }
    ctx->pc = 0x130230u;
    // 0x130230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130234: 0xc048414  jal         func_121050
    ctx->pc = 0x130234u;
    SET_GPR_U32(ctx, 31, 0x13023Cu);
    ctx->pc = 0x130238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130234u;
    // 0x130238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x130234u, 0x13023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13023Cu;
label_13023c:
    // 0x13023c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130240:
    // 0x130240: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130240u;
    SET_GPR_U32(ctx, 31, 0x130248u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130240u, 0x130248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130248u;
label_130248:
    // 0x130248: 0xaf808588  sw          $zero, -0x7A78($gp)
    ctx->pc = 0x130248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 0));
    // 0x13024c: 0xaf808584  sw          $zero, -0x7A7C($gp)
    ctx->pc = 0x13024cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935940), GPR_U32(ctx, 0));
    // 0x130250: 0xaf808580  sw          $zero, -0x7A80($gp)
    ctx->pc = 0x130250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935936), GPR_U32(ctx, 0));
    // 0x130254: 0xaf80858c  sw          $zero, -0x7A74($gp)
    ctx->pc = 0x130254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 0));
    // 0x130258: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x130258u;
    SET_GPR_U32(ctx, 31, 0x130260u);
    ctx->pc = 0x13025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130258u;
    // 0x13025c: 0xaf8085c8  sw          $zero, -0x7A38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x130258u, 0x130260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130260u;
label_130260:
    // 0x130260: 0xc051404  jal         func_145010
    ctx->pc = 0x130260u;
    SET_GPR_U32(ctx, 31, 0x130268u);
    ctx->pc = 0x130264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130260u;
    // 0x130264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145010u, 0x130260u, 0x130268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130268u;
label_130268:
    // 0x130268: 0xc04bc68  jal         func_12F1A0
    ctx->pc = 0x130268u;
    SET_GPR_U32(ctx, 31, 0x130270u);
    ctx->pc = 0x13026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130268u;
    // 0x13026c: 0xaf8084b4  sw          $zero, -0x7B4C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1A0u, 0x130268u, 0x130270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130270u;
label_130270:
    // 0x130270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130278: 0x3e00008  jr          $ra
    ctx->pc = 0x130278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130278u;
        // 0x13027c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130280u;
}
