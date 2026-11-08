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

// Function: FUN_001e2ff0
// Address: 0x1e2ff0 - 0x1e31cc
void FUN_001e2ff0_0x1e2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2ff0_0x1e2ff0");
#endif

    switch (ctx->pc) {
        case 0x1e2ff0u: goto label_1e2ff0;
        case 0x1e2ff4u: goto label_1e2ff4;
        case 0x1e2ff8u: goto label_1e2ff8;
        case 0x1e2ffcu: goto label_1e2ffc;
        case 0x1e3000u: goto label_1e3000;
        case 0x1e3004u: goto label_1e3004;
        case 0x1e3008u: goto label_1e3008;
        case 0x1e300cu: goto label_1e300c;
        case 0x1e3010u: goto label_1e3010;
        case 0x1e3014u: goto label_1e3014;
        case 0x1e3018u: goto label_1e3018;
        case 0x1e301cu: goto label_1e301c;
        case 0x1e3020u: goto label_1e3020;
        case 0x1e3024u: goto label_1e3024;
        case 0x1e3028u: goto label_1e3028;
        case 0x1e302cu: goto label_1e302c;
        case 0x1e3030u: goto label_1e3030;
        case 0x1e3034u: goto label_1e3034;
        case 0x1e3038u: goto label_1e3038;
        case 0x1e303cu: goto label_1e303c;
        case 0x1e3040u: goto label_1e3040;
        case 0x1e3044u: goto label_1e3044;
        case 0x1e3048u: goto label_1e3048;
        case 0x1e304cu: goto label_1e304c;
        case 0x1e3050u: goto label_1e3050;
        case 0x1e3054u: goto label_1e3054;
        case 0x1e3058u: goto label_1e3058;
        case 0x1e305cu: goto label_1e305c;
        case 0x1e3060u: goto label_1e3060;
        case 0x1e3064u: goto label_1e3064;
        case 0x1e3068u: goto label_1e3068;
        case 0x1e306cu: goto label_1e306c;
        case 0x1e3070u: goto label_1e3070;
        case 0x1e3074u: goto label_1e3074;
        case 0x1e3078u: goto label_1e3078;
        case 0x1e307cu: goto label_1e307c;
        case 0x1e3080u: goto label_1e3080;
        case 0x1e3084u: goto label_1e3084;
        case 0x1e3088u: goto label_1e3088;
        case 0x1e308cu: goto label_1e308c;
        case 0x1e3090u: goto label_1e3090;
        case 0x1e3094u: goto label_1e3094;
        case 0x1e3098u: goto label_1e3098;
        case 0x1e309cu: goto label_1e309c;
        case 0x1e30a0u: goto label_1e30a0;
        case 0x1e30a4u: goto label_1e30a4;
        case 0x1e30a8u: goto label_1e30a8;
        case 0x1e30acu: goto label_1e30ac;
        case 0x1e30b0u: goto label_1e30b0;
        case 0x1e30b4u: goto label_1e30b4;
        case 0x1e30b8u: goto label_1e30b8;
        case 0x1e30bcu: goto label_1e30bc;
        case 0x1e30c0u: goto label_1e30c0;
        case 0x1e30c4u: goto label_1e30c4;
        case 0x1e30c8u: goto label_1e30c8;
        case 0x1e30ccu: goto label_1e30cc;
        case 0x1e30d0u: goto label_1e30d0;
        case 0x1e30d4u: goto label_1e30d4;
        case 0x1e30d8u: goto label_1e30d8;
        case 0x1e30dcu: goto label_1e30dc;
        case 0x1e30e0u: goto label_1e30e0;
        case 0x1e30e4u: goto label_1e30e4;
        case 0x1e30e8u: goto label_1e30e8;
        case 0x1e30ecu: goto label_1e30ec;
        case 0x1e30f0u: goto label_1e30f0;
        case 0x1e30f4u: goto label_1e30f4;
        case 0x1e30f8u: goto label_1e30f8;
        case 0x1e30fcu: goto label_1e30fc;
        case 0x1e3100u: goto label_1e3100;
        case 0x1e3104u: goto label_1e3104;
        case 0x1e3108u: goto label_1e3108;
        case 0x1e310cu: goto label_1e310c;
        case 0x1e3110u: goto label_1e3110;
        case 0x1e3114u: goto label_1e3114;
        case 0x1e3118u: goto label_1e3118;
        case 0x1e311cu: goto label_1e311c;
        case 0x1e3120u: goto label_1e3120;
        case 0x1e3124u: goto label_1e3124;
        case 0x1e3128u: goto label_1e3128;
        case 0x1e312cu: goto label_1e312c;
        case 0x1e3130u: goto label_1e3130;
        case 0x1e3134u: goto label_1e3134;
        case 0x1e3138u: goto label_1e3138;
        case 0x1e313cu: goto label_1e313c;
        case 0x1e3140u: goto label_1e3140;
        case 0x1e3144u: goto label_1e3144;
        case 0x1e3148u: goto label_1e3148;
        case 0x1e314cu: goto label_1e314c;
        case 0x1e3150u: goto label_1e3150;
        case 0x1e3154u: goto label_1e3154;
        case 0x1e3158u: goto label_1e3158;
        case 0x1e315cu: goto label_1e315c;
        case 0x1e3160u: goto label_1e3160;
        case 0x1e3164u: goto label_1e3164;
        case 0x1e3168u: goto label_1e3168;
        case 0x1e316cu: goto label_1e316c;
        case 0x1e3170u: goto label_1e3170;
        case 0x1e3174u: goto label_1e3174;
        case 0x1e3178u: goto label_1e3178;
        case 0x1e317cu: goto label_1e317c;
        case 0x1e3180u: goto label_1e3180;
        case 0x1e3184u: goto label_1e3184;
        case 0x1e3188u: goto label_1e3188;
        case 0x1e318cu: goto label_1e318c;
        case 0x1e3190u: goto label_1e3190;
        case 0x1e3194u: goto label_1e3194;
        case 0x1e3198u: goto label_1e3198;
        case 0x1e319cu: goto label_1e319c;
        case 0x1e31a0u: goto label_1e31a0;
        case 0x1e31a4u: goto label_1e31a4;
        case 0x1e31a8u: goto label_1e31a8;
        case 0x1e31acu: goto label_1e31ac;
        case 0x1e31b0u: goto label_1e31b0;
        case 0x1e31b4u: goto label_1e31b4;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e31bcu: goto label_1e31bc;
        case 0x1e31c0u: goto label_1e31c0;
        case 0x1e31c4u: goto label_1e31c4;
        case 0x1e31c8u: goto label_1e31c8;
        default: break;
    }

    ctx->pc = 0x1e2ff0u;

