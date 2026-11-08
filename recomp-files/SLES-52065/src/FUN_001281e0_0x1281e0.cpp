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

// Function: FUN_001281e0
// Address: 0x1281e0 - 0x129448
void FUN_001281e0_0x1281e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001281e0_0x1281e0");
#endif

    switch (ctx->pc) {
        case 0x128218u: goto label_128218;
        case 0x12822cu: goto label_12822c;
        case 0x1282b4u: goto label_1282b4;
        case 0x1282bcu: goto label_1282bc;
        case 0x1282ccu: goto label_1282cc;
        case 0x1282ecu: goto label_1282ec;
        case 0x1282f4u: goto label_1282f4;
        case 0x128318u: goto label_128318;
        case 0x128340u: goto label_128340;
        case 0x128384u: goto label_128384;
        case 0x1283f0u: goto label_1283f0;
        case 0x128408u: goto label_128408;
        case 0x1284b4u: goto label_1284b4;
        case 0x1284f8u: goto label_1284f8;
        case 0x12850cu: goto label_12850c;
        case 0x1285b0u: goto label_1285b0;
        case 0x1285c8u: goto label_1285c8;
        case 0x12860cu: goto label_12860c;
        case 0x128614u: goto label_128614;
        case 0x128654u: goto label_128654;
        case 0x128684u: goto label_128684;
        case 0x128690u: goto label_128690;
        case 0x128800u: goto label_128800;
        case 0x128810u: goto label_128810;
        case 0x128820u: goto label_128820;
        case 0x128864u: goto label_128864;
        case 0x128884u: goto label_128884;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288ecu: goto label_1288ec;
        case 0x12893cu: goto label_12893c;
        case 0x128a60u: goto label_128a60;
        case 0x128a70u: goto label_128a70;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a84u: goto label_128a84;
        case 0x128a98u: goto label_128a98;
        case 0x128aacu: goto label_128aac;
        case 0x128afcu: goto label_128afc;
        case 0x128b54u: goto label_128b54;
        case 0x128be8u: goto label_128be8;
        case 0x128bf4u: goto label_128bf4;
        case 0x128c14u: goto label_128c14;
        case 0x128c28u: goto label_128c28;
        case 0x128c40u: goto label_128c40;
        case 0x128c5cu: goto label_128c5c;
        case 0x128c7cu: goto label_128c7c;
        case 0x128ca0u: goto label_128ca0;
        case 0x128cb8u: goto label_128cb8;
        case 0x128d10u: goto label_128d10;
        case 0x128db8u: goto label_128db8;
        case 0x128dc0u: goto label_128dc0;
        case 0x128dd0u: goto label_128dd0;
        case 0x128df4u: goto label_128df4;
        case 0x128e00u: goto label_128e00;
        case 0x128e34u: goto label_128e34;
        case 0x128e64u: goto label_128e64;
        case 0x128eb8u: goto label_128eb8;
        case 0x128ec8u: goto label_128ec8;
        case 0x128fa0u: goto label_128fa0;
        case 0x128fa8u: goto label_128fa8;
        case 0x12903cu: goto label_12903c;
        case 0x129048u: goto label_129048;
        case 0x129050u: goto label_129050;
        case 0x129060u: goto label_129060;
        case 0x129070u: goto label_129070;
        case 0x1290b8u: goto label_1290b8;
        case 0x129110u: goto label_129110;
        case 0x129134u: goto label_129134;
        case 0x129140u: goto label_129140;
        case 0x129148u: goto label_129148;
        case 0x129158u: goto label_129158;
        case 0x129168u: goto label_129168;
        case 0x1291c0u: goto label_1291c0;
        case 0x1291d0u: goto label_1291d0;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291f4u: goto label_1291f4;
        case 0x129204u: goto label_129204;
        case 0x12925cu: goto label_12925c;
        case 0x1292b4u: goto label_1292b4;
        case 0x1292c4u: goto label_1292c4;
        case 0x1292d0u: goto label_1292d0;
        case 0x1292d8u: goto label_1292d8;
        case 0x1292e8u: goto label_1292e8;
        case 0x1292f8u: goto label_1292f8;
        case 0x129354u: goto label_129354;
        case 0x1293b8u: goto label_1293b8;
        case 0x1293d8u: goto label_1293d8;
        default: break;
    }

    ctx->pc = 0x1281e0u;

    // 0x1281e0: 0x804a510  j           func_129440
    ctx->pc = 0x1281E0u;
    ctx->pc = 0x1281E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1281E0u;
    // 0x1281e4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129440u;
    goto label_129440;
    ctx->pc = 0x1281E8u;
    // 0x1281e8: 0x0  nop
    ctx->pc = 0x1281e8u;
    // NOP
    // 0x1281ec: 0x0  nop
    ctx->pc = 0x1281ecu;
    // NOP
    // 0x1281f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1281f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1281f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1281f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1281f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1281fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1281fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128204: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x128204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x128208: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x128208u;
    {
        const bool branch_taken_0x128208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128208) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x128210u;
    // 0x128210: 0xc049c48  jal         func_127120
    ctx->pc = 0x128210u;
    SET_GPR_U32(ctx, 31, 0x128218u);
    ctx->pc = 0x128214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128210u;
    // 0x128214: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x128210u, 0x128218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128218u;
label_128218:
    // 0x128218: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x128218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12821c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x128220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x128220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x128224: 0xc049b0c  jal         func_126C30
    ctx->pc = 0x128224u;
    SET_GPR_U32(ctx, 31, 0x12822Cu);
    ctx->pc = 0x128228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128224u;
    // 0x128228: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C30u, 0x128224u, 0x12822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12822Cu;
label_12822c:
    // 0x12822c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12822Cu;
    {
        const bool branch_taken_0x12822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12822Cu;
        // 0x128230: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12822c) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x128234u;
    // 0x128234: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x128234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_128238:
    // 0x128238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12823c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12823cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128240: 0x3e00008  jr          $ra
    ctx->pc = 0x128240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128240u;
        // 0x128244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128248u;
    // 0x128248: 0x0  nop
    ctx->pc = 0x128248u;
    // NOP
    // 0x12824c: 0x0  nop
    ctx->pc = 0x12824cu;
    // NOP
    // 0x128250: 0x804a514  j           func_129450
    ctx->pc = 0x128250u;
    ctx->pc = 0x128254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128250u;
    // 0x128254: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129450u;
    FUN_00129450_0x129450(rdram, ctx, runtime); return;
    ctx->pc = 0x128258u;
    // 0x128258: 0x0  nop
    ctx->pc = 0x128258u;
    // NOP
    // 0x12825c: 0x0  nop
    ctx->pc = 0x12825cu;
    // NOP
    // 0x128260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x128260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x128264: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x128264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x128268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12826c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12827c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12827cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128280: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x128280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x128284: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x128284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x128288: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x128288u;
    {
        const bool branch_taken_0x128288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128288u;
        // 0x12828c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128288) {
            ctx->pc = 0x128344u;
            goto label_128344;
        }
    }
    ctx->pc = 0x128290u;
    // 0x128290: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x128294: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x128294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x128298: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x128298u;
    {
        const bool branch_taken_0x128298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128298u;
        // 0x12829c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128298) {
            ctx->pc = 0x1282BCu;
            goto label_1282bc;
        }
    }
    ctx->pc = 0x1282A0u;
    // 0x1282a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1282a4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1282a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1282a8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1282ac: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1282ACu;
    SET_GPR_U32(ctx, 31, 0x1282B4u);
    ctx->pc = 0x1282B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282ACu;
    // 0x1282b0: 0x24a5ebc0  addiu       $a1, $a1, -0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1282ACu, 0x1282B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282B4u;
label_1282b4:
    // 0x1282b4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1282B4u;
    SET_GPR_U32(ctx, 31, 0x1282BCu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1282B4u, 0x1282BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282BCu;
label_1282bc:
    // 0x1282bc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1282c0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1282c4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1282C4u;
    SET_GPR_U32(ctx, 31, 0x1282CCu);
    ctx->pc = 0x1282C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282C4u;
    // 0x1282c8: 0x26530008  addiu       $s3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1282C4u, 0x1282CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282CCu;
label_1282cc:
    // 0x1282cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1282ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282d0: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1282D0u;
    {
        const bool branch_taken_0x1282d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282D0u;
        // 0x1282d4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d0) {
            ctx->pc = 0x1282F4u;
            goto label_1282f4;
        }
    }
    ctx->pc = 0x1282D8u;
    // 0x1282d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1282dc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1282e0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1282e4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1282E4u;
    SET_GPR_U32(ctx, 31, 0x1282ECu);
    ctx->pc = 0x1282E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282E4u;
    // 0x1282e8: 0x24a5eba0  addiu       $a1, $a1, -0x1460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1282E4u, 0x1282ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282ECu;
label_1282ec:
    // 0x1282ec: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1282ECu;
    SET_GPR_U32(ctx, 31, 0x1282F4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1282ECu, 0x1282F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282F4u;
label_1282f4:
    // 0x1282f4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1282F4u;
    {
        const bool branch_taken_0x1282f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F4u;
        // 0x1282f8: 0xae740000  sw          $s4, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282f4) {
            ctx->pc = 0x128340u;
            goto label_128340;
        }
    }
    ctx->pc = 0x1282FCu;
    // 0x1282fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x128300: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x128304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128308: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x128308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12830c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128310: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128310u;
        // 0x128314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x128334u;
            goto label_128334;
        }
    }
    ctx->pc = 0x128318u;
