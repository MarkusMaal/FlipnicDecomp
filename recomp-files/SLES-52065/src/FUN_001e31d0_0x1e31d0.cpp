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

// Function: FUN_001e31d0
// Address: 0x1e31d0 - 0x1e3304
void FUN_001e31d0_0x1e31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e31d0_0x1e31d0");
#endif

    switch (ctx->pc) {
        case 0x1e31d0u: goto label_1e31d0;
        case 0x1e31d4u: goto label_1e31d4;
        case 0x1e31d8u: goto label_1e31d8;
        case 0x1e31dcu: goto label_1e31dc;
        case 0x1e31e0u: goto label_1e31e0;
        case 0x1e31e4u: goto label_1e31e4;
        case 0x1e31e8u: goto label_1e31e8;
        case 0x1e31ecu: goto label_1e31ec;
        case 0x1e31f0u: goto label_1e31f0;
        case 0x1e31f4u: goto label_1e31f4;
        case 0x1e31f8u: goto label_1e31f8;
        case 0x1e31fcu: goto label_1e31fc;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3204u: goto label_1e3204;
        case 0x1e3208u: goto label_1e3208;
        case 0x1e320cu: goto label_1e320c;
        case 0x1e3210u: goto label_1e3210;
        case 0x1e3214u: goto label_1e3214;
        case 0x1e3218u: goto label_1e3218;
        case 0x1e321cu: goto label_1e321c;
        case 0x1e3220u: goto label_1e3220;
        case 0x1e3224u: goto label_1e3224;
        case 0x1e3228u: goto label_1e3228;
        case 0x1e322cu: goto label_1e322c;
        case 0x1e3230u: goto label_1e3230;
        case 0x1e3234u: goto label_1e3234;
        case 0x1e3238u: goto label_1e3238;
        case 0x1e323cu: goto label_1e323c;
        case 0x1e3240u: goto label_1e3240;
        case 0x1e3244u: goto label_1e3244;
        case 0x1e3248u: goto label_1e3248;
        case 0x1e324cu: goto label_1e324c;
        case 0x1e3250u: goto label_1e3250;
        case 0x1e3254u: goto label_1e3254;
        case 0x1e3258u: goto label_1e3258;
        case 0x1e325cu: goto label_1e325c;
        case 0x1e3260u: goto label_1e3260;
        case 0x1e3264u: goto label_1e3264;
        case 0x1e3268u: goto label_1e3268;
        case 0x1e326cu: goto label_1e326c;
        case 0x1e3270u: goto label_1e3270;
        case 0x1e3274u: goto label_1e3274;
        case 0x1e3278u: goto label_1e3278;
        case 0x1e327cu: goto label_1e327c;
        case 0x1e3280u: goto label_1e3280;
        case 0x1e3284u: goto label_1e3284;
        case 0x1e3288u: goto label_1e3288;
        case 0x1e328cu: goto label_1e328c;
        case 0x1e3290u: goto label_1e3290;
        case 0x1e3294u: goto label_1e3294;
        case 0x1e3298u: goto label_1e3298;
        case 0x1e329cu: goto label_1e329c;
        case 0x1e32a0u: goto label_1e32a0;
        case 0x1e32a4u: goto label_1e32a4;
        case 0x1e32a8u: goto label_1e32a8;
        case 0x1e32acu: goto label_1e32ac;
        case 0x1e32b0u: goto label_1e32b0;
        case 0x1e32b4u: goto label_1e32b4;
        case 0x1e32b8u: goto label_1e32b8;
        case 0x1e32bcu: goto label_1e32bc;
        case 0x1e32c0u: goto label_1e32c0;
        case 0x1e32c4u: goto label_1e32c4;
        case 0x1e32c8u: goto label_1e32c8;
        case 0x1e32ccu: goto label_1e32cc;
        case 0x1e32d0u: goto label_1e32d0;
        case 0x1e32d4u: goto label_1e32d4;
        case 0x1e32d8u: goto label_1e32d8;
        case 0x1e32dcu: goto label_1e32dc;
        case 0x1e32e0u: goto label_1e32e0;
        case 0x1e32e4u: goto label_1e32e4;
        case 0x1e32e8u: goto label_1e32e8;
        case 0x1e32ecu: goto label_1e32ec;
        case 0x1e32f0u: goto label_1e32f0;
        case 0x1e32f4u: goto label_1e32f4;
        case 0x1e32f8u: goto label_1e32f8;
        case 0x1e32fcu: goto label_1e32fc;
        case 0x1e3300u: goto label_1e3300;
        default: break;
    }

    ctx->pc = 0x1e31d0u;

