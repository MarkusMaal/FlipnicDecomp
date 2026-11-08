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

// Function: FUN_00102100
// Address: 0x102100 - 0x10289c
void FUN_00102100_0x102100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00102100_0x102100");
#endif

    switch (ctx->pc) {
        case 0x102134u: goto label_102134;
        case 0x102140u: goto label_102140;
        case 0x102148u: goto label_102148;
        case 0x102164u: goto label_102164;
        case 0x102194u: goto label_102194;
        case 0x10219cu: goto label_10219c;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021ecu: goto label_1021ec;
        case 0x10223cu: goto label_10223c;
        case 0x102250u: goto label_102250;
        case 0x102258u: goto label_102258;
        case 0x102268u: goto label_102268;
        case 0x1022c0u: goto label_1022c0;
        case 0x1022d0u: goto label_1022d0;
        case 0x10232cu: goto label_10232c;
        case 0x10233cu: goto label_10233c;
        case 0x102398u: goto label_102398;
        case 0x1023a4u: goto label_1023a4;
        case 0x102498u: goto label_102498;
        case 0x1024dcu: goto label_1024dc;
        case 0x10251cu: goto label_10251c;
        case 0x102544u: goto label_102544;
        case 0x102550u: goto label_102550;
        case 0x102568u: goto label_102568;
        case 0x102574u: goto label_102574;
        case 0x10258cu: goto label_10258c;
        case 0x1025a4u: goto label_1025a4;
        case 0x1025b4u: goto label_1025b4;
        case 0x1025dcu: goto label_1025dc;
        case 0x102618u: goto label_102618;
        case 0x102668u: goto label_102668;
        case 0x10268cu: goto label_10268c;
        case 0x1026b4u: goto label_1026b4;
        case 0x1026d8u: goto label_1026d8;
        case 0x1026ecu: goto label_1026ec;
        case 0x102738u: goto label_102738;
        case 0x102748u: goto label_102748;
        case 0x102750u: goto label_102750;
        case 0x102764u: goto label_102764;
        case 0x1027a4u: goto label_1027a4;
        case 0x1027ccu: goto label_1027cc;
        case 0x1027d8u: goto label_1027d8;
        case 0x1027fcu: goto label_1027fc;
        case 0x10284cu: goto label_10284c;
        case 0x102858u: goto label_102858;
        case 0x102860u: goto label_102860;
        case 0x102868u: goto label_102868;
        case 0x102870u: goto label_102870;
        default: break;
    }

    ctx->pc = 0x102100u;

    // 0x102100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x102104: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x102104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x102108: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x102108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10210c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x102110: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x102110u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102114: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x102114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x102118: 0x24043e00  addiu       $a0, $zero, 0x3E00
    ctx->pc = 0x102118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15872));
    // 0x10211c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x102120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x102120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x102124: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x102124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x102128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10212c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10212Cu;
    SET_GPR_U32(ctx, 31, 0x102134u);
    ctx->pc = 0x102130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10212Cu;
    // 0x102130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10212Cu, 0x102134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102134u;
label_102134:
    // 0x102134: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x102134u;
    {
        const bool branch_taken_0x102134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102134u;
        // 0x102138: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102134) {
            ctx->pc = 0x102184u;
            goto label_102184;
        }
    }
    ctx->pc = 0x10213Cu;
    // 0x10213c: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x10213cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_102140:
    // 0x102140: 0xc055ec8  jal         func_157B20
    ctx->pc = 0x102140u;
    SET_GPR_U32(ctx, 31, 0x102148u);
    ctx->pc = 0x102144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102140u;
    // 0x102144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B20u, 0x102140u, 0x102148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102148u;
label_102148:
    // 0x102148: 0x263103d0  addiu       $s1, $s1, 0x3D0
    ctx->pc = 0x102148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
    // 0x10214c: 0x26022660  addiu       $v0, $s0, 0x2660
    ctx->pc = 0x10214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9824));
    // 0x102150: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x102150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x102154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102154u;
    {
        const bool branch_taken_0x102154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102154) {
            ctx->pc = 0x102140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102140;
        }
    }
    ctx->pc = 0x10215Cu;
    // 0x10215c: 0xc040a28  jal         func_1028A0
    ctx->pc = 0x10215Cu;
    SET_GPR_U32(ctx, 31, 0x102164u);
    ctx->pc = 0x102160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10215Cu;
    // 0x102160: 0x26042c00  addiu       $a0, $s0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1028A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1028A0u, 0x10215Cu, 0x102164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102164u;
