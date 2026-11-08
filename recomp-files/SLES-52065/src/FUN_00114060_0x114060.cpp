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

// Function: FUN_00114060
// Address: 0x114060 - 0x1141d8
void FUN_00114060_0x114060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114060_0x114060");
#endif

    switch (ctx->pc) {
        case 0x114060u: goto label_114060;
        case 0x114064u: goto label_114064;
        case 0x114068u: goto label_114068;
        case 0x11406cu: goto label_11406c;
        case 0x114070u: goto label_114070;
        case 0x114074u: goto label_114074;
        case 0x114078u: goto label_114078;
        case 0x11407cu: goto label_11407c;
        case 0x114080u: goto label_114080;
        case 0x114084u: goto label_114084;
        case 0x114088u: goto label_114088;
        case 0x11408cu: goto label_11408c;
        case 0x114090u: goto label_114090;
        case 0x114094u: goto label_114094;
        case 0x114098u: goto label_114098;
        case 0x11409cu: goto label_11409c;
        case 0x1140a0u: goto label_1140a0;
        case 0x1140a4u: goto label_1140a4;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140acu: goto label_1140ac;
        case 0x1140b0u: goto label_1140b0;
        case 0x1140b4u: goto label_1140b4;
        case 0x1140b8u: goto label_1140b8;
        case 0x1140bcu: goto label_1140bc;
        case 0x1140c0u: goto label_1140c0;
        case 0x1140c4u: goto label_1140c4;
        case 0x1140c8u: goto label_1140c8;
        case 0x1140ccu: goto label_1140cc;
        case 0x1140d0u: goto label_1140d0;
        case 0x1140d4u: goto label_1140d4;
        case 0x1140d8u: goto label_1140d8;
        case 0x1140dcu: goto label_1140dc;
        case 0x1140e0u: goto label_1140e0;
        case 0x1140e4u: goto label_1140e4;
        case 0x1140e8u: goto label_1140e8;
        case 0x1140ecu: goto label_1140ec;
        case 0x1140f0u: goto label_1140f0;
        case 0x1140f4u: goto label_1140f4;
        case 0x1140f8u: goto label_1140f8;
        case 0x1140fcu: goto label_1140fc;
        case 0x114100u: goto label_114100;
        case 0x114104u: goto label_114104;
        case 0x114108u: goto label_114108;
        case 0x11410cu: goto label_11410c;
        case 0x114110u: goto label_114110;
        case 0x114114u: goto label_114114;
        case 0x114118u: goto label_114118;
        case 0x11411cu: goto label_11411c;
        case 0x114120u: goto label_114120;
        case 0x114124u: goto label_114124;
        case 0x114128u: goto label_114128;
        case 0x11412cu: goto label_11412c;
        case 0x114130u: goto label_114130;
        case 0x114134u: goto label_114134;
        case 0x114138u: goto label_114138;
        case 0x11413cu: goto label_11413c;
        case 0x114140u: goto label_114140;
        case 0x114144u: goto label_114144;
        case 0x114148u: goto label_114148;
        case 0x11414cu: goto label_11414c;
        case 0x114150u: goto label_114150;
        case 0x114154u: goto label_114154;
        case 0x114158u: goto label_114158;
        case 0x11415cu: goto label_11415c;
        case 0x114160u: goto label_114160;
        case 0x114164u: goto label_114164;
        case 0x114168u: goto label_114168;
        case 0x11416cu: goto label_11416c;
        case 0x114170u: goto label_114170;
        case 0x114174u: goto label_114174;
        case 0x114178u: goto label_114178;
        case 0x11417cu: goto label_11417c;
        case 0x114180u: goto label_114180;
        case 0x114184u: goto label_114184;
        case 0x114188u: goto label_114188;
        case 0x11418cu: goto label_11418c;
        case 0x114190u: goto label_114190;
        case 0x114194u: goto label_114194;
        case 0x114198u: goto label_114198;
        case 0x11419cu: goto label_11419c;
        case 0x1141a0u: goto label_1141a0;
        case 0x1141a4u: goto label_1141a4;
        case 0x1141a8u: goto label_1141a8;
        case 0x1141acu: goto label_1141ac;
        case 0x1141b0u: goto label_1141b0;
        case 0x1141b4u: goto label_1141b4;
        case 0x1141b8u: goto label_1141b8;
        case 0x1141bcu: goto label_1141bc;
        case 0x1141c0u: goto label_1141c0;
        case 0x1141c4u: goto label_1141c4;
        case 0x1141c8u: goto label_1141c8;
        case 0x1141ccu: goto label_1141cc;
        case 0x1141d0u: goto label_1141d0;
        case 0x1141d4u: goto label_1141d4;
        default: break;
    }

    ctx->pc = 0x114060u;

