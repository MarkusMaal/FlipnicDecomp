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

// Function: FUN_002010c8
// Address: 0x2010c8 - 0x201240
void FUN_002010c8_0x2010c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002010c8_0x2010c8");
#endif

    switch (ctx->pc) {
        case 0x2010c8u: goto label_2010c8;
        case 0x2010ccu: goto label_2010cc;
        case 0x2010d0u: goto label_2010d0;
        case 0x2010d4u: goto label_2010d4;
        case 0x2010d8u: goto label_2010d8;
        case 0x2010dcu: goto label_2010dc;
        case 0x2010e0u: goto label_2010e0;
        case 0x2010e4u: goto label_2010e4;
        case 0x2010e8u: goto label_2010e8;
        case 0x2010ecu: goto label_2010ec;
        case 0x2010f0u: goto label_2010f0;
        case 0x2010f4u: goto label_2010f4;
        case 0x2010f8u: goto label_2010f8;
        case 0x2010fcu: goto label_2010fc;
        case 0x201100u: goto label_201100;
        case 0x201104u: goto label_201104;
        case 0x201108u: goto label_201108;
        case 0x20110cu: goto label_20110c;
        case 0x201110u: goto label_201110;
        case 0x201114u: goto label_201114;
        case 0x201118u: goto label_201118;
        case 0x20111cu: goto label_20111c;
        case 0x201120u: goto label_201120;
        case 0x201124u: goto label_201124;
        case 0x201128u: goto label_201128;
        case 0x20112cu: goto label_20112c;
        case 0x201130u: goto label_201130;
        case 0x201134u: goto label_201134;
        case 0x201138u: goto label_201138;
        case 0x20113cu: goto label_20113c;
        case 0x201140u: goto label_201140;
        case 0x201144u: goto label_201144;
        case 0x201148u: goto label_201148;
        case 0x20114cu: goto label_20114c;
        case 0x201150u: goto label_201150;
        case 0x201154u: goto label_201154;
        case 0x201158u: goto label_201158;
        case 0x20115cu: goto label_20115c;
        case 0x201160u: goto label_201160;
        case 0x201164u: goto label_201164;
        case 0x201168u: goto label_201168;
        case 0x20116cu: goto label_20116c;
        case 0x201170u: goto label_201170;
        case 0x201174u: goto label_201174;
        case 0x201178u: goto label_201178;
        case 0x20117cu: goto label_20117c;
        case 0x201180u: goto label_201180;
        case 0x201184u: goto label_201184;
        case 0x201188u: goto label_201188;
        case 0x20118cu: goto label_20118c;
        case 0x201190u: goto label_201190;
        case 0x201194u: goto label_201194;
        case 0x201198u: goto label_201198;
        case 0x20119cu: goto label_20119c;
        case 0x2011a0u: goto label_2011a0;
        case 0x2011a4u: goto label_2011a4;
        case 0x2011a8u: goto label_2011a8;
        case 0x2011acu: goto label_2011ac;
        case 0x2011b0u: goto label_2011b0;
        case 0x2011b4u: goto label_2011b4;
        case 0x2011b8u: goto label_2011b8;
        case 0x2011bcu: goto label_2011bc;
        case 0x2011c0u: goto label_2011c0;
        case 0x2011c4u: goto label_2011c4;
        case 0x2011c8u: goto label_2011c8;
        case 0x2011ccu: goto label_2011cc;
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d4u: goto label_2011d4;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011dcu: goto label_2011dc;
        case 0x2011e0u: goto label_2011e0;
        case 0x2011e4u: goto label_2011e4;
        case 0x2011e8u: goto label_2011e8;
        case 0x2011ecu: goto label_2011ec;
        case 0x2011f0u: goto label_2011f0;
        case 0x2011f4u: goto label_2011f4;
        case 0x2011f8u: goto label_2011f8;
        case 0x2011fcu: goto label_2011fc;
        case 0x201200u: goto label_201200;
        case 0x201204u: goto label_201204;
        case 0x201208u: goto label_201208;
        case 0x20120cu: goto label_20120c;
        case 0x201210u: goto label_201210;
        case 0x201214u: goto label_201214;
        case 0x201218u: goto label_201218;
        case 0x20121cu: goto label_20121c;
        case 0x201220u: goto label_201220;
        case 0x201224u: goto label_201224;
        case 0x201228u: goto label_201228;
        case 0x20122cu: goto label_20122c;
        case 0x201230u: goto label_201230;
        case 0x201234u: goto label_201234;
        case 0x201238u: goto label_201238;
        case 0x20123cu: goto label_20123c;
        default: break;
    }

    ctx->pc = 0x2010c8u;