label_1e2ff0:
    // 0x1e2ff0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e2ff4:
    // 0x1e2ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e2ff8:
    // 0x1e2ff8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1e2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1e2ffc:
    // 0x1e2ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3000:
    // 0x1e3000: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e3000u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e3004:
    // 0x1e3004: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3008:
    // 0x1e3008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e300c:
    // 0x1e300c: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x1e300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_1e3010:
    // 0x1e3010: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e3010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3014:
    // 0x1e3014: 0xc0799b4  jal         func_1E66D0
label_1e3018:
    if (ctx->pc == 0x1E3018u) {
        ctx->pc = 0x1E3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3014u;
        // 0x1e3018: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E301Cu;
        goto label_1e301c;
    }
    ctx->pc = 0x1E3014u;
    SET_GPR_U32(ctx, 31, 0x1E301Cu);
    ctx->pc = 0x1E3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3014u;
    // 0x1e3018: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E66D0u, 0x1E3014u, 0x1E301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E301Cu;
label_1e301c:
    // 0x1e301c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3020:
    // 0x1e3020: 0x27d10071  addiu       $s1, $fp, 0x71
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 113));
label_1e3024:
    // 0x1e3024: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e3024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e3028:
    // 0x1e3028: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e302c:
    // 0x1e302c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1e302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1e3030:
    // 0x1e3030: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
label_1e3034:
    if (ctx->pc == 0x1E3034u) {
        ctx->pc = 0x1E3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3030u;
        // 0x1e3034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3038u;
        goto label_1e3038;
    }
    ctx->pc = 0x1E3030u;
    {
        const bool branch_taken_0x1e3030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3030u;
        // 0x1e3034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3030) {
            ctx->pc = 0x1E3164u;
            goto label_1e3164;
        }
    }
    ctx->pc = 0x1E3038u;
label_1e3038:
    // 0x1e3038: 0xafdd0064  sw          $sp, 0x64($fp)
    ctx->pc = 0x1e3038u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
label_1e303c:
    // 0x1e303c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3040:
    // 0x1e3040: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e3040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e3044:
    // 0x1e3044: 0x320f809  jalr        $t9
