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

// Function: FUN_001a3000
// Address: 0x1a3000 - 0x1a31cc
void FUN_001a3000_0x1a3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3000_0x1a3000");
#endif

    switch (ctx->pc) {
        case 0x1a3000u: goto label_1a3000;
        case 0x1a3004u: goto label_1a3004;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3014u: goto label_1a3014;
        case 0x1a3018u: goto label_1a3018;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3020u: goto label_1a3020;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3028u: goto label_1a3028;
        case 0x1a302cu: goto label_1a302c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a3034u: goto label_1a3034;
        case 0x1a3038u: goto label_1a3038;
        case 0x1a303cu: goto label_1a303c;
        case 0x1a3040u: goto label_1a3040;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a3048u: goto label_1a3048;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a3050u: goto label_1a3050;
        case 0x1a3054u: goto label_1a3054;
        case 0x1a3058u: goto label_1a3058;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3060u: goto label_1a3060;
        case 0x1a3064u: goto label_1a3064;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a306cu: goto label_1a306c;
        case 0x1a3070u: goto label_1a3070;
        case 0x1a3074u: goto label_1a3074;
        case 0x1a3078u: goto label_1a3078;
        case 0x1a307cu: goto label_1a307c;
        case 0x1a3080u: goto label_1a3080;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a3088u: goto label_1a3088;
        case 0x1a308cu: goto label_1a308c;
        case 0x1a3090u: goto label_1a3090;
        case 0x1a3094u: goto label_1a3094;
        case 0x1a3098u: goto label_1a3098;
        case 0x1a309cu: goto label_1a309c;
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30a4u: goto label_1a30a4;
        case 0x1a30a8u: goto label_1a30a8;
        case 0x1a30acu: goto label_1a30ac;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30b4u: goto label_1a30b4;
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30bcu: goto label_1a30bc;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30c4u: goto label_1a30c4;
        case 0x1a30c8u: goto label_1a30c8;
        case 0x1a30ccu: goto label_1a30cc;
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30dcu: goto label_1a30dc;
        case 0x1a30e0u: goto label_1a30e0;
        case 0x1a30e4u: goto label_1a30e4;
        case 0x1a30e8u: goto label_1a30e8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a30f0u: goto label_1a30f0;
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a30fcu: goto label_1a30fc;
        case 0x1a3100u: goto label_1a3100;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3110u: goto label_1a3110;
        case 0x1a3114u: goto label_1a3114;
        case 0x1a3118u: goto label_1a3118;
        case 0x1a311cu: goto label_1a311c;
        case 0x1a3120u: goto label_1a3120;
        case 0x1a3124u: goto label_1a3124;
        case 0x1a3128u: goto label_1a3128;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a3134u: goto label_1a3134;
        case 0x1a3138u: goto label_1a3138;
        case 0x1a313cu: goto label_1a313c;
        case 0x1a3140u: goto label_1a3140;
        case 0x1a3144u: goto label_1a3144;
        case 0x1a3148u: goto label_1a3148;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a3150u: goto label_1a3150;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3158u: goto label_1a3158;
        case 0x1a315cu: goto label_1a315c;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a3164u: goto label_1a3164;
        case 0x1a3168u: goto label_1a3168;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a3170u: goto label_1a3170;
        case 0x1a3174u: goto label_1a3174;
        case 0x1a3178u: goto label_1a3178;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3180u: goto label_1a3180;
        case 0x1a3184u: goto label_1a3184;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a3190u: goto label_1a3190;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a3198u: goto label_1a3198;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31a0u: goto label_1a31a0;
        case 0x1a31a4u: goto label_1a31a4;
        case 0x1a31a8u: goto label_1a31a8;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b0u: goto label_1a31b0;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31c4u: goto label_1a31c4;
        case 0x1a31c8u: goto label_1a31c8;
        default: break;
    }

    ctx->pc = 0x1a3000u;

label_1a3000:
    // 0x1a3000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3004:
    // 0x1a3004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a3008:
    // 0x1a3008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a300c:
    // 0x1a300c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3010:
    // 0x1a3010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3014:
    // 0x1a3014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3018:
    // 0x1a3018: 0xc069a24  jal         func_1A6890