label_102164:
    // 0x102164: 0xae002c1c  sw          $zero, 0x2C1C($s0)
    ctx->pc = 0x102164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11292), GPR_U32(ctx, 0));
    // 0x102168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10216c: 0xae002c20  sw          $zero, 0x2C20($s0)
    ctx->pc = 0x10216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11296), GPR_U32(ctx, 0));
    // 0x102170: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102174: 0xae032c00  sw          $v1, 0x2C00($s0)
    ctx->pc = 0x102174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11264), GPR_U32(ctx, 3));
    // 0x102178: 0xae032c04  sw          $v1, 0x2C04($s0)
    ctx->pc = 0x102178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11268), GPR_U32(ctx, 3));
    // 0x10217c: 0xae032c14  sw          $v1, 0x2C14($s0)
    ctx->pc = 0x10217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11284), GPR_U32(ctx, 3));
    // 0x102180: 0xae022c18  sw          $v0, 0x2C18($s0)
    ctx->pc = 0x102180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11288), GPR_U32(ctx, 2));
label_102184:
    // 0x102184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102188: 0xaf908218  sw          $s0, -0x7DE8($gp)
    ctx->pc = 0x102188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935064), GPR_U32(ctx, 16));
    // 0x10218c: 0xc057430  jal         func_15D0C0
    ctx->pc = 0x10218Cu;
    SET_GPR_U32(ctx, 31, 0x102194u);
    ctx->pc = 0x102190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10218Cu;
    // 0x102190: 0xaf9085f4  sw          $s0, -0x7A0C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0C0u, 0x10218Cu, 0x102194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102194u;
label_102194:
    // 0x102194: 0xc041d58  jal         func_107560
    ctx->pc = 0x102194u;
    SET_GPR_U32(ctx, 31, 0x10219Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x102194u, 0x10219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10219Cu;
label_10219c:
    // 0x10219c: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10219cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021a0: 0xc046070  jal         func_1181C0
    ctx->pc = 0x1021A0u;
    SET_GPR_U32(ctx, 31, 0x1021A8u);
    ctx->pc = 0x1021A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021A0u;
    // 0x1021a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1181C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1181C0u, 0x1021A0u, 0x1021A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021A8u;
label_1021a8:
    // 0x1021a8: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x1021a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021ac: 0xc04610c  jal         func_118430
    ctx->pc = 0x1021ACu;
    SET_GPR_U32(ctx, 31, 0x1021B4u);
    ctx->pc = 0x1021B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021ACu;
    // 0x1021b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118430u, 0x1021ACu, 0x1021B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021B4u;
label_1021b4:
    // 0x1021b4: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1021b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1021b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1021bc: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1021BCu;
    SET_GPR_U32(ctx, 31, 0x1021C4u);
    ctx->pc = 0x1021C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021BCu;
    // 0x1021c0: 0x24a5e048  addiu       $a1, $a1, -0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1021BCu, 0x1021C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021C4u;
label_1021c4:
    // 0x1021c4: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1021c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1021c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1021cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1021ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1021d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1021d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1021d4: 0x24a5e050  addiu       $a1, $a1, -0x1FB0
    ctx->pc = 0x1021d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959184));
    // 0x1021d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1021d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1021dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1021e0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1021e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1021e4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1021E4u;
    SET_GPR_U32(ctx, 31, 0x1021ECu);
    ctx->pc = 0x1021E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021E4u;
    // 0x1021e8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1021E4u, 0x1021ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021ECu;
label_1021ec:
    // 0x1021ec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1021ECu;
    {
        const bool branch_taken_0x1021ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1021F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021ECu;
        // 0x1021f0: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021ec) {
            ctx->pc = 0x1021FCu;
            goto label_1021fc;
        }
    }
    ctx->pc = 0x1021F4u;
    // 0x1021f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1021F4u;
    {
        const bool branch_taken_0x1021f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1021F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1021F4u;
        // 0x1021f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021f4) {
            ctx->pc = 0x102214u;
            goto label_102214;
        }
    }
    ctx->pc = 0x1021FCu;
label_1021fc:
    // 0x1021fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1021fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102200: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102204: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x102204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10220c: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x10220cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102210: 0x0  nop
    ctx->pc = 0x102210u;
    // NOP
label_102214:
    // 0x102214: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x102214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10221c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x102220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102224: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102228: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10222c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x10222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x102230: 0x24442c00  addiu       $a0, $v0, 0x2C00
    ctx->pc = 0x102230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x102234: 0xc0581b4  jal         func_1606D0
    ctx->pc = 0x102234u;
    SET_GPR_U32(ctx, 31, 0x10223Cu);
    ctx->pc = 0x102238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102234u;
    // 0x102238: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1606D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606D0u, 0x102234u, 0x10223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10223Cu;