label_114060:
    // 0x114060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_114064:
    // 0x114064: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x114064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_114068:
    // 0x114068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x114068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11406c:
    // 0x11406c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_114070:
    // 0x114070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x114070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_114074:
    // 0x114074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114078:
    // 0x114078: 0x90840255  lbu         $a0, 0x255($a0)
    ctx->pc = 0x114078u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 597)));
label_11407c:
    // 0x11407c: 0x41fbc  dsll32      $v1, $a0, 30
    ctx->pc = 0x11407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 30));
label_114080:
    // 0x114080: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x114080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_114084:
    // 0x114084: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
label_114088:
    if (ctx->pc == 0x114088u) {
        ctx->pc = 0x114088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114084u;
        // 0x114088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11408Cu;
        goto label_11408c;
    }
    ctx->pc = 0x114084u;
    {
        const bool branch_taken_0x114084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x114088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114084u;
        // 0x114088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114084) {
            ctx->pc = 0x1141C0u;
            goto label_1141c0;
        }
    }
    ctx->pc = 0x11408Cu;
label_11408c:
    // 0x11408c: 0x41f7c  dsll32      $v1, $a0, 29
    ctx->pc = 0x11408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 29));
label_114090:
    // 0x114090: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x114090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_114094:
    // 0x114094: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_114098:
    if (ctx->pc == 0x114098u) {
        ctx->pc = 0x11409Cu;
        goto label_11409c;
    }
    ctx->pc = 0x114094u;
    {
        const bool branch_taken_0x114094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114094) {
            ctx->pc = 0x1141C0u;
            goto label_1141c0;
        }
    }
    ctx->pc = 0x11409Cu;
label_11409c:
    // 0x11409c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x11409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1140a0:
    // 0x1140a0: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x1140a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1140a4:
    // 0x1140a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1140a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1140a8:
    // 0x1140a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1140a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1140ac:
    // 0x1140ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1140acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1140b0:
    // 0x1140b0: 0xa2220255  sb          $v0, 0x255($s1)
    ctx->pc = 0x1140b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 597), (uint8_t)GPR_U32(ctx, 2));
label_1140b4:
    // 0x1140b4: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1140b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1140b8:
    // 0x1140b8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1140b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1140bc:
    // 0x1140bc: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1140bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1140c0:
    // 0x1140c0: 0x320f809  jalr        $t9
label_1140c4:
    if (ctx->pc == 0x1140C4u) {
        ctx->pc = 0x1140C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140C0u;
        // 0x1140c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140C8u;
        goto label_1140c8;
    }
    ctx->pc = 0x1140C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1140C8u);
        ctx->pc = 0x1140C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140C0u;
        // 0x1140c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1140C0u, 0x1140C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1140C8u;
label_1140c8:
    // 0x1140c8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1140c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1140cc:
    // 0x1140cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1140ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1140d0:
    // 0x1140d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1140d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1140d4:
    // 0x1140d4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1140d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1140d8:
    // 0x1140d8: 0x320f809  jalr        $t9
label_1140dc:
    if (ctx->pc == 0x1140DCu) {
        ctx->pc = 0x1140DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140D8u;
        // 0x1140dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140E0u;
        goto label_1140e0;
    }
    ctx->pc = 0x1140D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1140E0u);
        ctx->pc = 0x1140DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140D8u;
        // 0x1140dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1140D8u, 0x1140E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1140E0u;
label_1140e0:
    // 0x1140e0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1140e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1140e4:
    // 0x1140e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1140e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1140e8:
    // 0x1140e8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1140e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1140ec:
    // 0x1140ec: 0x320f809  jalr        $t9
label_1140f0:
    if (ctx->pc == 0x1140F0u) {
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140ECu;
        // 0x1140f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1140F4u;
        goto label_1140f4;
    }
    ctx->pc = 0x1140ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1140F4u);
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140ECu;
        // 0x1140f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1140ECu, 0x1140F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1140F4u;
label_1140f4:
    // 0x1140f4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1140f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1140f8:
    // 0x1140f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1140f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1140fc:
    // 0x1140fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1140fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114100:
    // 0x114100: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114104:
    // 0x114104: 0x320f809  jalr        $t9
label_114108:
    if (ctx->pc == 0x114108u) {
        ctx->pc = 0x114108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114104u;
        // 0x114108: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11410Cu;
        goto label_11410c;
    }
    ctx->pc = 0x114104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11410Cu);
        ctx->pc = 0x114108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114104u;
        // 0x114108: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114104u, 0x11410Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11410Cu;
label_11410c:
    // 0x11410c: 0x8f84824c  lw          $a0, -0x7DB4($gp)
    ctx->pc = 0x11410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_114110:
    // 0x114110: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_114114:
    if (ctx->pc == 0x114114u) {
        ctx->pc = 0x114114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114110u;
        // 0x114114: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114118u;
        goto label_114118;
    }
    ctx->pc = 0x114110u;
    {
        const bool branch_taken_0x114110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x114114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114110u;
        // 0x114114: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114110) {
            ctx->pc = 0x114198u;
            goto label_114198;
        }
    }
    ctx->pc = 0x114118u;