label_128318:
    // 0x128318: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12831c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x128320: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128324: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x128324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128328: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12832c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12832Cu;
    {
        const bool branch_taken_0x12832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12832c) {
            ctx->pc = 0x128318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128318;
        }
    }
    ctx->pc = 0x128334u;
label_128334:
    // 0x128334: 0x0  nop
    ctx->pc = 0x128334u;
    // NOP
    // 0x128338: 0xc0401a4  jal         func_100690
    ctx->pc = 0x128338u;
    SET_GPR_U32(ctx, 31, 0x128340u);
    ctx->pc = 0x12833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128338u;
    // 0x12833c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x128338u, 0x128340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128340u;
label_128340:
    // 0x128340: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x128340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_128344:
    // 0x128344: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x128344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12834c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12834cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12835c: 0x3e00008  jr          $ra
    ctx->pc = 0x12835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12835Cu;
        // 0x128360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128364u;
    // 0x128364: 0x0  nop
    ctx->pc = 0x128364u;
    // NOP
    // 0x128368: 0x0  nop
    ctx->pc = 0x128368u;
    // NOP
    // 0x12836c: 0x0  nop
    ctx->pc = 0x12836cu;
    // NOP
    // 0x128370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12837c: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x12837Cu;
    SET_GPR_U32(ctx, 31, 0x128384u);
    ctx->pc = 0x128380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12837Cu;
    // 0x128380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x12837Cu, 0x128384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128384u;
label_128384:
    // 0x128384: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x128388: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12838c: 0x24638a00  addiu       $v1, $v1, -0x7600
    ctx->pc = 0x12838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937088));
    // 0x128390: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x128390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x128394: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x128394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x128398: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12839c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x12839cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1283a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1283a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283a4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1283a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1283a8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1283a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1283ac: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1283acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x1283b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1283b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1283b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1283b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1283b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1283B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1283BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283B8u;
        // 0x1283bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1283C0u;
    // 0x1283c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1283c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1283c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1283c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1283c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1283c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1283cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1283ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1283d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1283D4u;
    {
        const bool branch_taken_0x1283d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283D4u;
        // 0x1283d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283d4) {
            ctx->pc = 0x128408u;
            goto label_128408;
        }
    }
    ctx->pc = 0x1283DCu;
    // 0x1283dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1283dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1283e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1283e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283e4: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1283e8: 0xc0497d8  jal         func_125F60
    ctx->pc = 0x1283E8u;
    SET_GPR_U32(ctx, 31, 0x1283F0u);
    ctx->pc = 0x1283ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283E8u;
    // 0x1283ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x1283E8u, 0x1283F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283F0u;
label_1283f0:
    // 0x1283f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1283f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1283f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1283f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1283F8u;
    {
        const bool branch_taken_0x1283f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1283FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F8u;
        // 0x1283fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283f8) {
            ctx->pc = 0x12840Cu;
            goto label_12840c;
        }
    }
    ctx->pc = 0x128400u;
    // 0x128400: 0xc0401a4  jal         func_100690
    ctx->pc = 0x128400u;
    SET_GPR_U32(ctx, 31, 0x128408u);
    ctx->pc = 0x128404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128400u;
    // 0x128404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x128400u, 0x128408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128408u;
label_128408:
    // 0x128408: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x128408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12840c:
    // 0x12840c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128418: 0x3e00008  jr          $ra
    ctx->pc = 0x128418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128418u;
        // 0x12841c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128420u;
    // 0x128420: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x128420u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x128424: 0x3e00008  jr          $ra
    ctx->pc = 0x128424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128424u;
        // 0x128428: 0x7c8300a0  sq          $v1, 0xA0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12842Cu;
    // 0x12842c: 0x0  nop
    ctx->pc = 0x12842cu;
    // NOP
    // 0x128430: 0xc48300b0  lwc1        $f3, 0xB0($a0)
    ctx->pc = 0x128430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128438: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x128438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12843c: 0xc48200a0  lwc1        $f2, 0xA0($a0)
    ctx->pc = 0x12843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128444: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x128444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x128448: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x128448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12844c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12844cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x128450: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x128450u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x128454: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x128454u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x128458: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x128458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x12845c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x12845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128460: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x128460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128464: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x128464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x128468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12846c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12846cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x128470: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x128470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x128474: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x128474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128478: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x128478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12847c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x12847cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x128480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x128484: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x128484u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x128488: 0x0  nop
    ctx->pc = 0x128488u;
    // NOP
    // 0x12848c: 0x0  nop
    ctx->pc = 0x12848cu;
    // NOP
    // 0x128490: 0x80497f0  j           func_125FC0
    ctx->pc = 0x128490u;
    ctx->pc = 0x128494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128490u;
    // 0x128494: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    FUN_00125fc0_0x125fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x128498u;
    // 0x128498: 0x0  nop
    ctx->pc = 0x128498u;
    // NOP
    // 0x12849c: 0x0  nop
    ctx->pc = 0x12849cu;
    // NOP
    // 0x1284a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1284a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1284a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1284a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1284a8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1284a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1284ac: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x1284ACu;
    SET_GPR_U32(ctx, 31, 0x1284B4u);
    ctx->pc = 0x1284B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284ACu;
    // 0x1284b0: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x1284ACu, 0x1284B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284B4u;
label_1284b4:
    // 0x1284b4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1284b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1284bc: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x1284bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
    // 0x1284c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1284c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1284c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1284cc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284d0: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x1284d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x1284d4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284d8: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1284d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x1284dc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284e0: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x1284e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x1284e4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284e8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1284e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x1284ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284f0: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1284F0u;
    SET_GPR_U32(ctx, 31, 0x1284F8u);
    ctx->pc = 0x1284F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284F0u;
    // 0x1284f4: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1284F0u, 0x1284F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284F8u;
label_1284f8:
    // 0x1284f8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1284f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1284fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1284fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128500: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x128500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x128504: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x128504u;
    SET_GPR_U32(ctx, 31, 0x12850Cu);
    ctx->pc = 0x128508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128504u;
    // 0x128508: 0x244400e0  addiu       $a0, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x128504u, 0x12850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12850Cu;
label_12850c:
    // 0x12850c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128510: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x128510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128514: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x128514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x128518: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12851c: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x12851cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x128520: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128524: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x128524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x128528: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12852c: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x12852cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x128530: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128534: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x128534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x128538: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12853c: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x12853cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x128540: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128544: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x128544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x128548: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12854c: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x12854cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x128550: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128554: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x128554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x128558: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12855c: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x12855cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x128560: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x128564: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x128564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x128568: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12856c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128570: 0x3e00008  jr          $ra
    ctx->pc = 0x128570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128570u;
        // 0x128574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128578u;
    // 0x128578: 0x0  nop
    ctx->pc = 0x128578u;
    // NOP
    // 0x12857c: 0x0  nop
    ctx->pc = 0x12857cu;
    // NOP
    // 0x128580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x128584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x128584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x128588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12858c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128594: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x128594u;
    {
        const bool branch_taken_0x128594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x128598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128594u;
        // 0x128598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128594) {
            ctx->pc = 0x1285C8u;
            goto label_1285c8;
        }
    }
    ctx->pc = 0x12859Cu;
    // 0x12859c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1285a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1285a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285a4: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x1285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x1285a8: 0xc0497d8  jal         func_125F60
    ctx->pc = 0x1285A8u;
    SET_GPR_U32(ctx, 31, 0x1285B0u);
    ctx->pc = 0x1285ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285A8u;
    // 0x1285ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x1285A8u, 0x1285B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285B0u;
label_1285b0:
    // 0x1285b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1285b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1285b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1285b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1285b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1285B8u;
    {
        const bool branch_taken_0x1285b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1285BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285B8u;
        // 0x1285bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285b8) {
            ctx->pc = 0x1285CCu;
            goto label_1285cc;
        }
    }
    ctx->pc = 0x1285C0u;
    // 0x1285c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1285C0u;
    SET_GPR_U32(ctx, 31, 0x1285C8u);
    ctx->pc = 0x1285C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285C0u;
    // 0x1285c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1285C0u, 0x1285C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285C8u;
label_1285c8:
    // 0x1285c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1285c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1285cc:
    // 0x1285cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1285ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1285d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1285d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1285d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1285d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1285d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1285D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1285DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285D8u;
        // 0x1285dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1285D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1285E0u;
    // 0x1285e0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1285e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x1285e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1285e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1285e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1285e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1285ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1285ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1285f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1285f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1285f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1285f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1285f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1285fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1285fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128604: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128604u;
    SET_GPR_U32(ctx, 31, 0x12860Cu);
    ctx->pc = 0x128608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128604u;
    // 0x128608: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128604u, 0x12860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12860Cu;
label_12860c:
    // 0x12860c: 0xc04a050  jal         func_128140
    ctx->pc = 0x12860Cu;
    SET_GPR_U32(ctx, 31, 0x128614u);
    ctx->pc = 0x128610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12860Cu;
    // 0x128610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128140u, 0x12860Cu, 0x128614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128614u;