label_1a301c:
    if (ctx->pc == 0x1A301Cu) {
        ctx->pc = 0x1A301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3018u;
        // 0x1a301c: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3020u;
        goto label_1a3020;
    }
    ctx->pc = 0x1A3018u;
    SET_GPR_U32(ctx, 31, 0x1A3020u);
    ctx->pc = 0x1A301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3018u;
    // 0x1a301c: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6890u, 0x1A3018u, 0x1A3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3020u;
label_1a3020:
    // 0x1a3020: 0xc063dd4  jal         func_18F750
label_1a3024:
    if (ctx->pc == 0x1A3024u) {
        ctx->pc = 0x1A3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3020u;
        // 0x1a3024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3028u;
        goto label_1a3028;
    }
    ctx->pc = 0x1A3020u;
    SET_GPR_U32(ctx, 31, 0x1A3028u);
    ctx->pc = 0x1A3024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3020u;
    // 0x1a3024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A3020u, 0x1A3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3028u;
label_1a3028:
    // 0x1a3028: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a3028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a302c:
    // 0x1a302c: 0x10430057  beq         $v0, $v1, . + 4 + (0x57 << 2)
label_1a3030:
    if (ctx->pc == 0x1A3030u) {
        ctx->pc = 0x1A3034u;
        goto label_1a3034;
    }
    ctx->pc = 0x1A302Cu;
    {
        const bool branch_taken_0x1a302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a302c) {
            ctx->pc = 0x1A318Cu;
            goto label_1a318c;
        }
    }
    ctx->pc = 0x1A3034u;
label_1a3034:
    // 0x1a3034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3038:
    // 0x1a3038: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
label_1a303c:
    if (ctx->pc == 0x1A303Cu) {
        ctx->pc = 0x1A3040u;
        goto label_1a3040;
    }
    ctx->pc = 0x1A3038u;
    {
        const bool branch_taken_0x1a3038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3038) {
            ctx->pc = 0x1A3144u;
            goto label_1a3144;
        }
    }
    ctx->pc = 0x1A3040u;
label_1a3040:
    // 0x1a3040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3044:
    // 0x1a3044: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_1a3048:
    if (ctx->pc == 0x1A3048u) {
        ctx->pc = 0x1A304Cu;
        goto label_1a304c;
    }
    ctx->pc = 0x1A3044u;
    {
        const bool branch_taken_0x1a3044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3044) {
            ctx->pc = 0x1A30D0u;
            goto label_1a30d0;
        }
    }
    ctx->pc = 0x1A304Cu;
label_1a304c:
    // 0x1a304c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a3050:
    if (ctx->pc == 0x1A3050u) {
        ctx->pc = 0x1A3054u;
        goto label_1a3054;
    }
    ctx->pc = 0x1A304Cu;
    {
        const bool branch_taken_0x1a304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a304c) {
            ctx->pc = 0x1A305Cu;
            goto label_1a305c;
        }
    }
    ctx->pc = 0x1A3054u;
label_1a3054:
    // 0x1a3054: 0x10000059  b           . + 4 + (0x59 << 2)
label_1a3058:
    if (ctx->pc == 0x1A3058u) {
        ctx->pc = 0x1A3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3054u;
        // 0x1a3058: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A305Cu;
        goto label_1a305c;
    }
    ctx->pc = 0x1A3054u;
    {
        const bool branch_taken_0x1a3054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3054u;
        // 0x1a3058: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3054) {
            ctx->pc = 0x1A31BCu;
            goto label_1a31bc;
        }
    }
    ctx->pc = 0x1A305Cu;
label_1a305c:
    // 0x1a305c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a3060:
    // 0x1a3060: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a3064:
    // 0x1a3064: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a3064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1a3068:
    // 0x1a3068: 0x24a50460  addiu       $a1, $a1, 0x460
    ctx->pc = 0x1a3068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
label_1a306c:
    // 0x1a306c: 0x24c60470  addiu       $a2, $a2, 0x470
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1136));
label_1a3070:
    // 0x1a3070: 0xa04328f5  sb          $v1, 0x28F5($v0)
    ctx->pc = 0x1a3070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10485), (uint8_t)GPR_U32(ctx, 3));
label_1a3074:
    // 0x1a3074: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a3078:
    // 0x1a3078: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a307c:
    // 0x1a307c: 0xaf82862c  sw          $v0, -0x79D4($gp)
    ctx->pc = 0x1a307cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936108), GPR_U32(ctx, 2));