label_114118:
    // 0x114118: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x114118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_11411c:
    // 0x11411c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11411cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_114120:
    // 0x114120: 0xaf83824c  sw          $v1, -0x7DB4($gp)
    ctx->pc = 0x114120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 3));
label_114124:
    // 0x114124: 0x8f83824c  lw          $v1, -0x7DB4($gp)
    ctx->pc = 0x114124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_114128:
    // 0x114128: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_11412c:
    if (ctx->pc == 0x11412Cu) {
        ctx->pc = 0x114130u;
        goto label_114130;
    }
    ctx->pc = 0x114128u;
    {
        const bool branch_taken_0x114128 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x114128) {
            ctx->pc = 0x114134u;
            goto label_114134;
        }
    }
    ctx->pc = 0x114130u;
label_114130:
    // 0x114130: 0xaf80824c  sw          $zero, -0x7DB4($gp)
    ctx->pc = 0x114130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 0));
label_114134:
    // 0x114134: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114138:
    // 0x114138: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x114138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_11413c:
    // 0x11413c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11413cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114140:
    // 0x114140: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x114140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114144:
    // 0x114144: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x114144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_114148:
    // 0x114148: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x114148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_11414c:
    // 0x11414c: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x11414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_114150:
    // 0x114150: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x114150u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_114154:
    // 0x114154: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x114154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_114158:
    // 0x114158: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x114158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_11415c:
    // 0x11415c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11415cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_114160:
    // 0x114160: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x114160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_114164:
    // 0x114164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x114164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_114168:
    // 0x114168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_11416c:
    // 0x11416c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x11416cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_114170:
    // 0x114170: 0x0  nop
    ctx->pc = 0x114170u;
    // NOP
label_114174:
    // 0x114174: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x114174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
label_114178:
    // 0x114178: 0x633be  dsrl32      $a2, $a2, 14
    ctx->pc = 0x114178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 14));
label_11417c:
    // 0x11417c: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
label_114180:
    // 0x114180: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x114180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_114184:
    // 0x114184: 0xae250254  sw          $a1, 0x254($s1)
    ctx->pc = 0x114184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 5));
label_114188:
    // 0x114188: 0x92250255  lbu         $a1, 0x255($s1)
    ctx->pc = 0x114188u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 597)));
label_11418c:
    // 0x11418c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11418cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_114190:
    // 0x114190: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x114190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_114194:
    // 0x114194: 0xa2230255  sb          $v1, 0x255($s1)
    ctx->pc = 0x114194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 597), (uint8_t)GPR_U32(ctx, 3));
label_114198:
    // 0x114198: 0x8f83824c  lw          $v1, -0x7DB4($gp)
    ctx->pc = 0x114198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_11419c:
    // 0x11419c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1141a0:
    if (ctx->pc == 0x1141A0u) {
        ctx->pc = 0x1141A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11419Cu;
        // 0x1141a0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1141A4u;
        goto label_1141a4;
    }
    ctx->pc = 0x11419Cu;
    {
        const bool branch_taken_0x11419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1141A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11419Cu;
        // 0x1141a0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11419c) {
            ctx->pc = 0x1141C0u;
            goto label_1141c0;
        }
    }
    ctx->pc = 0x1141A4u;
label_1141a4:
    // 0x1141a4: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x1141a4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1141a8:
    // 0x1141a8: 0xae230260  sw          $v1, 0x260($s1)
    ctx->pc = 0x1141a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 3));
label_1141ac:
    // 0x1141ac: 0x92250255  lbu         $a1, 0x255($s1)
    ctx->pc = 0x1141acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 597)));
label_1141b0:
    // 0x1141b0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1141b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1141b4:
    // 0x1141b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1141b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1141b8:
    // 0x1141b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1141b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1141bc:
    // 0x1141bc: 0xa2230255  sb          $v1, 0x255($s1)
    ctx->pc = 0x1141bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 597), (uint8_t)GPR_U32(ctx, 3));
label_1141c0:
    // 0x1141c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1141c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1141c4:
    // 0x1141c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1141c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1141c8:
    // 0x1141c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1141c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1141cc:
    // 0x1141cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1141ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1141d0:
    // 0x1141d0: 0x3e00008  jr          $ra
label_1141d4:
    if (ctx->pc == 0x1141D4u) {
        ctx->pc = 0x1141D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141D0u;
        // 0x1141d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1141D8u;
        goto label_fallthrough_0x1141d0;
    }
    ctx->pc = 0x1141D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1141D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141D0u;
        // 0x1141d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1141d0:
    ctx->pc = 0x1141D8u;
}