label_1e31d0:
    // 0x1e31d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e31d4:
    // 0x1e31d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e31d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e31d8:
    // 0x1e31d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e31dc:
    // 0x1e31dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e31dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e31e0:
    // 0x1e31e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e31e4:
    // 0x1e31e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e31e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e31e8:
    // 0x1e31e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e31ec:
    // 0x1e31ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e31ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e31f0:
    // 0x1e31f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e31f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e31f4:
    // 0x1e31f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e31f8:
    if (ctx->pc == 0x1E31F8u) {
        ctx->pc = 0x1E31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31F4u;
        // 0x1e31f8: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31FCu;
        goto label_1e31fc;
    }
    ctx->pc = 0x1E31F4u;
    {
        const bool branch_taken_0x1e31f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31F4u;
        // 0x1e31f8: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31f4) {
            ctx->pc = 0x1E3224u;
            goto label_1e3224;
        }
    }
    ctx->pc = 0x1E31FCu;
label_1e31fc:
    // 0x1e31fc: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1e31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3200:
    // 0x1e3200: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e3200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e3204:
    // 0x1e3204: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e3204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e3208:
    // 0x1e3208: 0x2463c098  addiu       $v1, $v1, -0x3F68
    ctx->pc = 0x1e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951064));
label_1e320c:
    // 0x1e320c: 0x2442c0e8  addiu       $v0, $v0, -0x3F18
    ctx->pc = 0x1e320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951144));
label_1e3210:
    // 0x1e3210: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x1e3210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1e3214:
    // 0x1e3214: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e3214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1e3218:
    // 0x1e3218: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e3218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e321c:
    // 0x1e321c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e321cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e3220:
    // 0x1e3220: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1e3220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1e3224:
    // 0x1e3224: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e3224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3228:
    // 0x1e3228: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e3228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_1e322c:
    // 0x1e322c: 0x2484c100  addiu       $a0, $a0, -0x3F00
    ctx->pc = 0x1e322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
label_1e3230:
    // 0x1e3230: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e3234:
    // 0x1e3234: 0x2463c10c  addiu       $v1, $v1, -0x3EF4
    ctx->pc = 0x1e3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951180));
label_1e3238:
    // 0x1e3238: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e3238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e323c:
    // 0x1e323c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e323cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_1e3240:
    // 0x1e3240: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3244:
    // 0x1e3244: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3248:
    // 0x1e3248: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e3248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e324c:
    // 0x1e324c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3250:
    // 0x1e3250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3254:
    // 0x1e3254: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e3258:
    // 0x1e3258: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e3258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e325c:
    // 0x1e325c: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1e325cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1e3260:
    // 0x1e3260: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3264:
    // 0x1e3264: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e3264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3268:
    // 0x1e3268: 0xc078584  jal         func_1E1610
label_1e326c:
    if (ctx->pc == 0x1E326Cu) {
        ctx->pc = 0x1E326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3268u;
        // 0x1e326c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3270u;
        goto label_1e3270;
    }
    ctx->pc = 0x1E3268u;
    SET_GPR_U32(ctx, 31, 0x1E3270u);
    ctx->pc = 0x1E326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3268u;
    // 0x1e326c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1610u, 0x1E3268u, 0x1E3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3270u;
label_1e3270:
    // 0x1e3270: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e3270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e3274:
    // 0x1e3274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3278:
    // 0x1e3278: 0xc04805c  jal         func_120170
label_1e327c:
    if (ctx->pc == 0x1E327Cu) {
        ctx->pc = 0x1E327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3278u;
        // 0x1e327c: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3280u;
        goto label_1e3280;
    }
    ctx->pc = 0x1E3278u;
    SET_GPR_U32(ctx, 31, 0x1E3280u);
    ctx->pc = 0x1E327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3278u;
    // 0x1e327c: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x1E3278u, 0x1E3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3280u;
label_1e3280:
    // 0x1e3280: 0x93828748  lbu         $v0, -0x78B8($gp)
    ctx->pc = 0x1e3280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936392)));