label_10223c:
    // 0x10223c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102248: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x102248u;
    SET_GPR_U32(ctx, 31, 0x102250u);
    ctx->pc = 0x10224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102248u;
    // 0x10224c: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x102248u, 0x102250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102250u;
label_102250:
    // 0x102250: 0xc0571c8  jal         func_15C720
    ctx->pc = 0x102250u;
    SET_GPR_U32(ctx, 31, 0x102258u);
    ctx->pc = 0x102254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102250u;
    // 0x102254: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C720u, 0x102250u, 0x102258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102258u;
label_102258:
    // 0x102258: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10225c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102260: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102260u;
    SET_GPR_U32(ctx, 31, 0x102268u);
    ctx->pc = 0x102264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102260u;
    // 0x102264: 0x24a5e058  addiu       $a1, $a1, -0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102260u, 0x102268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102268u;
label_102268:
    // 0x102268: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x102268u;
    {
        const bool branch_taken_0x102268 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102268) {
            ctx->pc = 0x1022C0u;
            goto label_1022c0;
        }
    }
    ctx->pc = 0x102270u;
    // 0x102270: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102270u;
    {
        const bool branch_taken_0x102270 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102270u;
        // 0x102274: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102270) {
            ctx->pc = 0x102280u;
            goto label_102280;
        }
    }
    ctx->pc = 0x102278u;
    // 0x102278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102278u;
    {
        const bool branch_taken_0x102278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102278u;
        // 0x10227c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102278) {
            ctx->pc = 0x102298u;
            goto label_102298;
        }
    }
    ctx->pc = 0x102280u;
label_102280:
    // 0x102280: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102284: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102288: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x102288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10228c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102290: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102294: 0x0  nop
    ctx->pc = 0x102294u;
    // NOP
label_102298:
    // 0x102298: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x102298u;
    {
        const bool branch_taken_0x102298 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x102298) {
            ctx->pc = 0x1022C0u;
            goto label_1022c0;
        }
    }
    ctx->pc = 0x1022A0u;
    // 0x1022a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1022a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1022a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1022a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1022ac: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1022acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1022b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1022b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1022b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1022b8: 0xc0571a8  jal         func_15C6A0
    ctx->pc = 0x1022B8u;
    SET_GPR_U32(ctx, 31, 0x1022C0u);
    ctx->pc = 0x1022BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022B8u;
    // 0x1022bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C6A0u, 0x1022B8u, 0x1022C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022C0u;
label_1022c0:
    // 0x1022c0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1022c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1022c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1022c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1022c8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1022C8u;
    SET_GPR_U32(ctx, 31, 0x1022D0u);
    ctx->pc = 0x1022CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022C8u;
    // 0x1022cc: 0x24a5e060  addiu       $a1, $a1, -0x1FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1022C8u, 0x1022D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022D0u;
label_1022d0:
    // 0x1022d0: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1022D0u;
    {
        const bool branch_taken_0x1022d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1022d0) {
            ctx->pc = 0x10232Cu;
            goto label_10232c;
        }
    }
    ctx->pc = 0x1022D8u;
    // 0x1022d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1022D8u;
    {
        const bool branch_taken_0x1022d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1022DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022D8u;
        // 0x1022dc: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022d8) {
            ctx->pc = 0x1022E8u;
            goto label_1022e8;
        }
    }
    ctx->pc = 0x1022E0u;
    // 0x1022e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1022E0u;
    {
        const bool branch_taken_0x1022e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022E0u;
        // 0x1022e4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022e0) {
            ctx->pc = 0x102300u;
            goto label_102300;
        }
    }
    ctx->pc = 0x1022E8u;
label_1022e8:
    // 0x1022e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1022e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1022ec: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1022ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1022f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1022f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1022f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1022f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1022f8: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1022f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1022fc: 0x0  nop
    ctx->pc = 0x1022fcu;
    // NOP
label_102300:
    // 0x102300: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x102300u;
    {
        const bool branch_taken_0x102300 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x102300) {
            ctx->pc = 0x10232Cu;
            goto label_10232c;
        }
    }
    ctx->pc = 0x102308u;
    // 0x102308: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10230c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102310: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102314: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102318: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10231c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102320: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x102320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x102324: 0xc05635c  jal         func_158D70
    ctx->pc = 0x102324u;
    SET_GPR_U32(ctx, 31, 0x10232Cu);
    ctx->pc = 0x102328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102324u;
    // 0x102328: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D70u, 0x102324u, 0x10232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10232Cu;
label_10232c:
    // 0x10232c: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102334: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102334u;
    SET_GPR_U32(ctx, 31, 0x10233Cu);
    ctx->pc = 0x102338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102334u;
    // 0x102338: 0x24a5e068  addiu       $a1, $a1, -0x1F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102334u, 0x10233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10233Cu;