label_2010c8:
    // 0x2010c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2010c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2010cc:
    // 0x2010cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2010ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2010d0:
    // 0x2010d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2010d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2010d4:
    // 0x2010d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2010d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2010d8:
    // 0x2010d8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2010d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2010dc:
    // 0x2010dc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2010e0:
    if (ctx->pc == 0x2010E0u) {
        ctx->pc = 0x2010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010DCu;
        // 0x2010e0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010E4u;
        goto label_2010e4;
    }
    ctx->pc = 0x2010DCu;
    {
        const bool branch_taken_0x2010dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2010dc) {
            ctx->pc = 0x2010E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2010DCu;
            // 0x2010e0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2010F8u;
            goto label_2010f8;
        }
    }
    ctx->pc = 0x2010E4u;
label_2010e4:
    // 0x2010e4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2010e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2010e8:
    // 0x2010e8: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x2010e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
label_2010ec:
    // 0x2010ec: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2010ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_2010f0:
    // 0x2010f0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2010f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2010f4:
    // 0x2010f4: 0x0  nop
    ctx->pc = 0x2010f4u;
    // NOP
label_2010f8:
    // 0x2010f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2010fc:
    if (ctx->pc == 0x2010FCu) {
        ctx->pc = 0x2010FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010F8u;
        // 0x2010fc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201100u;
        goto label_201100;
    }
    ctx->pc = 0x2010F8u;
    {
        const bool branch_taken_0x2010f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2010f8) {
            ctx->pc = 0x2010FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2010F8u;
            // 0x2010fc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20110Cu;
            goto label_20110c;
        }
    }
    ctx->pc = 0x201100u;
label_201100:
    // 0x201100: 0xc07f5b0  jal         func_1FD6C0
label_201104:
    if (ctx->pc == 0x201104u) {
        ctx->pc = 0x201104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201100u;
        // 0x201104: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201108u;
        goto label_201108;
    }
    ctx->pc = 0x201100u;
    SET_GPR_U32(ctx, 31, 0x201108u);
    ctx->pc = 0x201104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201100u;
    // 0x201104: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x201100u, 0x201108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201108u;
label_201108:
    // 0x201108: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x201108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_20110c:
    // 0x20110c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_201110:
    // 0x201110: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_201114:
    if (ctx->pc == 0x201114u) {
        ctx->pc = 0x201114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201110u;
        // 0x201114: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201118u;
        goto label_201118;
    }
    ctx->pc = 0x201110u;
    {
        const bool branch_taken_0x201110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201110u;
        // 0x201114: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201110) {
            ctx->pc = 0x201130u;
            goto label_201130;
        }
    }
    ctx->pc = 0x201118u;
label_201118:
    // 0x201118: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x201118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_20111c:
    // 0x20111c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_201120:
    if (ctx->pc == 0x201120u) {
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20111Cu;
        // 0x201120: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201124u;
        goto label_201124;
    }
    ctx->pc = 0x20111Cu;
    {
        const bool branch_taken_0x20111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20111c) {
            ctx->pc = 0x201120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20111Cu;
            // 0x201120: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201174u;
            goto label_201174;
        }
    }
    ctx->pc = 0x201124u;