label_1e3284:
    // 0x1e3284: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1e3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e3288:
    // 0x1e3288: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e3288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e328c:
    // 0x1e328c: 0x83a5006c  lb          $a1, 0x6C($sp)
    ctx->pc = 0x1e328cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_1e3290:
    // 0x1e3290: 0xc079750  jal         func_1E5D40
label_1e3294:
    if (ctx->pc == 0x1E3294u) {
        ctx->pc = 0x1E3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3290u;
        // 0x1e3294: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3298u;
        goto label_1e3298;
    }
    ctx->pc = 0x1E3290u;
    SET_GPR_U32(ctx, 31, 0x1E3298u);
    ctx->pc = 0x1E3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3290u;
    // 0x1e3294: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D40u, 0x1E3290u, 0x1E3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3298u;
label_1e3298:
    // 0x1e3298: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e329c:
    // 0x1e329c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e32a0:
    // 0x1e32a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e32a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e32a4:
    // 0x1e32a4: 0x320f809  jalr        $t9
label_1e32a8:
    if (ctx->pc == 0x1E32A8u) {
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32ACu;
        goto label_1e32ac;
    }
    ctx->pc = 0x1E32A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E32ACu);
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32A4u, 0x1E32ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E32ACu;
label_1e32ac:
    // 0x1e32ac: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e32b0:
    // 0x1e32b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e32b4:
    // 0x1e32b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e32b8:
    if (ctx->pc == 0x1E32B8u) {
        ctx->pc = 0x1E32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32B4u;
        // 0x1e32b8: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32BCu;
        goto label_1e32bc;
    }
    ctx->pc = 0x1E32B4u;
    {
        const bool branch_taken_0x1e32b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32B4u;
        // 0x1e32b8: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32b4) {
            ctx->pc = 0x1E32E0u;
            goto label_1e32e0;
        }
    }
    ctx->pc = 0x1E32BCu;
label_1e32bc:
    // 0x1e32bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e32c0:
    // 0x1e32c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e32c4:
    // 0x1e32c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e32c8:
    if (ctx->pc == 0x1E32C8u) {
        ctx->pc = 0x1E32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C4u;
        // 0x1e32c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32CCu;
        goto label_1e32cc;
    }
    ctx->pc = 0x1E32C4u;
    {
        const bool branch_taken_0x1e32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C4u;
        // 0x1e32c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32c4) {
            ctx->pc = 0x1E32E0u;
            goto label_1e32e0;
        }
    }
    ctx->pc = 0x1E32CCu;
label_1e32cc:
    // 0x1e32cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e32ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e32d0:
    // 0x1e32d0: 0xc0483d8  jal         func_120F60
label_1e32d4:
    if (ctx->pc == 0x1E32D4u) {
        ctx->pc = 0x1E32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D0u;
        // 0x1e32d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32D8u;
        goto label_1e32d8;
    }
    ctx->pc = 0x1E32D0u;
    SET_GPR_U32(ctx, 31, 0x1E32D8u);
    ctx->pc = 0x1E32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32D0u;
    // 0x1e32d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E32D0u, 0x1E32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32D8u;
label_1e32d8:
    // 0x1e32d8: 0xc0401a4  jal         func_100690
label_1e32dc:
    if (ctx->pc == 0x1E32DCu) {
        ctx->pc = 0x1E32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D8u;
        // 0x1e32dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32E0u;
        goto label_1e32e0;
    }
    ctx->pc = 0x1E32D8u;
    SET_GPR_U32(ctx, 31, 0x1E32E0u);
    ctx->pc = 0x1E32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32D8u;
    // 0x1e32dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E32D8u, 0x1E32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32E0u;
label_1e32e0:
    // 0x1e32e0: 0xa6130044  sh          $s3, 0x44($s0)
    ctx->pc = 0x1e32e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 19));
label_1e32e4:
    // 0x1e32e4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e32e8:
    // 0x1e32e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e32e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e32ec:
    // 0x1e32ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e32ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e32f0:
    // 0x1e32f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e32f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e32f4:
    // 0x1e32f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e32f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e32f8:
    // 0x1e32f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e32f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e32fc:
    // 0x1e32fc: 0x3e00008  jr          $ra
label_1e3300:
    if (ctx->pc == 0x1E3300u) {
        ctx->pc = 0x1E3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32FCu;
        // 0x1e3300: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3304u;
        goto label_fallthrough_0x1e32fc;
    }
    ctx->pc = 0x1E32FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32FCu;
        // 0x1e3300: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e32fc:
    ctx->pc = 0x1E3304u;
}