label_1e3048:
    if (ctx->pc == 0x1E3048u) {
        ctx->pc = 0x1E304Cu;
        goto label_1e304c;
    }
    ctx->pc = 0x1E3044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E304Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3044u, 0x1E304Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E304Cu;
label_1e304c:
    // 0x1e304c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3050:
    // 0x1e3050: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1e3054:
    if (ctx->pc == 0x1E3054u) {
        ctx->pc = 0x1E3058u;
        goto label_1e3058;
    }
    ctx->pc = 0x1E3050u;
    {
        const bool branch_taken_0x1e3050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3050) {
            ctx->pc = 0x1E30A0u;
            goto label_1e30a0;
        }
    }
    ctx->pc = 0x1E3058u;
label_1e3058:
    // 0x1e3058: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e305c:
    if (ctx->pc == 0x1E305Cu) {
        ctx->pc = 0x1E305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3058u;
        // 0x1e305c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3060u;
        goto label_1e3060;
    }
    ctx->pc = 0x1E3058u;
    {
        const bool branch_taken_0x1e3058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3058u;
        // 0x1e305c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3058) {
            ctx->pc = 0x1E30A0u;
            goto label_1e30a0;
        }
    }
    ctx->pc = 0x1E3060u;
label_1e3060:
    // 0x1e3060: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3064:
    // 0x1e3064: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e3064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1e3068:
    // 0x1e3068: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e3068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1e306c:
    // 0x1e306c: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1e306cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_1e3070:
    // 0x1e3070: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3074:
    // 0x1e3074: 0x9042003b  lbu         $v0, 0x3B($v0)
    ctx->pc = 0x1e3074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
label_1e3078:
    // 0x1e3078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e307c:
    // 0x1e307c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e3080:
    if (ctx->pc == 0x1E3080u) {
        ctx->pc = 0x1E3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E307Cu;
        // 0x1e3080: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3084u;
        goto label_1e3084;
    }
    ctx->pc = 0x1E307Cu;
    {
        const bool branch_taken_0x1e307c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E307Cu;
        // 0x1e3080: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e307c) {
            ctx->pc = 0x1E3098u;
            goto label_1e3098;
        }
    }
    ctx->pc = 0x1E3084u;
label_1e3084:
    // 0x1e3084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e3084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3088:
    // 0x1e3088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e308c:
    // 0x1e308c: 0xc07ab64  jal         func_1EAD90
label_1e3090:
    if (ctx->pc == 0x1E3090u) {
        ctx->pc = 0x1E3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E308Cu;
        // 0x1e3090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3094u;
        goto label_1e3094;
    }
    ctx->pc = 0x1E308Cu;
    SET_GPR_U32(ctx, 31, 0x1E3094u);
    ctx->pc = 0x1E3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E308Cu;
    // 0x1e3090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E308Cu, 0x1E3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3094u;
label_1e3094:
    // 0x1e3094: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x1e3094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_1e3098:
    // 0x1e3098: 0xc07a5c4  jal         func_1E9710
label_1e309c:
    if (ctx->pc == 0x1E309Cu) {
        ctx->pc = 0x1E30A0u;
        goto label_1e30a0;
    }
    ctx->pc = 0x1E3098u;
    SET_GPR_U32(ctx, 31, 0x1E30A0u);
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E3098u, 0x1E30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30A0u;
label_1e30a0:
    // 0x1e30a0: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_1e30a4:
    if (ctx->pc == 0x1E30A4u) {
        ctx->pc = 0x1E30A8u;
        goto label_1e30a8;
    }
    ctx->pc = 0x1E30A0u;
    {
        const bool branch_taken_0x1e30a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e30a0) {
            ctx->pc = 0x1E3164u;
            goto label_1e3164;
        }
    }
    ctx->pc = 0x1E30A8u;
label_1e30a8:
    // 0x1e30a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e30ac:
    // 0x1e30ac: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e30acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1e30b0:
    // 0x1e30b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1e30b4:
    // 0x1e30b4: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1e30b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_1e30b8:
    // 0x1e30b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e30bc:
    // 0x1e30bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e30c0:
    if (ctx->pc == 0x1E30C0u) {
        ctx->pc = 0x1E30C4u;
        goto label_1e30c4;
    }
    ctx->pc = 0x1E30BCu;
    {
        const bool branch_taken_0x1e30bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e30bc) {
            ctx->pc = 0x1E30D0u;
            goto label_1e30d0;
        }
    }
    ctx->pc = 0x1E30C4u;