label_201124:
    // 0x201124: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x201124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_201128:
    // 0x201128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20112c:
    if (ctx->pc == 0x20112Cu) {
        ctx->pc = 0x20112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201128u;
        // 0x20112c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201130u;
        goto label_201130;
    }
    ctx->pc = 0x201128u;
    {
        const bool branch_taken_0x201128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201128u;
        // 0x20112c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201128) {
            ctx->pc = 0x201138u;
            goto label_201138;
        }
    }
    ctx->pc = 0x201130u;
label_201130:
    // 0x201130: 0x1000003f  b           . + 4 + (0x3F << 2)
label_201134:
    if (ctx->pc == 0x201134u) {
        ctx->pc = 0x201134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201130u;
        // 0x201134: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201138u;
        goto label_201138;
    }
    ctx->pc = 0x201130u;
    {
        const bool branch_taken_0x201130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201130u;
        // 0x201134: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201130) {
            ctx->pc = 0x201230u;
            goto label_201230;
        }
    }
    ctx->pc = 0x201138u;
label_201138:
    // 0x201138: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20113c:
    if (ctx->pc == 0x20113Cu) {
        ctx->pc = 0x20113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201138u;
        // 0x20113c: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201140u;
        goto label_201140;
    }
    ctx->pc = 0x201138u;
    {
        const bool branch_taken_0x201138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201138u;
        // 0x20113c: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201138) {
            ctx->pc = 0x20116Cu;
            goto label_20116c;
        }
    }
    ctx->pc = 0x201140u;
label_201140:
    // 0x201140: 0xc07f4fc  jal         func_1FD3F0
label_201144:
    if (ctx->pc == 0x201144u) {
        ctx->pc = 0x201144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201140u;
        // 0x201144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201148u;
        goto label_201148;
    }
    ctx->pc = 0x201140u;
    SET_GPR_U32(ctx, 31, 0x201148u);
    ctx->pc = 0x201144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201140u;
    // 0x201144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x201140u, 0x201148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201148u;
label_201148:
    // 0x201148: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_20114c:
    if (ctx->pc == 0x20114Cu) {
        ctx->pc = 0x20114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201148u;
        // 0x20114c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201150u;
        goto label_201150;
    }
    ctx->pc = 0x201148u;
    {
        const bool branch_taken_0x201148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201148u;
        // 0x20114c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201148) {
            ctx->pc = 0x201230u;
            goto label_201230;
        }
    }
    ctx->pc = 0x201150u;
label_201150:
    // 0x201150: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x201150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_201154:
    // 0x201154: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x201154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_201158:
    // 0x201158: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x201158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_20115c:
    // 0x20115c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_201160:
    // 0x201160: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x201160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_201164:
    // 0x201164: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201168:
    // 0x201168: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x201168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_20116c:
    // 0x20116c: 0x1000000f  b           . + 4 + (0xF << 2)
label_201170:
    if (ctx->pc == 0x201170u) {
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20116Cu;
        // 0x201170: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201174u;
        goto label_201174;
    }
    ctx->pc = 0x20116Cu;
    {
        const bool branch_taken_0x20116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20116Cu;
        // 0x201170: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20116c) {
            ctx->pc = 0x2011ACu;
            goto label_2011ac;
        }
    }
    ctx->pc = 0x201174u;
label_201174:
    // 0x201174: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_201178:
    if (ctx->pc == 0x201178u) {
        ctx->pc = 0x201178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201174u;
        // 0x201178: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20117Cu;
        goto label_20117c;
    }
    ctx->pc = 0x201174u;
    {
        const bool branch_taken_0x201174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201174u;
        // 0x201178: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201174) {
            ctx->pc = 0x2011ACu;
            goto label_2011ac;
        }
    }
    ctx->pc = 0x20117Cu;