label_128614:
    // 0x128614: 0x8e8400a0  lw          $a0, 0xA0($s4)
    ctx->pc = 0x128614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x128618: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12861c: 0x10830155  beq         $a0, $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x12861Cu;
    {
        const bool branch_taken_0x12861c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x128620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12861Cu;
        // 0x128620: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12861c) {
            ctx->pc = 0x128B74u;
            goto label_128b74;
        }
    }
    ctx->pc = 0x128624u;
    // 0x128624: 0x10830153  beq         $a0, $v1, . + 4 + (0x153 << 2)
    ctx->pc = 0x128624u;
    {
        const bool branch_taken_0x128624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128624) {
            ctx->pc = 0x128B74u;
            goto label_128b74;
        }
    }
    ctx->pc = 0x12862Cu;
    // 0x12862c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128630: 0x1083010d  beq         $a0, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x128630u;
    {
        const bool branch_taken_0x128630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128630) {
            ctx->pc = 0x128A68u;
            goto label_128a68;
        }
    }
    ctx->pc = 0x128638u;
    // 0x128638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128638u;
    {
        const bool branch_taken_0x128638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x128638) {
            ctx->pc = 0x128648u;
            goto label_128648;
        }
    }
    ctx->pc = 0x128640u;
    // 0x128640: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x128640u;
    {
        const bool branch_taken_0x128640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128640u;
        // 0x128644: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128640) {
            ctx->pc = 0x128B80u;
            goto label_128b80;
        }
    }
    ctx->pc = 0x128648u;
label_128648:
    // 0x128648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12864c: 0xc05f770  jal         func_17DDC0
    ctx->pc = 0x12864Cu;
    SET_GPR_U32(ctx, 31, 0x128654u);
    ctx->pc = 0x128650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12864Cu;
    // 0x128650: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDC0u, 0x12864Cu, 0x128654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128654u;
label_128654:
    // 0x128654: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128658: 0x12000148  beqz        $s0, . + 4 + (0x148 << 2)
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128658) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128660u;
    // 0x128660: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x128660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x128664: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128668: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x128668u;
    {
        const bool branch_taken_0x128668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128668u;
        // 0x12866c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128668) {
            ctx->pc = 0x128674u;
            goto label_128674;
        }
    }
    ctx->pc = 0x128670u;
    // 0x128670: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x128670u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_128674:
    // 0x128674: 0xae83012c  sw          $v1, 0x12C($s4)
    ctx->pc = 0x128674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
    // 0x128678: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12867c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12867Cu;
    SET_GPR_U32(ctx, 31, 0x128684u);
    ctx->pc = 0x128680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12867Cu;
    // 0x128680: 0xae8200a8  sw          $v0, 0xA8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12867Cu, 0x128684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128684u;
label_128684:
    // 0x128684: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128688: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128688u;
    SET_GPR_U32(ctx, 31, 0x128690u);
    ctx->pc = 0x12868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128688u;
    // 0x12868c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128688u, 0x128690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128690u;
label_128690:
    // 0x128690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x128690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128698: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x128698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12869c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1286a0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1286A0u;
    {
        const bool branch_taken_0x1286a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286a0) {
            ctx->pc = 0x128748u;
            goto label_128748;
        }
    }
    ctx->pc = 0x1286A8u;
    // 0x1286a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1286A8u;
    {
        const bool branch_taken_0x1286a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286A8u;
        // 0x1286ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286a8) {
            ctx->pc = 0x128704u;
            goto label_128704;
        }
    }
    ctx->pc = 0x1286B0u;
    // 0x1286b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x1286C0u;
            goto label_1286c0;
        }
    }
    ctx->pc = 0x1286B8u;
    // 0x1286b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1286B8u;
    {
        const bool branch_taken_0x1286b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286B8u;
        // 0x1286bc: 0x8e820138  lw          $v0, 0x138($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286b8) {
            ctx->pc = 0x128788u;
            goto label_128788;
        }
    }
    ctx->pc = 0x1286C0u;
label_1286c0:
    // 0x1286c0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1286c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1286c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1286c8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1286c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1286cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1286ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1286d0: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1286d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1286d4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1286d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1286d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1286dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1286dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1286e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1286e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1286e4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1286e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1286e8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x1286e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1286ec: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x1286ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x1286f0: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1286f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1286f4: 0x0  nop
    ctx->pc = 0x1286f4u;
    // NOP
    // 0x1286f8: 0x0  nop
    ctx->pc = 0x1286f8u;
    // NOP
    // 0x1286fc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1286FCu;
    {
        const bool branch_taken_0x1286fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286fc) {
            ctx->pc = 0x128784u;
            goto label_128784;
        }
    }
    ctx->pc = 0x128704u;
label_128704:
    // 0x128704: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x128704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12870c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x12870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128714: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x128714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x128718: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x12871c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12871cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128720: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x128720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x128724: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128728: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x128728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x12872c: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x12872cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x128730: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x128730u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x128734: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x128734u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128738: 0x0  nop
    ctx->pc = 0x128738u;
    // NOP
    // 0x12873c: 0x0  nop
    ctx->pc = 0x12873cu;
    // NOP
    // 0x128740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128740) {
            ctx->pc = 0x128784u;
            goto label_128784;
        }
    }
    ctx->pc = 0x128748u;
label_128748:
    // 0x128748: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x128748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12874c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128750: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x128750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128754: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128758: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12875c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x12875cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x128760: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x128760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128764: 0x0  nop
    ctx->pc = 0x128764u;
    // NOP
    // 0x128768: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x128768u;
    {
        const bool branch_taken_0x128768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128768u;
        // 0x12876c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128768) {
            ctx->pc = 0x128778u;
            goto label_128778;
        }
    }
    ctx->pc = 0x128770u;
    // 0x128770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x128774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_128778:
    // 0x128778: 0x0  nop
    ctx->pc = 0x128778u;
    // NOP
    // 0x12877c: 0x0  nop
    ctx->pc = 0x12877cu;
    // NOP
    // 0x128780: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x128780u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_128784:
    // 0x128784: 0x8e820138  lw          $v0, 0x138($s4)
    ctx->pc = 0x128784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_128788:
    // 0x128788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128788u;
    {
        const bool branch_taken_0x128788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128788u;
        // 0x12878c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128788) {
            ctx->pc = 0x128798u;
            goto label_128798;
        }
    }
    ctx->pc = 0x128790u;
    // 0x128790: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128790u;
    {
        const bool branch_taken_0x128790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x128790) {
            ctx->pc = 0x1287A4u;
            goto label_1287a4;
        }
    }
    ctx->pc = 0x128798u;
label_128798:
    // 0x128798: 0xe68300a4  swc1        $f3, 0xA4($s4)
    ctx->pc = 0x128798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
    // 0x12879c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12879Cu;
    {
        const bool branch_taken_0x12879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12879Cu;
        // 0x1287a0: 0xae800138  sw          $zero, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12879c) {
            ctx->pc = 0x1287C8u;
            goto label_1287c8;
        }
    }
    ctx->pc = 0x1287A4u;
label_1287a4:
    // 0x1287a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1287a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1287a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1287ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1287acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1287b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1287b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1287b4: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x1287b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1287b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1287bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1287bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1287c0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1287c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1287c4: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x1287c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1287c8:
    // 0x1287c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1287cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1287ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1287d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1287D0u;
    {
        const bool branch_taken_0x1287d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287d0) {
            ctx->pc = 0x1287F4u;
            goto label_1287f4;
        }
    }
    ctx->pc = 0x1287D8u;
    // 0x1287d8: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x1287d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287dc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1287dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1287e0: 0x0  nop
    ctx->pc = 0x1287e0u;
    // NOP
    // 0x1287e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x1287F8u;
            goto label_1287f8;
        }
    }
    ctx->pc = 0x1287ECu;
    // 0x1287ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1287ECu;
    {
        const bool branch_taken_0x1287ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287ECu;
        // 0x1287f0: 0xe68300a4  swc1        $f3, 0xA4($s4) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287ec) {
            ctx->pc = 0x1287F8u;
            goto label_1287f8;
        }
    }
    ctx->pc = 0x1287F4u;
label_1287f4:
    // 0x1287f4: 0xe68300a4  swc1        $f3, 0xA4($s4)
    ctx->pc = 0x1287f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
label_1287f8:
    // 0x1287f8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1287F8u;
    SET_GPR_U32(ctx, 31, 0x128800u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1287F8u, 0x128800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128800u;
label_128800:
    // 0x128800: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128804: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x128804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128808: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128808u;
    SET_GPR_U32(ctx, 31, 0x128810u);
    ctx->pc = 0x12880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128808u;
    // 0x12880c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128808u, 0x128810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128810u;
label_128810:
    // 0x128810: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x128810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128814: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x128814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128818: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128818u;
    SET_GPR_U32(ctx, 31, 0x128820u);
    ctx->pc = 0x12881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128818u;
    // 0x12881c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128818u, 0x128820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128820u;
label_128820:
    // 0x128820: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x128820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x128824: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128828: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x128828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12882c: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128830: 0x27b200b4  addiu       $s2, $sp, 0xB4
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x128834: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x128834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x128838: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128838u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12883c: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x12883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128840: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x128840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128844: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x128844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128848: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12884c: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x128850: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128850u;
    {
        const bool branch_taken_0x128850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128850) {
            ctx->pc = 0x12888Cu;
            goto label_12888c;
        }
    }
    ctx->pc = 0x128858u;
    // 0x128858: 0x8e84013c  lw          $a0, 0x13C($s4)
    ctx->pc = 0x128858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
    // 0x12885c: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x12885Cu;
    SET_GPR_U32(ctx, 31, 0x128864u);
    ctx->pc = 0x128860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12885Cu;
    // 0x128860: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x12885Cu, 0x128864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128864u;