label_10233c:
    // 0x10233c: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10233Cu;
    {
        const bool branch_taken_0x10233c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10233c) {
            ctx->pc = 0x102398u;
            goto label_102398;
        }
    }
    ctx->pc = 0x102344u;
    // 0x102344: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102344u;
    {
        const bool branch_taken_0x102344 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102344u;
        // 0x102348: 0x8f858388  lw          $a1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102344) {
            ctx->pc = 0x102354u;
            goto label_102354;
        }
    }
    ctx->pc = 0x10234Cu;
    // 0x10234c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10234Cu;
    {
        const bool branch_taken_0x10234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10234Cu;
        // 0x102350: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10234c) {
            ctx->pc = 0x10236Cu;
            goto label_10236c;
        }
    }
    ctx->pc = 0x102354u;
label_102354:
    // 0x102354: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102358: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10235c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10235cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102364: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x102364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102368: 0x0  nop
    ctx->pc = 0x102368u;
    // NOP
label_10236c:
    // 0x10236c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10236Cu;
    {
        const bool branch_taken_0x10236c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x10236c) {
            ctx->pc = 0x102398u;
            goto label_102398;
        }
    }
    ctx->pc = 0x102374u;
    // 0x102374: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10237c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10237cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102380: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102384: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x102384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10238c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x10238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x102390: 0xc056358  jal         func_158D60
    ctx->pc = 0x102390u;
    SET_GPR_U32(ctx, 31, 0x102398u);
    ctx->pc = 0x102394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102390u;
    // 0x102394: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D60u, 0x102390u, 0x102398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102398u;
label_102398:
    // 0x102398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10239c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10239cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1023a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1023a4:
    // 0x1023a4: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1023ac: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023b0: 0x28450002  slti        $a1, $v0, 0x2
    ctx->pc = 0x1023b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1023b4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1023b8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1023b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1023bc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1023bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1023c0: 0xacc7023c  sw          $a3, 0x23C($a2)
    ctx->pc = 0x1023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 572), GPR_U32(ctx, 7));
    // 0x1023c4: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023c8: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023cc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1023d0: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x1023d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1023d4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1023d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1023d8: 0xacc7060c  sw          $a3, 0x60C($a2)
    ctx->pc = 0x1023d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1548), GPR_U32(ctx, 7));
    // 0x1023dc: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023e0: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023e4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1023e8: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x1023e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1023ec: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1023ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1023f0: 0xacc709dc  sw          $a3, 0x9DC($a2)
    ctx->pc = 0x1023f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2524), GPR_U32(ctx, 7));
    // 0x1023f4: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x1023f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1023f8: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1023f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1023fc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1023fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102400: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x102404: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102408: 0xacc70dac  sw          $a3, 0xDAC($a2)
    ctx->pc = 0x102408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3500), GPR_U32(ctx, 7));
    // 0x10240c: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x10240cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102410: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102414: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x102414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102418: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x102418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10241c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102420: 0xacc7117c  sw          $a3, 0x117C($a2)
    ctx->pc = 0x102420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4476), GPR_U32(ctx, 7));
    // 0x102424: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102428: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10242c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x10242cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102430: 0x8ce70014  lw          $a3, 0x14($a3)
    ctx->pc = 0x102430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x102434: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102438: 0xacc7154c  sw          $a3, 0x154C($a2)
    ctx->pc = 0x102438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5452), GPR_U32(ctx, 7));
    // 0x10243c: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102440: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102444: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x102444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102448: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x102448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x10244c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102450: 0xacc7191c  sw          $a3, 0x191C($a2)
    ctx->pc = 0x102450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6428), GPR_U32(ctx, 7));
    // 0x102454: 0x8f878214  lw          $a3, -0x7DEC($gp)
    ctx->pc = 0x102454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x102458: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x102458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10245c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x10245cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102460: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x102464: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102468: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x102468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x10246c: 0x24841e80  addiu       $a0, $a0, 0x1E80
    ctx->pc = 0x10246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7808));
    // 0x102470: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x102470u;
    {
        const bool branch_taken_0x102470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x102474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102470u;
        // 0x102474: 0xacc71cec  sw          $a3, 0x1CEC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 7404), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102470) {
            ctx->pc = 0x1023A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1023a4;
        }
    }
    ctx->pc = 0x102478u;
    // 0x102478: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x102478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x10247c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x10247Cu;
    {
        const bool branch_taken_0x10247c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10247Cu;
        // 0x102480: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10247c) {
            ctx->pc = 0x1024C4u;
            goto label_1024c4;
        }
    }
    ctx->pc = 0x102484u;
    // 0x102484: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x102484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x102488: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x102488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10248c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10248cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102494: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x102494u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_102498:
    // 0x102498: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x102498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x10249c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1024a0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1024a4: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x1024a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1024a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1024a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1024ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1024acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1024b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1024b4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1024b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1024b8: 0x24e703d0  addiu       $a3, $a3, 0x3D0
    ctx->pc = 0x1024b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
    // 0x1024bc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1024BCu;
    {
        const bool branch_taken_0x1024bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024BCu;
        // 0x1024c0: 0xac85023c  sw          $a1, 0x23C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024bc) {
            ctx->pc = 0x102498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102498;
        }
    }
    ctx->pc = 0x1024C4u;