label_1a3080:
    // 0x1a3080: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_1a3084:
    // 0x1a3084: 0xa220067c  sb          $zero, 0x67C($s1)
    ctx->pc = 0x1a3084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1660), (uint8_t)GPR_U32(ctx, 0));
label_1a3088:
    // 0x1a3088: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a3088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1a308c:
    // 0x1a308c: 0xc06cf34  jal         func_1B3CD0
label_1a3090:
    if (ctx->pc == 0x1A3090u) {
        ctx->pc = 0x1A3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A308Cu;
        // 0x1a3090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3094u;
        goto label_1a3094;
    }
    ctx->pc = 0x1A308Cu;
    SET_GPR_U32(ctx, 31, 0x1A3094u);
    ctx->pc = 0x1A3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A308Cu;
    // 0x1a3090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A308Cu, 0x1A3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3094u;
label_1a3094:
    // 0x1a3094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a3094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3098:
    // 0x1a3098: 0xc0699f0  jal         func_1A67C0
label_1a309c:
    if (ctx->pc == 0x1A309Cu) {
        ctx->pc = 0x1A309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3098u;
        // 0x1a309c: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30A0u;
        goto label_1a30a0;
    }
    ctx->pc = 0x1A3098u;
    SET_GPR_U32(ctx, 31, 0x1A30A0u);
    ctx->pc = 0x1A309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3098u;
    // 0x1a309c: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A67C0u, 0x1A3098u, 0x1A30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30A0u;
label_1a30a0:
    // 0x1a30a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1a30a4:
    // 0x1a30a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a30a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a30a8:
    // 0x1a30a8: 0xc0699e0  jal         func_1A6780
label_1a30ac:
    if (ctx->pc == 0x1A30ACu) {
        ctx->pc = 0x1A30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30A8u;
        // 0x1a30ac: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30B0u;
        goto label_1a30b0;
    }
    ctx->pc = 0x1A30A8u;
    SET_GPR_U32(ctx, 31, 0x1A30B0u);
    ctx->pc = 0x1A30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30A8u;
    // 0x1a30ac: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x1A30A8u, 0x1A30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30B0u;
label_1a30b0:
    // 0x1a30b0: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a30b4:
    // 0x1a30b4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a30b8:
    // 0x1a30b8: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a30b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a30bc:
    // 0x1a30bc: 0xc057040  jal         func_15C100
label_1a30c0:
    if (ctx->pc == 0x1A30C0u) {
        ctx->pc = 0x1A30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30BCu;
        // 0x1a30c0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30C4u;
        goto label_1a30c4;
    }
    ctx->pc = 0x1A30BCu;
    SET_GPR_U32(ctx, 31, 0x1A30C4u);
    ctx->pc = 0x1A30C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30BCu;
    // 0x1a30c0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A30BCu, 0x1A30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30C4u;
label_1a30c4:
    // 0x1a30c4: 0xae220684  sw          $v0, 0x684($s1)
    ctx->pc = 0x1a30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 2));
label_1a30c8:
    // 0x1a30c8: 0xc063e14  jal         func_18F850
label_1a30cc:
    if (ctx->pc == 0x1A30CCu) {
        ctx->pc = 0x1A30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C8u;
        // 0x1a30cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30D0u;
        goto label_1a30d0;
    }
    ctx->pc = 0x1A30C8u;
    SET_GPR_U32(ctx, 31, 0x1A30D0u);
    ctx->pc = 0x1A30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30C8u;
    // 0x1a30cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A30C8u, 0x1A30D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30D0u;
label_1a30d0:
    // 0x1a30d0: 0x8e230684  lw          $v1, 0x684($s1)
    ctx->pc = 0x1a30d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a30d4:
    // 0x1a30d4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a30d8:
    // 0x1a30d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a30d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a30dc:
    // 0x1a30dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a30e0:
    // 0x1a30e0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a30e4:
    // 0x1a30e4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a30e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a30e8:
    // 0x1a30e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1a30e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1a30ec:
    // 0x1a30ec: 0x320f809  jalr        $t9
label_1a30f0:
    if (ctx->pc == 0x1A30F0u) {
        ctx->pc = 0x1A30F4u;
        goto label_1a30f4;
    }
    ctx->pc = 0x1A30ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A30F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A30ECu, 0x1A30F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A30F4u;