label_128864:
    // 0x128864: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x128864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12886c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128870: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x128870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128874: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x128874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x128878: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12887c: 0xc04a2e8  jal         func_128BA0
    ctx->pc = 0x12887Cu;
    SET_GPR_U32(ctx, 31, 0x128884u);
    ctx->pc = 0x128880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12887Cu;
    // 0x128880: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BA0u;
    goto label_128ba0;
    ctx->pc = 0x128884u;
label_128884:
    // 0x128884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128884u;
    {
        const bool branch_taken_0x128884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128884u;
        // 0x128888: 0xae800130  sw          $zero, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128884) {
            ctx->pc = 0x1288A4u;
            goto label_1288a4;
        }
    }
    ctx->pc = 0x12888Cu;
label_12888c:
    // 0x12888c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x128890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128898: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x128898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12889c: 0xc04a2e8  jal         func_128BA0
    ctx->pc = 0x12889Cu;
    SET_GPR_U32(ctx, 31, 0x1288A4u);
    ctx->pc = 0x1288A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12889Cu;
    // 0x1288a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BA0u;
    goto label_128ba0;
    ctx->pc = 0x1288A4u;
label_1288a4:
    // 0x1288a4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1288a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1288a8: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x1288A8u;
    SET_GPR_U32(ctx, 31, 0x1288B0u);
    ctx->pc = 0x1288ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288A8u;
    // 0x1288ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x1288A8u, 0x1288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x1288b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1288b4: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x1288b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1288b8: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1288b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1288bc: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1288bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1288c0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1288c4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1288c8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1288c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1288cc: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1288ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1288d0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1288d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1288d4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1288d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1288d8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1288d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1288dc: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x1288dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1288e0: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x1288e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1288e4: 0xc0498c4  jal         func_126310
    ctx->pc = 0x1288E4u;
    SET_GPR_U32(ctx, 31, 0x1288ECu);
    ctx->pc = 0x1288E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288E4u;
    // 0x1288e8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x1288E4u, 0x1288ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288ECu;
label_1288ec:
    // 0x1288ec: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1288f0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1288f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1288f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1288f8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1288f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1288fc: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x128900: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x128900u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x128904: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128908: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128908u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12890c: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x12890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128910: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x128910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128914: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x128914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128918: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12891c: 0xc68c0134  lwc1        $f12, 0x134($s4)
    ctx->pc = 0x12891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128920: 0x460c6832  c.eq.s      $f13, $f12
    ctx->pc = 0x128920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128924: 0x0  nop
    ctx->pc = 0x128924u;
    // NOP
    // 0x128928: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x128928u;
    {
        const bool branch_taken_0x128928 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128928u;
        // 0x12892c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128928) {
            ctx->pc = 0x128968u;
            goto label_128968;
        }
    }
    ctx->pc = 0x128930u;
    // 0x128930: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x128930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128934: 0xc0498c4  jal         func_126310
    ctx->pc = 0x128934u;
    SET_GPR_U32(ctx, 31, 0x12893Cu);
    ctx->pc = 0x128938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128934u;
    // 0x128938: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x128934u, 0x12893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12893Cu;
label_12893c:
    // 0x12893c: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x128940: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128944: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x128944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128948: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x128948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x12894c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12894cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x128950: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128954: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128954u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x128958: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x128958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12895c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x12895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128960: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x128960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128964: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_128968:
    // 0x128968: 0x83828444  lb          $v0, -0x7BBC($gp)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x12896c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12896c) {
            ctx->pc = 0x128984u;
            goto label_128984;
        }
    }
    ctx->pc = 0x128974u;
    // 0x128974: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x128978: 0xa3828444  sb          $v0, -0x7BBC($gp)
    ctx->pc = 0x128978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935620), (uint8_t)GPR_U32(ctx, 2));
    // 0x12897c: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x12897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x128980: 0xaf828440  sw          $v0, -0x7BC0($gp)
    ctx->pc = 0x128980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 2));
label_128984:
    // 0x128984: 0x8382844c  lb          $v0, -0x7BB4($gp)
    ctx->pc = 0x128984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x128988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128988u;
        // 0x12898c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289A0u;
            goto label_1289a0;
        }
    }
    ctx->pc = 0x128990u;
    // 0x128990: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x128994: 0xa382844c  sb          $v0, -0x7BB4($gp)
    ctx->pc = 0x128994u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935628), (uint8_t)GPR_U32(ctx, 2));
    // 0x128998: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x12899c: 0xaf828448  sw          $v0, -0x7BB8($gp)
    ctx->pc = 0x12899cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 2));
label_1289a0:
    // 0x1289a0: 0x83828454  lb          $v0, -0x7BAC($gp)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935636)));
    // 0x1289a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1289A4u;
    {
        const bool branch_taken_0x1289a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289A4u;
        // 0x1289a8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289a4) {
            ctx->pc = 0x1289B8u;
            goto label_1289b8;
        }
    }
    ctx->pc = 0x1289ACu;
    // 0x1289ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1289acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289b0: 0xaf838450  sw          $v1, -0x7BB0($gp)
    ctx->pc = 0x1289b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935632), GPR_U32(ctx, 3));
    // 0x1289b4: 0xa3828454  sb          $v0, -0x7BAC($gp)
    ctx->pc = 0x1289b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935636), (uint8_t)GPR_U32(ctx, 2));
label_1289b8:
    // 0x1289b8: 0x8382845c  lb          $v0, -0x7BA4($gp)
    ctx->pc = 0x1289b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x1289bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1289BCu;
    {
        const bool branch_taken_0x1289bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289BCu;
        // 0x1289c0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289bc) {
            ctx->pc = 0x1289D0u;
            goto label_1289d0;
        }
    }
    ctx->pc = 0x1289C4u;
    // 0x1289c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289c8: 0xaf838458  sw          $v1, -0x7BA8($gp)
    ctx->pc = 0x1289c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U32(ctx, 3));
    // 0x1289cc: 0xa382845c  sb          $v0, -0x7BA4($gp)
    ctx->pc = 0x1289ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935644), (uint8_t)GPR_U32(ctx, 2));
label_1289d0:
    // 0x1289d0: 0x83828464  lb          $v0, -0x7B9C($gp)
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935652)));
    // 0x1289d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1289D4u;
    {
        const bool branch_taken_0x1289d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289D4u;
        // 0x1289d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289d4) {
            ctx->pc = 0x1289E4u;
            goto label_1289e4;
        }
    }
    ctx->pc = 0x1289DCu;
    // 0x1289dc: 0xaf808460  sw          $zero, -0x7BA0($gp)
    ctx->pc = 0x1289dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U32(ctx, 0));
    // 0x1289e0: 0xa3828464  sb          $v0, -0x7B9C($gp)
    ctx->pc = 0x1289e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935652), (uint8_t)GPR_U32(ctx, 2));
label_1289e4:
    // 0x1289e4: 0x8382846c  lb          $v0, -0x7B94($gp)
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1289e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1289E8u;
    {
        const bool branch_taken_0x1289e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289E8u;
        // 0x1289ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289e8) {
            ctx->pc = 0x128A00u;
            goto label_128a00;
        }
    }
    ctx->pc = 0x1289F0u;
    // 0x1289f0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1289f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1289f4: 0xa382846c  sb          $v0, -0x7B94($gp)
    ctx->pc = 0x1289f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935660), (uint8_t)GPR_U32(ctx, 2));
    // 0x1289f8: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x1289fc: 0xaf828468  sw          $v0, -0x7B98($gp)
    ctx->pc = 0x1289fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U32(ctx, 2));
label_128a00:
    // 0x128a00: 0xc6810134  lwc1        $f1, 0x134($s4)
    ctx->pc = 0x128a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a04: 0xc7808448  lwc1        $f0, -0x7BB8($gp)
    ctx->pc = 0x128a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128a0c: 0xe6810134  swc1        $f1, 0x134($s4)
    ctx->pc = 0x128a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    // 0x128a10: 0xc7808458  lwc1        $f0, -0x7BA8($gp)
    ctx->pc = 0x128a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x128a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x128a18: 0xe6800134  swc1        $f0, 0x134($s4)
    ctx->pc = 0x128a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    // 0x128a1c: 0xc7818460  lwc1        $f1, -0x7BA0($gp)
    ctx->pc = 0x128a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128a24: 0x0  nop
    ctx->pc = 0x128a24u;
    // NOP
    // 0x128a28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a28) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x128A30u;
    // 0x128a30: 0xe6810134  swc1        $f1, 0x134($s4)
    ctx->pc = 0x128a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