label_1024c4:
    // 0x1024c4: 0x0  nop
    ctx->pc = 0x1024c4u;
    // NOP
    // 0x1024c8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1024c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1024cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1024ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1024d0: 0x24a5e030  addiu       $a1, $a1, -0x1FD0
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
    // 0x1024d4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1024D4u;
    SET_GPR_U32(ctx, 31, 0x1024DCu);
    ctx->pc = 0x1024D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024D4u;
    // 0x1024d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1024D4u, 0x1024DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024DCu;
label_1024dc:
    // 0x1024dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1024dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024e0: 0x620001f  bltz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1024E0u;
    {
        const bool branch_taken_0x1024e0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1024e0) {
            ctx->pc = 0x102560u;
            goto label_102560;
        }
    }
    ctx->pc = 0x1024E8u;
    // 0x1024e8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1024E8u;
    {
        const bool branch_taken_0x1024e8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1024ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024E8u;
        // 0x1024ec: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e8) {
            ctx->pc = 0x1024F8u;
            goto label_1024f8;
        }
    }
    ctx->pc = 0x1024F0u;
    // 0x1024f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1024F0u;
    {
        const bool branch_taken_0x1024f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024F0u;
        // 0x1024f4: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024f0) {
            ctx->pc = 0x102514u;
            goto label_102514;
        }
    }
    ctx->pc = 0x1024F8u;
label_1024f8:
    // 0x1024f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1024f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1024fc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1024fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102500: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102508: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x102508u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10250c: 0x0  nop
    ctx->pc = 0x10250cu;
    // NOP
    // 0x102510: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x102510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_102514:
    // 0x102514: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x102514u;
    {
        const bool branch_taken_0x102514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102514u;
        // 0x102518: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102514) {
            ctx->pc = 0x102560u;
            goto label_102560;
        }
    }
    ctx->pc = 0x10251Cu;
label_10251c:
    // 0x10251c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x102520: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x102520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102528: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x102528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10252c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102530: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x102534: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x102534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102538: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x102538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10253c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10253Cu;
    SET_GPR_U32(ctx, 31, 0x102544u);
    ctx->pc = 0x102540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10253Cu;
    // 0x102540: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10253Cu, 0x102544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102544u;
label_102544:
    // 0x102544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102548: 0xc049ea4  jal         func_127A90
    ctx->pc = 0x102548u;
    SET_GPR_U32(ctx, 31, 0x102550u);
    ctx->pc = 0x10254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102548u;
    // 0x10254c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A90u, 0x102548u, 0x102550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102550u;
label_102550:
    // 0x102550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x102554: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x102558: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x102558u;
    {
        const bool branch_taken_0x102558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102558) {
            ctx->pc = 0x10251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10251c;
        }
    }
    ctx->pc = 0x102560u;
label_102560:
    // 0x102560: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x102560u;
    SET_GPR_U32(ctx, 31, 0x102568u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x102560u, 0x102568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102568u;
label_102568:
    // 0x102568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10256c: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x10256Cu;
    SET_GPR_U32(ctx, 31, 0x102574u);
    ctx->pc = 0x102570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10256Cu;
    // 0x102570: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x10256Cu, 0x102574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102574u;
label_102574:
    // 0x102574: 0x8f9585f4  lw          $s5, -0x7A0C($gp)
    ctx->pc = 0x102574u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x102578: 0x8eb62c20  lw          $s6, 0x2C20($s5)
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11296)));
    // 0x10257c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x10257cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x102580: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x102580u;
    {
        const bool branch_taken_0x102580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102580u;
        // 0x102584: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102580) {
            ctx->pc = 0x1025C4u;
            goto label_1025c4;
        }
    }
    ctx->pc = 0x102588u;
    // 0x102588: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x102588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10258c:
    // 0x10258c: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x102590: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x102590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x102594: 0x84520002  lh          $s2, 0x2($v0)
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x102598: 0x84530000  lh          $s3, 0x0($v0)
    ctx->pc = 0x102598u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10259c: 0xc05f58c  jal         func_17D630
    ctx->pc = 0x10259Cu;
    SET_GPR_U32(ctx, 31, 0x1025A4u);
    ctx->pc = 0x1025A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10259Cu;
    // 0x1025a0: 0x84510004  lh          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x10259Cu, 0x1025A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025A4u;
