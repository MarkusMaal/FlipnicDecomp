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

// Function: FUN_0012b260
// Address: 0x12b260 - 0x12b318
void FUN_0012b260_0x12b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b260_0x12b260");
#endif

    switch (ctx->pc) {
        case 0x12b260u: goto label_12b260;
        case 0x12b264u: goto label_12b264;
        case 0x12b268u: goto label_12b268;
        case 0x12b26cu: goto label_12b26c;
        case 0x12b270u: goto label_12b270;
        case 0x12b274u: goto label_12b274;
        case 0x12b278u: goto label_12b278;
        case 0x12b27cu: goto label_12b27c;
        case 0x12b280u: goto label_12b280;
        case 0x12b284u: goto label_12b284;
        case 0x12b288u: goto label_12b288;
        case 0x12b28cu: goto label_12b28c;
        case 0x12b290u: goto label_12b290;
        case 0x12b294u: goto label_12b294;
        case 0x12b298u: goto label_12b298;
        case 0x12b29cu: goto label_12b29c;
        case 0x12b2a0u: goto label_12b2a0;
        case 0x12b2a4u: goto label_12b2a4;
        case 0x12b2a8u: goto label_12b2a8;
        case 0x12b2acu: goto label_12b2ac;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2b4u: goto label_12b2b4;
        case 0x12b2b8u: goto label_12b2b8;
        case 0x12b2bcu: goto label_12b2bc;
        case 0x12b2c0u: goto label_12b2c0;
        case 0x12b2c4u: goto label_12b2c4;
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b2ccu: goto label_12b2cc;
        case 0x12b2d0u: goto label_12b2d0;
        case 0x12b2d4u: goto label_12b2d4;
        case 0x12b2d8u: goto label_12b2d8;
        case 0x12b2dcu: goto label_12b2dc;
        case 0x12b2e0u: goto label_12b2e0;
        case 0x12b2e4u: goto label_12b2e4;
        case 0x12b2e8u: goto label_12b2e8;
        case 0x12b2ecu: goto label_12b2ec;
        case 0x12b2f0u: goto label_12b2f0;
        case 0x12b2f4u: goto label_12b2f4;
        case 0x12b2f8u: goto label_12b2f8;
        case 0x12b2fcu: goto label_12b2fc;
        case 0x12b300u: goto label_12b300;
        case 0x12b304u: goto label_12b304;
        case 0x12b308u: goto label_12b308;
        case 0x12b30cu: goto label_12b30c;
        case 0x12b310u: goto label_12b310;
        case 0x12b314u: goto label_12b314;
        default: break;
    }

    ctx->pc = 0x12b260u;

label_12b260:
    // 0x12b260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12b264:
    // 0x12b264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12b268:
    // 0x12b268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12b26c:
    // 0x12b26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12b270:
    // 0x12b270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b274:
    // 0x12b274: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_12b278:
    if (ctx->pc == 0x12B278u) {
        ctx->pc = 0x12B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B274u;
        // 0x12b278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B27Cu;
        goto label_12b27c;
    }
    ctx->pc = 0x12B274u;
    {
        const bool branch_taken_0x12b274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B274u;
        // 0x12b278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b274) {
            ctx->pc = 0x12B300u;
            goto label_12b300;
        }
    }
    ctx->pc = 0x12B27Cu;
label_12b27c:
    // 0x12b27c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_12b280:
    // 0x12b280: 0x24428b60  addiu       $v0, $v0, -0x74A0
    ctx->pc = 0x12b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
label_12b284:
    // 0x12b284: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12b284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12b288:
    // 0x12b288: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_12b28c:
    // 0x12b28c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12b290:
    if (ctx->pc == 0x12B290u) {
        ctx->pc = 0x12B294u;
        goto label_12b294;
    }
    ctx->pc = 0x12B28Cu;
    {
        const bool branch_taken_0x12b28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b28c) {
            ctx->pc = 0x12B2A4u;
            goto label_12b2a4;
        }
    }
    ctx->pc = 0x12B294u;
label_12b294:
    // 0x12b294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b298:
    // 0x12b298: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12b298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12b29c:
    // 0x12b29c: 0x320f809  jalr        $t9
label_12b2a0:
    if (ctx->pc == 0x12B2A0u) {
        ctx->pc = 0x12B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B29Cu;
        // 0x12b2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2A4u;
        goto label_12b2a4;
    }
    ctx->pc = 0x12B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B2A4u);
        ctx->pc = 0x12B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B29Cu;
        // 0x12b2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B29Cu, 0x12B2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B2A4u;