label_128a34:
    // 0x128a34: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x128a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a3c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x128a40: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x128a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x128a44: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x128a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128a48: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x128a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x128a4c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x128a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a50: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x128a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x128a54: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x128a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a58: 0xc049948  jal         func_126520
    ctx->pc = 0x128A58u;
    SET_GPR_U32(ctx, 31, 0x128A60u);
    ctx->pc = 0x128A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A58u;
    // 0x128a5c: 0xe7a00244  swc1        $f0, 0x244($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x128A58u, 0x128A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A60u;
label_128a60:
    // 0x128a60: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x128A60u;
    {
        const bool branch_taken_0x128a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a60) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128A68u;
label_128a68:
    // 0x128a68: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128A68u;
    SET_GPR_U32(ctx, 31, 0x128A70u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128A68u, 0x128A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A70u;
label_128a70:
    // 0x128a70: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128a74: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128A74u;
    SET_GPR_U32(ctx, 31, 0x128A7Cu);
    ctx->pc = 0x128A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A74u;
    // 0x128a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128A74u, 0x128A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128A7Cu;
    SET_GPR_U32(ctx, 31, 0x128A84u);
    ctx->pc = 0x128A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A7Cu;
    // 0x128a80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128A7Cu, 0x128A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A84u;
label_128a84:
    // 0x128a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128a8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128a90: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128A90u;
    SET_GPR_U32(ctx, 31, 0x128A98u);
    ctx->pc = 0x128A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A90u;
    // 0x128a94: 0x8e850118  lw          $a1, 0x118($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128A90u, 0x128A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A98u;
label_128a98:
    // 0x128a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128aa4: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128AA4u;
    SET_GPR_U32(ctx, 31, 0x128AACu);
    ctx->pc = 0x128AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AA4u;
    // 0x128aa8: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128AA4u, 0x128AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AACu;
label_128aac:
    // 0x128aac: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x128aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x128ab0: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x128ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128ab4: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x128ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x128ab8: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x128ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128abc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x128abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x128ac0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x128ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x128ac4: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x128ac8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x128ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x128acc: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x128accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x128ad0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x128ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x128ad4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x128ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x128ad8: 0xc6810110  lwc1        $f1, 0x110($s4)
    ctx->pc = 0x128ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128adc: 0xc6800114  lwc1        $f0, 0x114($s4)
    ctx->pc = 0x128adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ae0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128ae8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x128ae8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128aec: 0x0  nop
    ctx->pc = 0x128aecu;
    // NOP
    // 0x128af0: 0x0  nop
    ctx->pc = 0x128af0u;
    // NOP
    // 0x128af4: 0xc049860  jal         func_126180
    ctx->pc = 0x128AF4u;
    SET_GPR_U32(ctx, 31, 0x128AFCu);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x128AF4u, 0x128AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AFCu;
label_128afc:
    // 0x128afc: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x128afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x128b00: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x128b04: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x128b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x128b08: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x128b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x128b0c: 0x27a80154  addiu       $t0, $sp, 0x154
    ctx->pc = 0x128b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x128b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b14: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x128b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x128b18: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x128b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x128b1c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x128b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x128b20: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x128b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b24: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x128b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x128b28: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x128b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x128b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x128b30: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x128b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x128b34: 0x7fa202b0  sq          $v0, 0x2B0($sp)
    ctx->pc = 0x128b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
    // 0x128b38: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x128b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x128b3c: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x128b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x128b40: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x128b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b44: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x128b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x128b48: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x128b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b4c: 0xc049948  jal         func_126520
    ctx->pc = 0x128B4Cu;
    SET_GPR_U32(ctx, 31, 0x128B54u);
    ctx->pc = 0x128B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B4Cu;
    // 0x128b50: 0xe7a002d4  swc1        $f0, 0x2D4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x128B4Cu, 0x128B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B54u;
label_128b54:
    // 0x128b54: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x128b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x128b58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128b5c: 0xae830110  sw          $v1, 0x110($s4)
    ctx->pc = 0x128b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
    // 0x128b60: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x128b64: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B64u;
    {
        const bool branch_taken_0x128b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128b64) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B6Cu;
    // 0x128b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128B6Cu;
    {
        const bool branch_taken_0x128b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B6Cu;
        // 0x128b70: 0xae8000a0  sw          $zero, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b6c) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B74u;
label_128b74:
    // 0x128b74: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x128b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x128b78: 0xae8000a0  sw          $zero, 0xA0($s4)
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
label_128b7c:
    // 0x128b7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x128b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_128b80:
    // 0x128b80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128b80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128b84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b98: 0x3e00008  jr          $ra
    ctx->pc = 0x128B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B98u;
        // 0x128b9c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128BA0u;
label_128ba0:
    // 0x128ba0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x128ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x128ba4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x128ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x128ba8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128bac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x128bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x128bb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x128bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x128bb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x128bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x128bb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x128bbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x128bbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x128bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128bc4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x128bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x128bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128bcc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128bd4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x128bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128bdc: 0x24a52e80  addiu       $a1, $a1, 0x2E80
    ctx->pc = 0x128bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11904));
    // 0x128be0: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x128BE0u;
    SET_GPR_U32(ctx, 31, 0x128BE8u);
    ctx->pc = 0x128BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BE0u;
    // 0x128be4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x128BE0u, 0x128BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BE8u;
label_128be8:
    // 0x128be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128bec: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x128BECu;
    SET_GPR_U32(ctx, 31, 0x128BF4u);
    ctx->pc = 0x128BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BECu;
    // 0x128bf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x128BECu, 0x128BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BF4u;
label_128bf4:
    // 0x128bf4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x128bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x128bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128bfc: 0x0  nop
    ctx->pc = 0x128bfcu;
    // NOP
    // 0x128c00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x128c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128c04: 0x0  nop
    ctx->pc = 0x128c04u;
    // NOP
    // 0x128c08: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x128C08u;
    {
        const bool branch_taken_0x128c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C08u;
        // 0x128c0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c08) {
            ctx->pc = 0x128C38u;
            goto label_128c38;
        }
    }
    ctx->pc = 0x128C10u;
    // 0x128c10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128c14:
    // 0x128c14: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x128c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c1c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x128c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x128c20: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C20u;
    SET_GPR_U32(ctx, 31, 0x128C28u);
    ctx->pc = 0x128C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C20u;
    // 0x128c24: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C20u, 0x128C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C28u;
label_128c28:
    // 0x128c28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x128c2c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x128c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128c30: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x128C30u;
    {
        const bool branch_taken_0x128c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C30u;
        // 0x128c34: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c30) {
            ctx->pc = 0x128C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c14;
        }
    }
    ctx->pc = 0x128C38u;
label_128c38:
    // 0x128c38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128c40:
    // 0x128c40: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x128c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x128c44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c48: 0x24632df0  addiu       $v1, $v1, 0x2DF0
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11760));
    // 0x128c4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x128c50: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x128c54: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C54u;
    SET_GPR_U32(ctx, 31, 0x128C5Cu);
    ctx->pc = 0x128C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C54u;
    // 0x128c58: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C54u, 0x128C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C5Cu;
label_128c5c:
    // 0x128c5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c60: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x128c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x128c64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x128C64u;
    {
        const bool branch_taken_0x128c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C64u;
        // 0x128c68: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c64) {
            ctx->pc = 0x128C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c40;
        }
    }
    ctx->pc = 0x128C6Cu;
    // 0x128c6c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x128c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c74: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C74u;
    SET_GPR_U32(ctx, 31, 0x128C7Cu);
    ctx->pc = 0x128C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C74u;
    // 0x128c78: 0x24842e80  addiu       $a0, $a0, 0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C74u, 0x128C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C7Cu;
label_128c7c:
    // 0x128c7c: 0x27b1009c  addiu       $s1, $sp, 0x9C
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x128c80: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x128c80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x128c84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x128c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x128c88: 0x27b70094  addiu       $s7, $sp, 0x94
    ctx->pc = 0x128c88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x128c8c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x128c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x128c90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c94: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x128c94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x128c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x128c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c9c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x128c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_128ca0:
    // 0x128ca0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x128ca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128ca8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x128cac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x128cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cb0: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x128CB0u;
    SET_GPR_U32(ctx, 31, 0x128CB8u);
    ctx->pc = 0x128CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CB0u;
    // 0x128cb4: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x128CB0u, 0x128CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CB8u;