label_1025a4:
    // 0x1025a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1025a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1025a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025ac: 0xc05f768  jal         func_17DDA0
    ctx->pc = 0x1025ACu;
    SET_GPR_U32(ctx, 31, 0x1025B4u);
    ctx->pc = 0x1025B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025ACu;
    // 0x1025b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDA0u, 0x1025ACu, 0x1025B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025B4u;
label_1025b4:
    // 0x1025b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1025b8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1025b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1025bc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1025BCu;
    {
        const bool branch_taken_0x1025bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025BCu;
        // 0x1025c0: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025bc) {
            ctx->pc = 0x10258Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10258c;
        }
    }
    ctx->pc = 0x1025C4u;
label_1025c4:
    // 0x1025c4: 0x0  nop
    ctx->pc = 0x1025c4u;
    // NOP
    // 0x1025c8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1025cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1025ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1025d0: 0x24a5e040  addiu       $a1, $a1, -0x1FC0
    ctx->pc = 0x1025d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
    // 0x1025d4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1025D4u;
    SET_GPR_U32(ctx, 31, 0x1025DCu);
    ctx->pc = 0x1025D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025D4u;
    // 0x1025d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1025D4u, 0x1025DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025DCu;
label_1025dc:
    // 0x1025dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1025dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025e0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1025E0u;
    {
        const bool branch_taken_0x1025e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E0u;
        // 0x1025e4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e0) {
            ctx->pc = 0x1025F0u;
            goto label_1025f0;
        }
    }
    ctx->pc = 0x1025E8u;
    // 0x1025e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1025E8u;
    {
        const bool branch_taken_0x1025e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E8u;
        // 0x1025ec: 0x8f9485f4  lw          $s4, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e8) {
            ctx->pc = 0x10260Cu;
            goto label_10260c;
        }
    }
    ctx->pc = 0x1025F0u;
label_1025f0:
    // 0x1025f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1025f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1025f4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1025f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1025f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1025f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1025fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1025fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102600: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102604: 0x0  nop
    ctx->pc = 0x102604u;
    // NOP
    // 0x102608: 0x8f9485f4  lw          $s4, -0x7A0C($gp)
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10260c:
    // 0x10260c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x10260cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x102610: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x102610u;
    {
        const bool branch_taken_0x102610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102610u;
        // 0x102614: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102610) {
            ctx->pc = 0x102678u;
            goto label_102678;
        }
    }
    ctx->pc = 0x102618u;
label_102618:
    // 0x102618: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x102618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10261c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x10261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102620: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x102620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102624: 0x8e822c1c  lw          $v0, 0x2C1C($s4)
    ctx->pc = 0x102624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11292)));
    // 0x102628: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10262c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x10262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x102630: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x102630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x102634: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x102634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x102638: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x102638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10263c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102640: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102644: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x102644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x102648: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x102648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10264c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102650: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102658: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x10265c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102660: 0xc05fa70  jal         func_17E9C0
    ctx->pc = 0x102660u;
    SET_GPR_U32(ctx, 31, 0x102668u);
    ctx->pc = 0x102664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102660u;
    // 0x102664: 0x84460004  lh          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E9C0u, 0x102660u, 0x102668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102668u;
label_102668:
    // 0x102668: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10266c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x102670: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x102670u;
    {
        const bool branch_taken_0x102670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102670) {
            ctx->pc = 0x102618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102618;
        }
    }
    ctx->pc = 0x102678u;
label_102678:
    // 0x102678: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10267c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10267cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102680: 0x24a5e028  addiu       $a1, $a1, -0x1FD8
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959144));
    // 0x102684: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x102684u;
    SET_GPR_U32(ctx, 31, 0x10268Cu);
    ctx->pc = 0x102688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102684u;
    // 0x102688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102684u, 0x10268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10268Cu;
label_10268c:
    // 0x10268c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10268cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102690: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102690u;
    {
        const bool branch_taken_0x102690 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x102690) {
            ctx->pc = 0x1026D8u;
            goto label_1026d8;
        }
    }
    ctx->pc = 0x102698u;
    // 0x102698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x102698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10269c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x10269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1026a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1026a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1026a4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1026a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1026a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1026a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1026ac: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1026ACu;
    SET_GPR_U32(ctx, 31, 0x1026B4u);
    ctx->pc = 0x1026B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026ACu;
    // 0x1026b0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1026ACu, 0x1026B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026B4u;