label_12b2a4:
    // 0x12b2a4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x12b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12b2a8:
    // 0x12b2a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12b2ac:
    if (ctx->pc == 0x12B2ACu) {
        ctx->pc = 0x12B2B0u;
        goto label_12b2b0;
    }
    ctx->pc = 0x12B2A8u;
    {
        const bool branch_taken_0x12b2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2a8) {
            ctx->pc = 0x12B2C0u;
            goto label_12b2c0;
        }
    }
    ctx->pc = 0x12B2B0u;
label_12b2b0:
    // 0x12b2b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b2b4:
    // 0x12b2b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12b2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12b2b8:
    // 0x12b2b8: 0x320f809  jalr        $t9
label_12b2bc:
    if (ctx->pc == 0x12B2BCu) {
        ctx->pc = 0x12B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B8u;
        // 0x12b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2C0u;
        goto label_12b2c0;
    }
    ctx->pc = 0x12B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B2C0u);
        ctx->pc = 0x12B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B8u;
        // 0x12b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B2B8u, 0x12B2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B2C0u;
label_12b2c0:
    // 0x12b2c0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_12b2c4:
    // 0x12b2c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12b2c8:
    if (ctx->pc == 0x12B2C8u) {
        ctx->pc = 0x12B2CCu;
        goto label_12b2cc;
    }
    ctx->pc = 0x12B2C4u;
    {
        const bool branch_taken_0x12b2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2c4) {
            ctx->pc = 0x12B2DCu;
            goto label_12b2dc;
        }
    }
    ctx->pc = 0x12B2CCu;
label_12b2cc:
    // 0x12b2cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b2d0:
    // 0x12b2d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12b2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12b2d4:
    // 0x12b2d4: 0x320f809  jalr        $t9
label_12b2d8:
    if (ctx->pc == 0x12B2D8u) {
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2DCu;
        goto label_12b2dc;
    }
    ctx->pc = 0x12B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B2DCu);
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B2D4u, 0x12B2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B2DCu;
label_12b2dc:
    // 0x12b2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b2e0:
    // 0x12b2e0: 0xc04a81c  jal         func_12A070
label_12b2e4:
    if (ctx->pc == 0x12B2E4u) {
        ctx->pc = 0x12B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2E0u;
        // 0x12b2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2E8u;
        goto label_12b2e8;
    }
    ctx->pc = 0x12B2E0u;
    SET_GPR_U32(ctx, 31, 0x12B2E8u);
    ctx->pc = 0x12B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2E0u;
    // 0x12b2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A070u, 0x12B2E0u, 0x12B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2E8u;
label_12b2e8:
    // 0x12b2e8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_12b2ec:
    // 0x12b2ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_12b2f0:
    // 0x12b2f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_12b2f4:
    if (ctx->pc == 0x12B2F4u) {
        ctx->pc = 0x12B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F0u;
        // 0x12b2f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2F8u;
        goto label_12b2f8;
    }
    ctx->pc = 0x12B2F0u;
    {
        const bool branch_taken_0x12b2f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F0u;
        // 0x12b2f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2f0) {
            ctx->pc = 0x12B304u;
            goto label_12b304;
        }
    }
    ctx->pc = 0x12B2F8u;
label_12b2f8:
    // 0x12b2f8: 0xc0401a4  jal         func_100690
label_12b2fc:
    if (ctx->pc == 0x12B2FCu) {
        ctx->pc = 0x12B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2F8u;
        // 0x12b2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B300u;
        goto label_12b300;
    }
    ctx->pc = 0x12B2F8u;
    SET_GPR_U32(ctx, 31, 0x12B300u);
    ctx->pc = 0x12B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2F8u;
    // 0x12b2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12B2F8u, 0x12B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B300u;
label_12b300:
    // 0x12b300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12b300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b304:
    // 0x12b304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12b304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12b308:
    // 0x12b308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b30c:
    // 0x12b30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12b310:
    // 0x12b310: 0x3e00008  jr          $ra
label_12b314:
    if (ctx->pc == 0x12B314u) {
        ctx->pc = 0x12B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B310u;
        // 0x12b314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B318u;
        goto label_fallthrough_0x12b310;
    }
    ctx->pc = 0x12B310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B310u;
        // 0x12b314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b310:
    ctx->pc = 0x12B318u;
}