label_128cb8:
    // 0x128cb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128cbc: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128cc0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x128CC0u;
    {
        const bool branch_taken_0x128cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CC0u;
        // 0x128cc4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cc0) {
            ctx->pc = 0x128CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128ca0;
        }
    }
    ctx->pc = 0x128CC8u;
    // 0x128cc8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x128cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ccc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x128cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x128cd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cdc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128cdcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128ce0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x128ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x128ce4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x128ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ce8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128ce8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128cec: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x128cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x128cf0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x128cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128cf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128cf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128cf8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x128cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x128cfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x128cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128d00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128d04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x128d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x128d08: 0x32a40008  andi        $a0, $s5, 0x8
    ctx->pc = 0x128d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x128d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128d10:
    // 0x128d10: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x128d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x128d14: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x128d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x128d18: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x128D18u;
    {
        const bool branch_taken_0x128d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D18u;
        // 0x128d1c: 0xdd1821  addu        $v1, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d18) {
            ctx->pc = 0x128D50u;
            goto label_128d50;
        }
    }
    ctx->pc = 0x128D20u;
    // 0x128d20: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128D20u;
    {
        const bool branch_taken_0x128d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D20u;
        // 0x128d24: 0xc4620090  lwc1        $f2, 0x90($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d20) {
            ctx->pc = 0x128D44u;
            goto label_128d44;
        }
    }
    ctx->pc = 0x128D28u;
    // 0x128d28: 0x2863821  addu        $a3, $s4, $a2
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x128d2c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x128d30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x128d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d34: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x128d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128d38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128d38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128d3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x128d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x128d40: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x128d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_128d44:
    // 0x128d44: 0x0  nop
    ctx->pc = 0x128d44u;
    // NOP
    // 0x128d48: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x128d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x128d4c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x128d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_128d50:
    // 0x128d50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x128d54: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x128d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x128d58: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x128D58u;
    {
        const bool branch_taken_0x128d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D58u;
        // 0x128d5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d58) {
            ctx->pc = 0x128D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d10;
        }
    }
    ctx->pc = 0x128D60u;
    // 0x128d60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x128d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128d64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x128d64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128d68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128d68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128d6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d84: 0x3e00008  jr          $ra
    ctx->pc = 0x128D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D84u;
        // 0x128d88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128D8Cu;
    // 0x128d8c: 0x0  nop
    ctx->pc = 0x128d8cu;
    // NOP
    // 0x128d90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x128d94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x128d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x128d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x128d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x128d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128da0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x128da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128da8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x128da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128db0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128DB0u;
    SET_GPR_U32(ctx, 31, 0x128DB8u);
    ctx->pc = 0x128DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DB0u;
    // 0x128db4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128DB0u, 0x128DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DB8u;
label_128db8:
    // 0x128db8: 0xc04a050  jal         func_128140
    ctx->pc = 0x128DB8u;
    SET_GPR_U32(ctx, 31, 0x128DC0u);
    ctx->pc = 0x128DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DB8u;
    // 0x128dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128140u, 0x128DB8u, 0x128DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DC0u;
label_128dc0:
    // 0x128dc0: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x128dc4: 0x8e710018  lw          $s1, 0x18($s3)
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x128dc8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128DC8u;
    SET_GPR_U32(ctx, 31, 0x128DD0u);
    ctx->pc = 0x128DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DC8u;
    // 0x128dcc: 0xae930128  sw          $s3, 0x128($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128DC8u, 0x128DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DD0u;
label_128dd0:
    // 0x128dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x128dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dd4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x128dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128DD8u;
    {
        const bool branch_taken_0x128dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128dd8) {
            ctx->pc = 0x128DE8u;
            goto label_128de8;
        }
    }
    ctx->pc = 0x128DE0u;
    // 0x128de0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x128de4: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x128de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
label_128de8:
    // 0x128de8: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128dec: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128DECu;
    SET_GPR_U32(ctx, 31, 0x128DF4u);
    ctx->pc = 0x128DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DECu;
    // 0x128df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128DECu, 0x128DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DF4u;
label_128df4:
    // 0x128df4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x128df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128df8: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x128DF8u;
    SET_GPR_U32(ctx, 31, 0x128E00u);
    ctx->pc = 0x128DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF8u;
    // 0x128dfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x128DF8u, 0x128E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E00u;
label_128e00:
    // 0x128e00: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128e04: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x128e08: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x128e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e0c: 0x7e8300b0  sq          $v1, 0xB0($s4)
    ctx->pc = 0x128e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 176), GPR_VEC(ctx, 3));
    // 0x128e10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128e14: 0x7e8200c0  sq          $v0, 0xC0($s4)
    ctx->pc = 0x128e14u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 192), GPR_VEC(ctx, 2));
    // 0x128e18: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x128e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e1c: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x128e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
    // 0x128e20: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x128e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e24: 0xe68000d4  swc1        $f0, 0xD4($s4)
    ctx->pc = 0x128e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
    // 0x128e28: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x128e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x128e2c: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128E2Cu;
    SET_GPR_U32(ctx, 31, 0x128E34u);
    ctx->pc = 0x128E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E2Cu;
    // 0x128e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128E2Cu, 0x128E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E34u;
label_128e34:
    // 0x128e34: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x128e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x128e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x128e40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128e48: 0x0  nop
    ctx->pc = 0x128e48u;
    // NOP
    // 0x128e4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128e50: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x128e50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128e54: 0x0  nop
    ctx->pc = 0x128e54u;
    // NOP
    // 0x128e58: 0x0  nop
    ctx->pc = 0x128e58u;
    // NOP
    // 0x128e5c: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128E5Cu;
    SET_GPR_U32(ctx, 31, 0x128E64u);
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128E5Cu, 0x128E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E64u;
label_128e64:
    // 0x128e64: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128e68: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128e6c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x128e6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e70: 0x7e8300e0  sq          $v1, 0xE0($s4)
    ctx->pc = 0x128e70u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 224), GPR_VEC(ctx, 3));
    // 0x128e74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128e78: 0x7e8200f0  sq          $v0, 0xF0($s4)
    ctx->pc = 0x128e78u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 240), GPR_VEC(ctx, 2));
    // 0x128e7c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x128e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e80: 0xe6800100  swc1        $f0, 0x100($s4)
    ctx->pc = 0x128e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    // 0x128e84: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x128e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e88: 0xe6800104  swc1        $f0, 0x104($s4)
    ctx->pc = 0x128e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 260), bits); }
    // 0x128e8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x128e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x128e90: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x128e90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x128e94: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x128e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e98: 0xe680011c  swc1        $f0, 0x11C($s4)
    ctx->pc = 0x128e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 284), bits); }
    // 0x128e9c: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128ea0: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x128ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x128ea4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x128ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x128ea8: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x128ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x128eac: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128eb0: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128EB0u;
    SET_GPR_U32(ctx, 31, 0x128EB8u);
    ctx->pc = 0x128EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EB0u;
    // 0x128eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128EB0u, 0x128EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EB8u;
label_128eb8:
    // 0x128eb8: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128ebc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x128ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128ec0: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128EC0u;
    SET_GPR_U32(ctx, 31, 0x128EC8u);
    ctx->pc = 0x128EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EC0u;
    // 0x128ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128EC0u, 0x128EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EC8u;
label_128ec8:
    // 0x128ec8: 0x8e830118  lw          $v1, 0x118($s4)
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128ecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ed0: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x128ED0u;
    {
        const bool branch_taken_0x128ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x128ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ED0u;
        // 0x128ed4: 0xae83012c  sw          $v1, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ed0) {
            ctx->pc = 0x128EFCu;
            goto label_128efc;
        }
    }
    ctx->pc = 0x128ED8u;
    // 0x128ed8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128ED8u;
    {
        const bool branch_taken_0x128ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ed8) {
            ctx->pc = 0x128EE8u;
            goto label_128ee8;
        }
    }
    ctx->pc = 0x128EE0u;
    // 0x128ee0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x128EE0u;
    {
        const bool branch_taken_0x128ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EE0u;
        // 0x128ee4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ee0) {
            ctx->pc = 0x128F10u;
            goto label_128f10;
        }
    }
    ctx->pc = 0x128EE8u;
label_128ee8:
    // 0x128ee8: 0xae800110  sw          $zero, 0x110($s4)
    ctx->pc = 0x128ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 0));
    // 0x128eec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x128eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ef0: 0xae840114  sw          $a0, 0x114($s4)
    ctx->pc = 0x128ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 4));
    // 0x128ef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128EF4u;
    {
        const bool branch_taken_0x128ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF4u;
        // 0x128ef8: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef4) {
            ctx->pc = 0x128F0Cu;
            goto label_128f0c;
        }
    }
    ctx->pc = 0x128EFCu;
label_128efc:
    // 0x128efc: 0xae910110  sw          $s1, 0x110($s4)
    ctx->pc = 0x128efcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 17));
    // 0x128f00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128f04: 0xae910114  sw          $s1, 0x114($s4)
    ctx->pc = 0x128f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 17));
    // 0x128f08: 0xae8300a0  sw          $v1, 0xA0($s4)
    ctx->pc = 0x128f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
label_128f0c:
    // 0x128f0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x128f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_128f10:
    // 0x128f10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128f14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128f24: 0x3e00008  jr          $ra
    ctx->pc = 0x128F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F24u;
        // 0x128f28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128F2Cu;
    // 0x128f2c: 0x0  nop
    ctx->pc = 0x128f2cu;
    // NOP
    // 0x128f30: 0x8c850128  lw          $a1, 0x128($a0)
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x128f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f38: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x128f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x128f3c: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x128f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x128f40: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x128F40u;
    {
        const bool branch_taken_0x128f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x128f40) {
            ctx->pc = 0x128F68u;
            goto label_128f68;
        }
    }
    ctx->pc = 0x128F48u;
    // 0x128f48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x128F48u;
    {
        const bool branch_taken_0x128f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f48) {
            ctx->pc = 0x128F58u;
            goto label_128f58;
        }
    }
    ctx->pc = 0x128F50u;
    // 0x128f50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128F50u;
    {
        const bool branch_taken_0x128f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f50) {
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F58u;
label_128f58:
    // 0x128f58: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x128f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x128f5c: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x128f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x128f60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128F60u;
    {
        const bool branch_taken_0x128f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F60u;
        // 0x128f64: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f60) {
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F68u;
label_128f68:
    // 0x128f68: 0xac860110  sw          $a2, 0x110($a0)
    ctx->pc = 0x128f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 6));
    // 0x128f6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x128f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128f70: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x128f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x128f74: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x128f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