label_1026b4:
    // 0x1026b4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1026B4u;
    {
        const bool branch_taken_0x1026b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1026B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026B4u;
        // 0x1026b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026b4) {
            ctx->pc = 0x1026C4u;
            goto label_1026c4;
        }
    }
    ctx->pc = 0x1026BCu;
    // 0x1026bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1026BCu;
    {
        const bool branch_taken_0x1026bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026BCu;
        // 0x1026c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026bc) {
            ctx->pc = 0x1026D0u;
            goto label_1026d0;
        }
    }
    ctx->pc = 0x1026C4u;
label_1026c4:
    // 0x1026c4: 0x86460008  lh          $a2, 0x8($s2)
    ctx->pc = 0x1026c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1026c8: 0x0  nop
    ctx->pc = 0x1026c8u;
    // NOP
    // 0x1026cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1026ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1026d0:
    // 0x1026d0: 0xc04a010  jal         func_128040
    ctx->pc = 0x1026D0u;
    SET_GPR_U32(ctx, 31, 0x1026D8u);
    ctx->pc = 0x1026D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026D0u;
    // 0x1026d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128040u, 0x1026D0u, 0x1026D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026D8u;
label_1026d8:
    // 0x1026d8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1026dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1026dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1026e0: 0x24a5e038  addiu       $a1, $a1, -0x1FC8
    ctx->pc = 0x1026e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
    // 0x1026e4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1026E4u;
    SET_GPR_U32(ctx, 31, 0x1026ECu);
    ctx->pc = 0x1026E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026E4u;
    // 0x1026e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1026E4u, 0x1026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026ECu;
label_1026ec:
    // 0x1026ec: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1026ECu;
    {
        const bool branch_taken_0x1026ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1026ec) {
            ctx->pc = 0x102750u;
            goto label_102750;
        }
    }
    ctx->pc = 0x1026F4u;
    // 0x1026f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1026F4u;
    {
        const bool branch_taken_0x1026f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1026F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026F4u;
        // 0x1026f8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026f4) {
            ctx->pc = 0x102704u;
            goto label_102704;
        }
    }
    ctx->pc = 0x1026FCu;
    // 0x1026fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1026FCu;
    {
        const bool branch_taken_0x1026fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026FCu;
        // 0x102700: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026fc) {
            ctx->pc = 0x102720u;
            goto label_102720;
        }
    }
    ctx->pc = 0x102704u;
label_102704:
    // 0x102704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x102704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102708: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10270c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102714: 0x84710008  lh          $s1, 0x8($v1)
    ctx->pc = 0x102714u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102718: 0x0  nop
    ctx->pc = 0x102718u;
    // NOP
    // 0x10271c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_102720:
    // 0x102720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10272c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102730: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x102730u;
    SET_GPR_U32(ctx, 31, 0x102738u);
    ctx->pc = 0x102734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102730u;
    // 0x102734: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x102730u, 0x102738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102738u;
label_102738:
    // 0x102738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10273c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10273cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102740: 0xc04a034  jal         func_1280D0
    ctx->pc = 0x102740u;
    SET_GPR_U32(ctx, 31, 0x102748u);
    ctx->pc = 0x102744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102740u;
    // 0x102744: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280D0u, 0x102740u, 0x102748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102748u;
label_102748:
    // 0x102748: 0xc05fbe4  jal         func_17EF90
    ctx->pc = 0x102748u;
    SET_GPR_U32(ctx, 31, 0x102750u);
    ctx->pc = 0x17EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF90u, 0x102748u, 0x102750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102750u;
label_102750:
    // 0x102750: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102754: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102758: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x102758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
    // 0x10275c: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x10275Cu;
    SET_GPR_U32(ctx, 31, 0x102764u);
    ctx->pc = 0x102760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10275Cu;
    // 0x102760: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10275Cu, 0x102764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102764u;
label_102764:
    // 0x102764: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102768: 0x620001f  bltz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x102768u;
    {
        const bool branch_taken_0x102768 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x102768) {
            ctx->pc = 0x1027E8u;
            goto label_1027e8;
        }
    }
    ctx->pc = 0x102770u;
    // 0x102770: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x102770u;
    {
        const bool branch_taken_0x102770 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x102774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102770u;
        // 0x102774: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102770) {
            ctx->pc = 0x102780u;
            goto label_102780;
        }
    }
    ctx->pc = 0x102778u;
    // 0x102778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x102778u;
    {
        const bool branch_taken_0x102778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102778u;
        // 0x10277c: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102778) {
            ctx->pc = 0x10279Cu;
            goto label_10279c;
        }
    }
    ctx->pc = 0x102780u;