label_1e30c4:
    // 0x1e30c4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e30c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1e30c8:
    // 0x1e30c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e30c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1e30cc:
    // 0x1e30cc: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1e30ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_1e30d0:
    // 0x1e30d0: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1e30d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
label_1e30d4:
    // 0x1e30d4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e30d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1e30d8:
    // 0x1e30d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e30d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e30dc:
    // 0x1e30dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e30dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e30e0:
    // 0x1e30e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1e30e4:
    if (ctx->pc == 0x1E30E4u) {
        ctx->pc = 0x1E30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30E0u;
        // 0x1e30e4: 0x27c20078  addiu       $v0, $fp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E30E8u;
        goto label_1e30e8;
    }
    ctx->pc = 0x1E30E0u;
    {
        const bool branch_taken_0x1e30e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30E0u;
        // 0x1e30e4: 0x27c20078  addiu       $v0, $fp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30e0) {
            ctx->pc = 0x1E3164u;
            goto label_1e3164;
        }
    }
    ctx->pc = 0x1E30E8u;
label_1e30e8:
    // 0x1e30e8: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
label_1e30ec:
    // 0x1e30ec: 0xafc20088  sw          $v0, 0x88($fp)
    ctx->pc = 0x1e30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 136), GPR_U32(ctx, 2));
label_1e30f0:
    // 0x1e30f0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e30f4:
    // 0x1e30f4: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x1e30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_1e30f8:
    // 0x1e30f8: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40
    ctx->pc = 0x1e30f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
label_1e30fc:
    // 0x1e30fc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1e3100:
    // 0x1e3100: 0x2463c0b0  addiu       $v1, $v1, -0x3F50
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951088));
label_1e3104:
    // 0x1e3104: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
label_1e3108:
    // 0x1e3108: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e3108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1e310c:
    // 0x1e310c: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x1e310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_1e3110:
    // 0x1e3110: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e3110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e3114:
    // 0x1e3114: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x1e3114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_1e3118:
    // 0x1e3118: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1e311c:
    // 0x1e311c: 0xc080748  jal         func_201D20
label_1e3120:
    if (ctx->pc == 0x1E3120u) {
        ctx->pc = 0x1E3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E311Cu;
        // 0x1e3120: 0xafc2008c  sw          $v0, 0x8C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3124u;
        goto label_1e3124;
    }
    ctx->pc = 0x1E311Cu;
    SET_GPR_U32(ctx, 31, 0x1E3124u);
    ctx->pc = 0x1E3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E311Cu;
    // 0x1e3120: 0xafc2008c  sw          $v0, 0x8C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E311Cu, 0x1E3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3124u;
label_1e3124:
    // 0x1e3124: 0xc040168  jal         func_1005A0
label_1e3128:
    if (ctx->pc == 0x1E3128u) {
        ctx->pc = 0x1E3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3124u;
        // 0x1e3128: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E312Cu;
        goto label_1e312c;
    }
    ctx->pc = 0x1E3124u;
    SET_GPR_U32(ctx, 31, 0x1E312Cu);
    ctx->pc = 0x1E3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3124u;
    // 0x1e3128: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E3124u, 0x1E312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E312Cu;
label_1e312c:
    // 0x1e312c: 0x8fc4008c  lw          $a0, 0x8C($fp)
    ctx->pc = 0x1e312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
label_1e3130:
    // 0x1e3130: 0xc0785e0  jal         func_1E1780
label_1e3134:
    if (ctx->pc == 0x1E3134u) {
        ctx->pc = 0x1E3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3130u;
        // 0x1e3134: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3138u;
        goto label_1e3138;
    }
    ctx->pc = 0x1E3130u;
    SET_GPR_U32(ctx, 31, 0x1E3138u);
    ctx->pc = 0x1E3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3130u;
    // 0x1e3134: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E3130u, 0x1E3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3138u;
label_1e3138:
    // 0x1e3138: 0x8fc2008c  lw          $v0, 0x8C($fp)
    ctx->pc = 0x1e3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
label_1e313c:
    // 0x1e313c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e313cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1e3140:
    // 0x1e3140: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e3140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3144:
    // 0x1e3144: 0xc080702  jal         func_201C08