label_128f78:
    // 0x128f78: 0x3e00008  jr          $ra
    ctx->pc = 0x128F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128F80u;
    // 0x128f80: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x128f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x128f88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x128f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x128f8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x128f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x128f90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x128f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x128f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f98: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128F98u;
    SET_GPR_U32(ctx, 31, 0x128FA0u);
    ctx->pc = 0x128F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F98u;
    // 0x128f9c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128F98u, 0x128FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FA0u;
label_128fa0:
    // 0x128fa0: 0xc04a050  jal         func_128140
    ctx->pc = 0x128FA0u;
    SET_GPR_U32(ctx, 31, 0x128FA8u);
    ctx->pc = 0x128FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FA0u;
    // 0x128fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128140u, 0x128FA0u, 0x128FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FA8u;
label_128fa8:
    // 0x128fa8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x128fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x128fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128fb0: 0x0  nop
    ctx->pc = 0x128fb0u;
    // NOP
    // 0x128fb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x128fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128fb8: 0x0  nop
    ctx->pc = 0x128fb8u;
    // NOP
    // 0x128fbc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x128FBCu;
    {
        const bool branch_taken_0x128fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fbc) {
            ctx->pc = 0x128FD8u;
            goto label_128fd8;
        }
    }
    ctx->pc = 0x128FC4u;
    // 0x128fc4: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x128fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128fc8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x128fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x128fcc: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x128fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x128fd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x128FD0u;
    {
        const bool branch_taken_0x128fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FD0u;
        // 0x128fd4: 0xae0300a8  sw          $v1, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd0) {
            ctx->pc = 0x128FFCu;
            goto label_128ffc;
        }
    }
    ctx->pc = 0x128FD8u;
label_128fd8:
    // 0x128fd8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x128fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x128fdc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x128fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x128fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128fe4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x128fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128fe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128fec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x128fecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128ff0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x128ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x128ff4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x128ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x128ff8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x128ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_128ffc:
    // 0x128ffc: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x128ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x129000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x129000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129004: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x129004u;
    {
        const bool branch_taken_0x129004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x129008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129004u;
        // 0x129008: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129004) {
            ctx->pc = 0x1292BCu;
            goto label_1292bc;
        }
    }
    ctx->pc = 0x12900Cu;
    // 0x12900c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12900Cu;
    {
        const bool branch_taken_0x12900c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12900c) {
            ctx->pc = 0x12901Cu;
            goto label_12901c;
        }
    }
    ctx->pc = 0x129014u;
    // 0x129014: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x129014u;
    {
        const bool branch_taken_0x129014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129014u;
        // 0x129018: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129014) {
            ctx->pc = 0x12940Cu;
            goto label_12940c;
        }
    }
    ctx->pc = 0x12901Cu;