label_102780:
    // 0x102780: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x102780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x102784: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x102784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10278c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102790: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x102790u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102794: 0x0  nop
    ctx->pc = 0x102794u;
    // NOP
    // 0x102798: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x102798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_10279c:
    // 0x10279c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x10279Cu;
    {
        const bool branch_taken_0x10279c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10279Cu;
        // 0x1027a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10279c) {
            ctx->pc = 0x1027E8u;
            goto label_1027e8;
        }
    }
    ctx->pc = 0x1027A4u;
label_1027a4:
    // 0x1027a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1027a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1027a8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1027a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1027ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1027b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1027b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1027b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1027b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1027b8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1027b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1027bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1027c0: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1027c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1027c4: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x1027C4u;
    SET_GPR_U32(ctx, 31, 0x1027CCu);
    ctx->pc = 0x1027C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027C4u;
    // 0x1027c8: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x1027C4u, 0x1027CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027CCu;
label_1027cc:
    // 0x1027cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1027ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027d0: 0xc05fe6c  jal         func_17F9B0
    ctx->pc = 0x1027D0u;
    SET_GPR_U32(ctx, 31, 0x1027D8u);
    ctx->pc = 0x1027D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027D0u;
    // 0x1027d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9B0u, 0x1027D0u, 0x1027D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027D8u;
label_1027d8:
    // 0x1027d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1027dc: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1027e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1027E0u;
    {
        const bool branch_taken_0x1027e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1027e0) {
            ctx->pc = 0x1027A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1027a4;
        }
    }
    ctx->pc = 0x1027E8u;
label_1027e8:
    // 0x1027e8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1027e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1027ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1027ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1027f0: 0x24a5e018  addiu       $a1, $a1, -0x1FE8
    ctx->pc = 0x1027f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959128));
    // 0x1027f4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1027F4u;
    SET_GPR_U32(ctx, 31, 0x1027FCu);
    ctx->pc = 0x1027F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027F4u;
    // 0x1027f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1027F4u, 0x1027FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027FCu;
label_1027fc:
    // 0x1027fc: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1027FCu;
    {
        const bool branch_taken_0x1027fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1027fc) {
            ctx->pc = 0x102858u;
            goto label_102858;
        }
    }
    ctx->pc = 0x102804u;
    // 0x102804: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102804u;
    {
        const bool branch_taken_0x102804 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x102808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102804u;
        // 0x102808: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102804) {
            ctx->pc = 0x102814u;
            goto label_102814;
        }
    }
    ctx->pc = 0x10280Cu;
    // 0x10280c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10280Cu;
    {
        const bool branch_taken_0x10280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10280Cu;
        // 0x102810: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10280c) {
            ctx->pc = 0x102830u;
            goto label_102830;
        }
    }
    ctx->pc = 0x102814u;
label_102814:
    // 0x102814: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102818: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10281c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10281cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102824: 0x84710008  lh          $s1, 0x8($v1)
    ctx->pc = 0x102824u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102828: 0x0  nop
    ctx->pc = 0x102828u;
    // NOP
    // 0x10282c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_102830:
    // 0x102830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102834: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102838: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10283c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102840: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102844: 0xc0607f4  jal         func_181FD0
    ctx->pc = 0x102844u;
    SET_GPR_U32(ctx, 31, 0x10284Cu);
    ctx->pc = 0x102848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102844u;
    // 0x102848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181FD0u, 0x102844u, 0x10284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10284Cu;
label_10284c:
    // 0x10284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102850: 0xc060840  jal         func_182100
    ctx->pc = 0x102850u;
    SET_GPR_U32(ctx, 31, 0x102858u);
    ctx->pc = 0x102854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102850u;
    // 0x102854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182100u, 0x102850u, 0x102858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102858u;
label_102858:
    // 0x102858: 0xc04d988  jal         func_136620
    ctx->pc = 0x102858u;
    SET_GPR_U32(ctx, 31, 0x102860u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x102858u, 0x102860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102860u;
label_102860:
    // 0x102860: 0xc04c7c4  jal         func_131F10
    ctx->pc = 0x102860u;
    SET_GPR_U32(ctx, 31, 0x102868u);
    ctx->pc = 0x102864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102860u;
    // 0x102864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F10u, 0x102860u, 0x102868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102868u;
label_102868:
    // 0x102868: 0xc040a30  jal         func_1028C0
    ctx->pc = 0x102868u;
    SET_GPR_U32(ctx, 31, 0x102870u);
    ctx->pc = 0x10286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102868u;
    // 0x10286c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1028C0u, 0x102868u, 0x102870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102870u;
label_102870:
    // 0x102870: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x102870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102874: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x102874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102878: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x102878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10287c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10287cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x102880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x102884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x102888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10288c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10288cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102894: 0x3e00008  jr          $ra
    ctx->pc = 0x102894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102894u;
        // 0x102898: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10289Cu;
}