label_1a30f4:
    // 0x1a30f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a30f8:
    if (ctx->pc == 0x1A30F8u) {
        ctx->pc = 0x1A30FCu;
        goto label_1a30fc;
    }
    ctx->pc = 0x1A30F4u;
    {
        const bool branch_taken_0x1a30f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a30f4) {
            ctx->pc = 0x1A3114u;
            goto label_1a3114;
        }
    }
    ctx->pc = 0x1A30FCu;
label_1a30fc:
    // 0x1a30fc: 0xc069a9c  jal         func_1A6A70
label_1a3100:
    if (ctx->pc == 0x1A3100u) {
        ctx->pc = 0x1A3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30FCu;
        // 0x1a3100: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3104u;
        goto label_1a3104;
    }
    ctx->pc = 0x1A30FCu;
    SET_GPR_U32(ctx, 31, 0x1A3104u);
    ctx->pc = 0x1A3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30FCu;
    // 0x1a3100: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A30FCu, 0x1A3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3104u;
label_1a3104:
    // 0x1a3104: 0xc063e14  jal         func_18F850
label_1a3108:
    if (ctx->pc == 0x1A3108u) {
        ctx->pc = 0x1A3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3104u;
        // 0x1a3108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A310Cu;
        goto label_1a310c;
    }
    ctx->pc = 0x1A3104u;
    SET_GPR_U32(ctx, 31, 0x1A310Cu);
    ctx->pc = 0x1A3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3104u;
    // 0x1a3108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A3104u, 0x1A310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A310Cu;
label_1a310c:
    // 0x1a310c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a3110:
    if (ctx->pc == 0x1A3110u) {
        ctx->pc = 0x1A3114u;
        goto label_1a3114;
    }
    ctx->pc = 0x1A310Cu;
    {
        const bool branch_taken_0x1a310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a310c) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A3114u;
label_1a3114:
    // 0x1a3114: 0x9223067c  lbu         $v1, 0x67C($s1)
    ctx->pc = 0x1a3114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a3118:
    // 0x1a3118: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1a311c:
    if (ctx->pc == 0x1A311Cu) {
        ctx->pc = 0x1A3120u;
        goto label_1a3120;
    }
    ctx->pc = 0x1A3118u;
    {
        const bool branch_taken_0x1a3118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3118) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A3120u;
label_1a3120:
    // 0x1a3120: 0xc069a9c  jal         func_1A6A70
label_1a3124:
    if (ctx->pc == 0x1A3124u) {
        ctx->pc = 0x1A3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3120u;
        // 0x1a3124: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3128u;
        goto label_1a3128;
    }
    ctx->pc = 0x1A3120u;
    SET_GPR_U32(ctx, 31, 0x1A3128u);
    ctx->pc = 0x1A3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3120u;
    // 0x1a3124: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A3120u, 0x1A3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3128u;
label_1a3128:
    // 0x1a3128: 0xc058018  jal         func_160060
label_1a312c:
    if (ctx->pc == 0x1A312Cu) {
        ctx->pc = 0x1A312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3128u;
        // 0x1a312c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3130u;
        goto label_1a3130;
    }
    ctx->pc = 0x1A3128u;
    SET_GPR_U32(ctx, 31, 0x1A3130u);
    ctx->pc = 0x1A312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3128u;
    // 0x1a312c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1A3128u, 0x1A3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3130u;
label_1a3130:
    // 0x1a3130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3134:
    // 0x1a3134: 0xc063e08  jal         func_18F820
label_1a3138:
    if (ctx->pc == 0x1A3138u) {
        ctx->pc = 0x1A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3134u;
        // 0x1a3138: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A313Cu;
        goto label_1a313c;
    }
    ctx->pc = 0x1A3134u;
    SET_GPR_U32(ctx, 31, 0x1A313Cu);
    ctx->pc = 0x1A3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3134u;
    // 0x1a3138: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A3134u, 0x1A313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A313Cu;
label_1a313c:
    // 0x1a313c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a3140:
    if (ctx->pc == 0x1A3140u) {
        ctx->pc = 0x1A3144u;
        goto label_1a3144;
    }
    ctx->pc = 0x1A313Cu;
    {
        const bool branch_taken_0x1a313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a313c) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A3144u;