label_12901c:
    // 0x12901c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x129020: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x129020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129024: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x129024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129028: 0x0  nop
    ctx->pc = 0x129028u;
    // NOP
    // 0x12902c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x12902Cu;
    {
        const bool branch_taken_0x12902c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12902c) {
            ctx->pc = 0x129118u;
            goto label_129118;
        }
    }
    ctx->pc = 0x129034u;
    // 0x129034: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129034u;
    SET_GPR_U32(ctx, 31, 0x12903Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129034u, 0x12903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12903Cu;
label_12903c:
    // 0x12903c: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x12903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x129040: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x129040u;
    SET_GPR_U32(ctx, 31, 0x129048u);
    ctx->pc = 0x129044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129040u;
    // 0x129044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x129040u, 0x129048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129048u;
label_129048:
    // 0x129048: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129048u;
    SET_GPR_U32(ctx, 31, 0x129050u);
    ctx->pc = 0x12904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129048u;
    // 0x12904c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129048u, 0x129050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129050u;
label_129050:
    // 0x129050: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x129050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x129054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129058: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x129058u;
    SET_GPR_U32(ctx, 31, 0x129060u);
    ctx->pc = 0x12905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129058u;
    // 0x12905c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x129058u, 0x129060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129060u;
label_129060:
    // 0x129060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129064: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x129068: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x129068u;
    SET_GPR_U32(ctx, 31, 0x129070u);
    ctx->pc = 0x12906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129068u;
    // 0x12906c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x129068u, 0x129070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129070u;
label_129070:
    // 0x129070: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x129070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x129074: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x129074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129078: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x129078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x12907c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x12907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129080: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x129080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x129084: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x129084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x129088: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x129088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x12908c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x12908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x129090: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x129090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x129094: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x129094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x129098: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x129098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x12909c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1290a0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290a4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x1290a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1290a8: 0x0  nop
    ctx->pc = 0x1290a8u;
    // NOP
    // 0x1290ac: 0x0  nop
    ctx->pc = 0x1290acu;
    // NOP
    // 0x1290b0: 0xc049860  jal         func_126180
    ctx->pc = 0x1290B0u;
    SET_GPR_U32(ctx, 31, 0x1290B8u);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x1290B0u, 0x1290B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1290B8u;
label_1290b8:
    // 0x1290b8: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x1290b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1290bc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1290bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1290c0: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x1290c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1290c4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1290c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1290c8: 0x27a800f4  addiu       $t0, $sp, 0xF4
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1290cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1290ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290d0: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1290d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1290d4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1290d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1290d8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1290d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1290dc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x1290dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290e0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1290e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1290e4: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1290e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290e8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1290e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1290ec: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1290ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1290f0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1290f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1290f4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1290f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1290f8: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1290f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1290fc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1290fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129100: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x129100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x129104: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x129104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129108: 0xc049948  jal         func_126520
    ctx->pc = 0x129108u;
    SET_GPR_U32(ctx, 31, 0x129110u);
    ctx->pc = 0x12910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129108u;
    // 0x12910c: 0xe7a00214  swc1        $f0, 0x214($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x129108u, 0x129110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129110u;
label_129110:
    // 0x129110: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x129110u;
    {
        const bool branch_taken_0x129110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129110) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x129118u;
label_129118:
    // 0x129118: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x129118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12911c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12911cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129120: 0x0  nop
    ctx->pc = 0x129120u;
    // NOP
    // 0x129124: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x129124u;
    {
        const bool branch_taken_0x129124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129124) {
            ctx->pc = 0x1291C8u;
            goto label_1291c8;
        }
    }
    ctx->pc = 0x12912Cu;
    // 0x12912c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12912Cu;
    SET_GPR_U32(ctx, 31, 0x129134u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12912Cu, 0x129134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129134u;
label_129134:
    // 0x129134: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x129138: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x129138u;
    SET_GPR_U32(ctx, 31, 0x129140u);
    ctx->pc = 0x12913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129138u;
    // 0x12913c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x129138u, 0x129140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129140u;
label_129140:
    // 0x129140: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129140u;
    SET_GPR_U32(ctx, 31, 0x129148u);
    ctx->pc = 0x129144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129140u;
    // 0x129144: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129140u, 0x129148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129148u;
label_129148:
    // 0x129148: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12914c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129150: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x129150u;
    SET_GPR_U32(ctx, 31, 0x129158u);
    ctx->pc = 0x129154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129150u;
    // 0x129154: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x129150u, 0x129158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129158u;
label_129158:
    // 0x129158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12915c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x12915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x129160: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x129160u;
    SET_GPR_U32(ctx, 31, 0x129168u);
    ctx->pc = 0x129164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129160u;
    // 0x129164: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x129160u, 0x129168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129168u;
label_129168:
    // 0x129168: 0x7ba30220  lq          $v1, 0x220($sp)
    ctx->pc = 0x129168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12916c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x12916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x129170: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x129170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x129174: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x129174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x129178: 0x27a80124  addiu       $t0, $sp, 0x124
    ctx->pc = 0x129178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x12917c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129180: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x129180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x129184: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x129184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x129188: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x129188u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12918c: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x12918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129190: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x129190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x129194: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x129194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129198: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x129198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12919c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x12919cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1291a0: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1291a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x1291a4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1291a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1291a8: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1291a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x1291ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1291acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1291b0: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x1291b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1291b4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1291b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1291b8: 0xc049948  jal         func_126520
    ctx->pc = 0x1291B8u;
    SET_GPR_U32(ctx, 31, 0x1291C0u);
    ctx->pc = 0x1291BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291B8u;
    // 0x1291bc: 0xe7a00274  swc1        $f0, 0x274($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1291B8u, 0x1291C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291C0u;
label_1291c0:
    // 0x1291c0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1291C0u;
    {
        const bool branch_taken_0x1291c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291c0) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x1291C8u;
label_1291c8:
    // 0x1291c8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1291C8u;
    SET_GPR_U32(ctx, 31, 0x1291D0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1291C8u, 0x1291D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291D0u;
label_1291d0:
    // 0x1291d0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1291d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1291d4: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x1291D4u;
    SET_GPR_U32(ctx, 31, 0x1291DCu);
    ctx->pc = 0x1291D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291D4u;
    // 0x1291d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x1291D4u, 0x1291DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291DCu;
label_1291dc:
    // 0x1291dc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1291DCu;
    SET_GPR_U32(ctx, 31, 0x1291E4u);
    ctx->pc = 0x1291E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291DCu;
    // 0x1291e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1291DCu, 0x1291E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291E4u;
label_1291e4:
    // 0x1291e4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1291e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1291e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291ec: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x1291ECu;
    SET_GPR_U32(ctx, 31, 0x1291F4u);
    ctx->pc = 0x1291F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291ECu;
    // 0x1291f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x1291ECu, 0x1291F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291F4u;
label_1291f4:
    // 0x1291f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1291f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1291f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1291f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1291fc: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x1291FCu;
    SET_GPR_U32(ctx, 31, 0x129204u);
    ctx->pc = 0x129200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1291FCu;
    // 0x129200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x1291FCu, 0x129204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129204u;
label_129204:
    // 0x129204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129208: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x129208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x12920c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12920cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129210: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x129210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x129214: 0xc7a202a0  lwc1        $f2, 0x2A0($sp)
    ctx->pc = 0x129214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129218: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12921c: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x12921cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x129220: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x129220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129224: 0x46141801  sub.s       $f0, $f3, $f20
    ctx->pc = 0x129224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x129228: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12922c: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x12922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x129230: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x129230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x129234: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x129234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x129238: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x129238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x12923c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x12923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x129240: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x129240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129244: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x129244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x129248: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x129248u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12924c: 0x0  nop
    ctx->pc = 0x12924cu;
    // NOP
    // 0x129250: 0x0  nop
    ctx->pc = 0x129250u;
    // NOP
    // 0x129254: 0xc049860  jal         func_126180
    ctx->pc = 0x129254u;
    SET_GPR_U32(ctx, 31, 0x12925Cu);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x129254u, 0x12925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12925Cu;
label_12925c:
    // 0x12925c: 0x7ba302b0  lq          $v1, 0x2B0($sp)
    ctx->pc = 0x12925cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x129260: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x129264: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x129264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x129268: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x129268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x12926c: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x12926cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x129270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129274: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x129274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x129278: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x129278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
    // 0x12927c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12927cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x129280: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x129280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129284: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x129284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x129288: 0xc7a002d4  lwc1        $f0, 0x2D4($sp)
    ctx->pc = 0x129288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12928c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x12928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x129290: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x129290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x129294: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x129294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    // 0x129298: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x129298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12929c: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x12929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    // 0x1292a0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1292a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292a4: 0xe7a00300  swc1        $f0, 0x300($sp)
    ctx->pc = 0x1292a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x1292a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1292a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292ac: 0xc049948  jal         func_126520
    ctx->pc = 0x1292ACu;
    SET_GPR_U32(ctx, 31, 0x1292B4u);
    ctx->pc = 0x1292B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292ACu;
    // 0x1292b0: 0xe7a00304  swc1        $f0, 0x304($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1292ACu, 0x1292B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292B4u;
label_1292b4:
    // 0x1292b4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1292B4u;
    {
        const bool branch_taken_0x1292b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292b4) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x1292BCu;
label_1292bc:
    // 0x1292bc: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1292BCu;
    SET_GPR_U32(ctx, 31, 0x1292C4u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1292BCu, 0x1292C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292C4u;
label_1292c4:
    // 0x1292c4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1292c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1292c8: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x1292C8u;
    SET_GPR_U32(ctx, 31, 0x1292D0u);
    ctx->pc = 0x1292CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292C8u;
    // 0x1292cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x1292C8u, 0x1292D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292D0u;
label_1292d0:
    // 0x1292d0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1292D0u;
    SET_GPR_U32(ctx, 31, 0x1292D8u);
    ctx->pc = 0x1292D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292D0u;
    // 0x1292d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1292D0u, 0x1292D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292D8u;
label_1292d8:
    // 0x1292d8: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1292dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1292dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292e0: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x1292E0u;
    SET_GPR_U32(ctx, 31, 0x1292E8u);
    ctx->pc = 0x1292E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292E0u;
    // 0x1292e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x1292E0u, 0x1292E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292E8u;
label_1292e8:
    // 0x1292e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1292e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292ec: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1292ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1292f0: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x1292F0u;
    SET_GPR_U32(ctx, 31, 0x1292F8u);
    ctx->pc = 0x1292F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1292F0u;
    // 0x1292f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x1292F0u, 0x1292F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1292F8u;
label_1292f8:
    // 0x1292f8: 0x27a20310  addiu       $v0, $sp, 0x310
    ctx->pc = 0x1292f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1292fc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129300: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x129300u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129304: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x129304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x129308: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x12930c: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x12930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x129310: 0x27a20320  addiu       $v0, $sp, 0x320
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x129314: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x129314u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x129318: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x129318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12931c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12931cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x129320: 0xc7a10330  lwc1        $f1, 0x330($sp)
    ctx->pc = 0x129320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129324: 0xc7a00334  lwc1        $f0, 0x334($sp)
    ctx->pc = 0x129324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129328: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x129328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12932c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12932cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x129330: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x129330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129334: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x129334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12933c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12933cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x129340: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x129340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129344: 0x0  nop
    ctx->pc = 0x129344u;
    // NOP
    // 0x129348: 0x0  nop
    ctx->pc = 0x129348u;
    // NOP
    // 0x12934c: 0xc049860  jal         func_126180
    ctx->pc = 0x12934Cu;
    SET_GPR_U32(ctx, 31, 0x129354u);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x12934Cu, 0x129354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129354u;
label_129354:
    // 0x129354: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x129354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x129358: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x129358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12935c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12935cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129360: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x129360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x129364: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x129364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x129368: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x129368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x12936c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129370: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x129374: 0x27a20350  addiu       $v0, $sp, 0x350
    ctx->pc = 0x129374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x129378: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x129378u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x12937c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x12937cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129380: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x129380u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x129384: 0xc7a00360  lwc1        $f0, 0x360($sp)
    ctx->pc = 0x129384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129388: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x129388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12938c: 0xc7a00364  lwc1        $f0, 0x364($sp)
    ctx->pc = 0x12938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129390: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x129390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x129394: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x129394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129398: 0x7fa20370  sq          $v0, 0x370($sp)
    ctx->pc = 0x129398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 2));
    // 0x12939c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12939cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1293a0: 0x7fa20380  sq          $v0, 0x380($sp)
    ctx->pc = 0x1293a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 2));
    // 0x1293a4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1293a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293a8: 0xe7a00390  swc1        $f0, 0x390($sp)
    ctx->pc = 0x1293a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x1293ac: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1293acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293b0: 0xc049948  jal         func_126520
    ctx->pc = 0x1293B0u;
    SET_GPR_U32(ctx, 31, 0x1293B8u);
    ctx->pc = 0x1293B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293B0u;
    // 0x1293b4: 0xe7a00394  swc1        $f0, 0x394($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x1293B0u, 0x1293B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293B8u;
label_1293b8:
    // 0x1293b8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1293b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1293bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1293bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1293c0: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x1293c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x1293c4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1293c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1293c8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1293C8u;
    {
        const bool branch_taken_0x1293c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1293CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293C8u;
        // 0x1293cc: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293c8) {
            ctx->pc = 0x129408u;
            goto label_129408;
        }
    }
    ctx->pc = 0x1293D0u;
    // 0x1293d0: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x1293D0u;
    SET_GPR_U32(ctx, 31, 0x1293D8u);
    ctx->pc = 0x1293D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1293D0u;
    // 0x1293d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x1293D0u, 0x1293D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293D8u;
label_1293d8:
    // 0x1293d8: 0x27a303a0  addiu       $v1, $sp, 0x3A0
    ctx->pc = 0x1293d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x1293dc: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x1293dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x1293e0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1293e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1293e4: 0x7e0500b0  sq          $a1, 0xB0($s0)
    ctx->pc = 0x1293e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 5));
    // 0x1293e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1293e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1293ec: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x1293ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1293f0: 0x7e0400c0  sq          $a0, 0xC0($s0)
    ctx->pc = 0x1293f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 4));
    // 0x1293f4: 0xc7a003c0  lwc1        $f0, 0x3C0($sp)
    ctx->pc = 0x1293f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293f8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1293f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1293fc: 0xc7a003c4  lwc1        $f0, 0x3C4($sp)
    ctx->pc = 0x1293fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129400: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x129400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x129404: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x129404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_129408:
    // 0x129408: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12940c:
    // 0x12940c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129410: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x129410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x129414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129418: 0x3e00008  jr          $ra
    ctx->pc = 0x129418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129418u;
        // 0x12941c: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129420u;
    // 0x129420: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x129420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x129424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129428: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x129428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x12942c: 0x3e00008  jr          $ra
    ctx->pc = 0x12942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12942Cu;
        // 0x129430: 0xac830138  sw          $v1, 0x138($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129434u;
    // 0x129434: 0x0  nop
    ctx->pc = 0x129434u;
    // NOP
    // 0x129438: 0x0  nop
    ctx->pc = 0x129438u;
    // NOP
    // 0x12943c: 0x0  nop
    ctx->pc = 0x12943cu;
    // NOP
label_129440:
    // 0x129440: 0x3e00008  jr          $ra
    ctx->pc = 0x129440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129440u;
        // 0x129444: 0xac850118  sw          $a1, 0x118($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129448u;
}