label_1e3148:
    if (ctx->pc == 0x1E3148u) {
        ctx->pc = 0x1E3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3144u;
        // 0x1e3148: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E314Cu;
        goto label_1e314c;
    }
    ctx->pc = 0x1E3144u;
    SET_GPR_U32(ctx, 31, 0x1E314Cu);
    ctx->pc = 0x1E3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3144u;
    // 0x1e3148: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E3144u, 0x1E314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E314Cu;
label_1e314c:
    // 0x1e314c: 0x8fc50088  lw          $a1, 0x88($fp)
    ctx->pc = 0x1e314cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_1e3150:
    // 0x1e3150: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e3150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1e3154:
    // 0x1e3154: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e3154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e3158:
    // 0x1e3158: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x1e3158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
label_1e315c:
    // 0x1e315c: 0xc07ab64  jal         func_1EAD90
label_1e3160:
    if (ctx->pc == 0x1E3160u) {
        ctx->pc = 0x1E3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E315Cu;
        // 0x1e3160: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3164u;
        goto label_1e3164;
    }
    ctx->pc = 0x1E315Cu;
    SET_GPR_U32(ctx, 31, 0x1E3164u);
    ctx->pc = 0x1E3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E315Cu;
    // 0x1e3160: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E315Cu, 0x1E3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3164u;
label_1e3164:
    // 0x1e3164: 0x8fc40074  lw          $a0, 0x74($fp)
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_1e3168:
    // 0x1e3168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e316c:
    // 0x1e316c: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e316cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1e3170:
    // 0x1e3170: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x1e3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_1e3174:
    // 0x1e3174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3178:
    // 0x1e3178: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e317c:
    if (ctx->pc == 0x1E317Cu) {
        ctx->pc = 0x1E317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3178u;
        // 0x1e317c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3180u;
        goto label_1e3180;
    }
    ctx->pc = 0x1E3178u;
    {
        const bool branch_taken_0x1e3178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3178u;
        // 0x1e317c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3178) {
            ctx->pc = 0x1E31ACu;
            goto label_1e31ac;
        }
    }
    ctx->pc = 0x1E3180u;
label_1e3180:
    // 0x1e3180: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x1e3180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e3184:
    // 0x1e3184: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1e3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1e3188:
    // 0x1e3188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e3188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1e318c:
    // 0x1e318c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e3190:
    if (ctx->pc == 0x1E3190u) {
        ctx->pc = 0x1E3194u;
        goto label_1e3194;
    }
    ctx->pc = 0x1E318Cu;
    {
        const bool branch_taken_0x1e318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e318c) {
            ctx->pc = 0x1E31A8u;
            goto label_1e31a8;
        }
    }
    ctx->pc = 0x1E3194u;
label_1e3194:
    // 0x1e3194: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1e3194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e3198:
    // 0x1e3198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e319c:
    if (ctx->pc == 0x1E319Cu) {
        ctx->pc = 0x1E31A0u;
        goto label_1e31a0;
    }
    ctx->pc = 0x1E3198u;
    {
        const bool branch_taken_0x1e3198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3198) {
            ctx->pc = 0x1E31A8u;
            goto label_1e31a8;
        }
    }
    ctx->pc = 0x1E31A0u;
label_1e31a0:
    // 0x1e31a0: 0xc078bfc  jal         func_1E2FF0
label_1e31a4:
    if (ctx->pc == 0x1E31A4u) {
        ctx->pc = 0x1E31A8u;
        goto label_1e31a8;
    }
    ctx->pc = 0x1E31A0u;
    SET_GPR_U32(ctx, 31, 0x1E31A8u);
    ctx->pc = 0x1E2FF0u;
    goto label_1e2ff0;
    ctx->pc = 0x1E31A8u;
label_1e31a8:
    // 0x1e31a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e31a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e31ac:
    // 0x1e31ac: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e31acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e31b0:
    // 0x1e31b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e31b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e31b4:
    // 0x1e31b4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1e31b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e31b8:
    // 0x1e31b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e31b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e31bc:
    // 0x1e31bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e31bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e31c0:
    // 0x1e31c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e31c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e31c4:
    // 0x1e31c4: 0x3e00008  jr          $ra
label_1e31c8:
    if (ctx->pc == 0x1E31C8u) {
        ctx->pc = 0x1E31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31C4u;
        // 0x1e31c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31CCu;
        goto label_fallthrough_0x1e31c4;
    }
    ctx->pc = 0x1E31C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31C4u;
        // 0x1e31c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E31C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e31c4:
    ctx->pc = 0x1E31CCu;
}