label_20117c:
    // 0x20117c: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_201180:
    if (ctx->pc == 0x201180u) {
        ctx->pc = 0x201180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20117Cu;
        // 0x201180: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201184u;
        goto label_201184;
    }
    ctx->pc = 0x20117Cu;
    {
        const bool branch_taken_0x20117c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x20117c) {
            ctx->pc = 0x201180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20117Cu;
            // 0x201180: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201190u;
            goto label_201190;
        }
    }
    ctx->pc = 0x201184u;
label_201184:
    // 0x201184: 0xc07f62a  jal         func_1FD8A8
label_201188:
    if (ctx->pc == 0x201188u) {
        ctx->pc = 0x201188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201184u;
        // 0x201188: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20118Cu;
        goto label_20118c;
    }
    ctx->pc = 0x201184u;
    SET_GPR_U32(ctx, 31, 0x20118Cu);
    ctx->pc = 0x201188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201184u;
    // 0x201188: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x201184u, 0x20118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20118Cu;
label_20118c:
    // 0x20118c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_201190:
    // 0x201190: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x201190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_201194:
    // 0x201194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_201198:
    if (ctx->pc == 0x201198u) {
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20119Cu;
        goto label_20119c;
    }
    ctx->pc = 0x201194u;
    {
        const bool branch_taken_0x201194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201194) {
            ctx->pc = 0x2011ACu;
            goto label_2011ac;
        }
    }
    ctx->pc = 0x20119Cu;
label_20119c:
    // 0x20119c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x20119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2011a0:
    // 0x2011a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2011a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2011a4:
    // 0x2011a4: 0x10000022  b           . + 4 + (0x22 << 2)
label_2011a8:
    if (ctx->pc == 0x2011A8u) {
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A4u;
        // 0x2011a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011ACu;
        goto label_2011ac;
    }
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A4u;
        // 0x2011a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x201230u;
            goto label_201230;
        }
    }
    ctx->pc = 0x2011ACu;
label_2011ac:
    // 0x2011ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2011b0:
    // 0x2011b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2011b4:
    if (ctx->pc == 0x2011B4u) {
        ctx->pc = 0x2011B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B0u;
        // 0x2011b4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011B8u;
        goto label_2011b8;
    }
    ctx->pc = 0x2011B0u;
    {
        const bool branch_taken_0x2011b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2011b0) {
            ctx->pc = 0x2011B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2011B0u;
            // 0x2011b4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2011C4u;
            goto label_2011c4;
        }
    }
    ctx->pc = 0x2011B8u;
label_2011b8:
    // 0x2011b8: 0xc07fa3a  jal         func_1FE8E8
label_2011bc:
    if (ctx->pc == 0x2011BCu) {
        ctx->pc = 0x2011BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B8u;
        // 0x2011bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011C0u;
        goto label_2011c0;
    }
    ctx->pc = 0x2011B8u;
    SET_GPR_U32(ctx, 31, 0x2011C0u);
    ctx->pc = 0x2011BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011B8u;
    // 0x2011bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E8u, 0x2011B8u, 0x2011C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011C0u;
label_2011c0:
    // 0x2011c0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2011c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2011c4:
    // 0x2011c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2011c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2011c8:
    // 0x2011c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2011cc:
    if (ctx->pc == 0x2011CCu) {
        ctx->pc = 0x2011CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011C8u;
        // 0x2011cc: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011D0u;
        goto label_2011d0;
    }
    ctx->pc = 0x2011C8u;
    {
        const bool branch_taken_0x2011c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011C8u;
        // 0x2011cc: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011c8) {
            ctx->pc = 0x2011DCu;
            goto label_2011dc;
        }
    }
    ctx->pc = 0x2011D0u;
label_2011d0:
    // 0x2011d0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2011d4:
    // 0x2011d4: 0xc07f9c0  jal         func_1FE700