label_1a3144:
    // 0x1a3144: 0x8e230684  lw          $v1, 0x684($s1)
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a3148:
    // 0x1a3148: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a314c:
    // 0x1a314c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3150:
    // 0x1a3150: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a3150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3154:
    // 0x1a3154: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a3154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a3158:
    // 0x1a3158: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a3158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a315c:
    // 0x1a315c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1a3160:
    // 0x1a3160: 0x320f809  jalr        $t9
label_1a3164:
    if (ctx->pc == 0x1A3164u) {
        ctx->pc = 0x1A3168u;
        goto label_1a3168;
    }
    ctx->pc = 0x1A3160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3168u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3160u, 0x1A3168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3168u;
label_1a3168:
    // 0x1a3168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a316c:
    // 0x1a316c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1a3170:
    if (ctx->pc == 0x1A3170u) {
        ctx->pc = 0x1A3174u;
        goto label_1a3174;
    }
    ctx->pc = 0x1A316Cu;
    {
        const bool branch_taken_0x1a316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a316c) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A3174u;
label_1a3174:
    // 0x1a3174: 0xc069a9c  jal         func_1A6A70
label_1a3178:
    if (ctx->pc == 0x1A3178u) {
        ctx->pc = 0x1A3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3174u;
        // 0x1a3178: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A317Cu;
        goto label_1a317c;
    }
    ctx->pc = 0x1A3174u;
    SET_GPR_U32(ctx, 31, 0x1A317Cu);
    ctx->pc = 0x1A3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3174u;
    // 0x1a3178: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A3174u, 0x1A317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A317Cu;
label_1a317c:
    // 0x1a317c: 0xc063e14  jal         func_18F850
label_1a3180:
    if (ctx->pc == 0x1A3180u) {
        ctx->pc = 0x1A3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A317Cu;
        // 0x1a3180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3184u;
        goto label_1a3184;
    }
    ctx->pc = 0x1A317Cu;
    SET_GPR_U32(ctx, 31, 0x1A3184u);
    ctx->pc = 0x1A3180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A317Cu;
    // 0x1a3180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A317Cu, 0x1A3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3184u;
label_1a3184:
    // 0x1a3184: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a3188:
    if (ctx->pc == 0x1A3188u) {
        ctx->pc = 0x1A318Cu;
        goto label_1a318c;
    }
    ctx->pc = 0x1A3184u;
    {
        const bool branch_taken_0x1a3184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3184) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A318Cu;
label_1a318c:
    // 0x1a318c: 0x9223067c  lbu         $v1, 0x67C($s1)
    ctx->pc = 0x1a318cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a3190:
    // 0x1a3190: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1a3194:
    if (ctx->pc == 0x1A3194u) {
        ctx->pc = 0x1A3198u;
        goto label_1a3198;
    }
    ctx->pc = 0x1A3190u;
    {
        const bool branch_taken_0x1a3190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3190) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A3198u;
label_1a3198:
    // 0x1a3198: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a319c:
    // 0x1a319c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1a31a0:
    if (ctx->pc == 0x1A31A0u) {
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31A4u;
        goto label_1a31a4;
    }
    ctx->pc = 0x1A319Cu;
    {
        const bool branch_taken_0x1a319c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a319c) {
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A31A4u;
label_1a31a4:
    // 0x1a31a4: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a31a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a31a8:
    // 0x1a31a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a31a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a31ac:
    // 0x1a31ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a31b0:
    // 0x1a31b0: 0x320f809  jalr        $t9
label_1a31b4:
    if (ctx->pc == 0x1A31B4u) {
        ctx->pc = 0x1A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B0u;
        // 0x1a31b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31B8u;
        goto label_1a31b8;
    }
    ctx->pc = 0x1A31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A31B8u);
        ctx->pc = 0x1A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B0u;
        // 0x1a31b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31B0u, 0x1A31B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A31B8u;
label_1a31b8:
    // 0x1a31b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a31b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a31bc:
    // 0x1a31bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a31bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a31c0:
    // 0x1a31c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a31c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a31c4:
    // 0x1a31c4: 0x3e00008  jr          $ra
label_1a31c8:
    if (ctx->pc == 0x1A31C8u) {
        ctx->pc = 0x1A31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C4u;
        // 0x1a31c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31CCu;
        goto label_fallthrough_0x1a31c4;
    }
    ctx->pc = 0x1A31C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C4u;
        // 0x1a31c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a31c4:
    ctx->pc = 0x1A31CCu;
}