label_2011d8:
    if (ctx->pc == 0x2011D8u) {
        ctx->pc = 0x2011D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D4u;
        // 0x2011d8: 0x24a510a8  addiu       $a1, $a1, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011DCu;
        goto label_2011dc;
    }
    ctx->pc = 0x2011D4u;
    SET_GPR_U32(ctx, 31, 0x2011DCu);
    ctx->pc = 0x2011D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011D4u;
    // 0x2011d8: 0x24a510a8  addiu       $a1, $a1, 0x10A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE700u, 0x2011D4u, 0x2011DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011DCu;
label_2011dc:
    // 0x2011dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2011e0:
    // 0x2011e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2011e4:
    // 0x2011e4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2011e8:
    // 0x2011e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2011e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2011ec:
    // 0x2011ec: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2011ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2011f0:
    // 0x2011f0: 0x40f809  jalr        $v0
label_2011f4:
    if (ctx->pc == 0x2011F4u) {
        ctx->pc = 0x2011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F0u;
        // 0x2011f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011F8u;
        goto label_2011f8;
    }
    ctx->pc = 0x2011F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2011F8u);
        ctx->pc = 0x2011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F0u;
        // 0x2011f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011F0u, 0x2011F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2011F8u;
label_2011f8:
    // 0x2011f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2011f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2011fc:
    // 0x2011fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2011fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_201200:
    // 0x201200: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x201200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_201204:
    // 0x201204: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x201204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_201208:
    // 0x201208: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_20120c:
    if (ctx->pc == 0x20120Cu) {
        ctx->pc = 0x20120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201208u;
        // 0x20120c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201210u;
        goto label_201210;
    }
    ctx->pc = 0x201208u;
    {
        const bool branch_taken_0x201208 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201208u;
        // 0x20120c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201208) {
            ctx->pc = 0x20122Cu;
            goto label_20122c;
        }
    }
    ctx->pc = 0x201210u;
label_201210:
    // 0x201210: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_201214:
    if (ctx->pc == 0x201214u) {
        ctx->pc = 0x201214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201210u;
        // 0x201214: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201218u;
        goto label_201218;
    }
    ctx->pc = 0x201210u;
    {
        const bool branch_taken_0x201210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201210) {
            ctx->pc = 0x201214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201210u;
            // 0x201214: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x201220u;
            goto label_201220;
        }
    }
    ctx->pc = 0x201218u;
label_201218:
    // 0x201218: 0x10000002  b           . + 4 + (0x2 << 2)
label_20121c:
    if (ctx->pc == 0x20121Cu) {
        ctx->pc = 0x20121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201218u;
        // 0x20121c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201220u;
        goto label_201220;
    }
    ctx->pc = 0x201218u;
    {
        const bool branch_taken_0x201218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201218u;
        // 0x20121c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201218) {
            ctx->pc = 0x201224u;
            goto label_201224;
        }
    }
    ctx->pc = 0x201220u;
label_201220:
    // 0x201220: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x201220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_201224:
    // 0x201224: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_201228:
    if (ctx->pc == 0x201228u) {
        ctx->pc = 0x201228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201224u;
        // 0x201228: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20122Cu;
        goto label_20122c;
    }
    ctx->pc = 0x201224u;
    {
        const bool branch_taken_0x201224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201224u;
        // 0x201228: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201224) {
            ctx->pc = 0x201130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201130;
        }
    }
    ctx->pc = 0x20122Cu;
label_20122c:
    // 0x20122c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20122cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201230:
    // 0x201230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201234:
    // 0x201234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201238:
    // 0x201238: 0x3e00008  jr          $ra
label_20123c:
    if (ctx->pc == 0x20123Cu) {
        ctx->pc = 0x20123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201238u;
        // 0x20123c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201240u;
        goto label_fallthrough_0x201238;
    }
    ctx->pc = 0x201238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201238u;
        // 0x20123c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201238:
    ctx->pc = 0x201240u;
}
