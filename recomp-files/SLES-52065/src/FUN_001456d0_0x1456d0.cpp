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

// Function: FUN_001456d0
// Address: 0x1456d0 - 0x14590c
void FUN_001456d0_0x1456d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001456d0_0x1456d0");
#endif

    switch (ctx->pc) {
        case 0x145744u: goto label_145744;
        case 0x145758u: goto label_145758;
        case 0x145784u: goto label_145784;
        case 0x1457a4u: goto label_1457a4;
        case 0x1457acu: goto label_1457ac;
        case 0x1457d8u: goto label_1457d8;
        case 0x145818u: goto label_145818;
        case 0x145828u: goto label_145828;
        case 0x14585cu: goto label_14585c;
        case 0x1458b0u: goto label_1458b0;
        default: break;
    }

    ctx->pc = 0x1456d0u;

    // 0x1456d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1456d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1456d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1456d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1456d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1456d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1456dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1456dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1456e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1456e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1456e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1456e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1456e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1456e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1456ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1456ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1456f0: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x1456f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x1456f4: 0x8c23f1b0  lw          $v1, -0xE50($at)
    ctx->pc = 0x1456f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F1B0u));
    // 0x1456f8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1456f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1456fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1456fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x145700: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x145700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x145704: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x145704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x145708: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x145708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14570c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14570cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x145710: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x145710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x145714: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x145714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x145718: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x145718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x14571c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x145720: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x145720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x145724: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x145724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x145728: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x145728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14572c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x145730: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x145730u;
    {
        const bool branch_taken_0x145730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145730u;
        // 0x145734: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145730) {
            ctx->pc = 0x1458E4u;
            goto label_1458e4;
        }
    }
    ctx->pc = 0x145738u;
    // 0x145738: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x145738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14573c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14573Cu;
    SET_GPR_U32(ctx, 31, 0x145744u);
    ctx->pc = 0x145740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14573Cu;
    // 0x145740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14573Cu, 0x145744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145744u;
label_145744:
    // 0x145744: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x145744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x145748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x145748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14574c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14574cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145750: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x145750u;
    SET_GPR_U32(ctx, 31, 0x145758u);
    ctx->pc = 0x145754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145750u;
    // 0x145754: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x145750u, 0x145758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145758u;
label_145758:
    // 0x145758: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x145758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14575c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x145760: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145764: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x145764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x145768: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x145768u;
    {
        const bool branch_taken_0x145768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145768) {
            ctx->pc = 0x145774u;
            goto label_145774;
        }
    }
    ctx->pc = 0x145770u;
    // 0x145770: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x145770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_145774:
    // 0x145774: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x145778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14577c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14577Cu;
    SET_GPR_U32(ctx, 31, 0x145784u);
    ctx->pc = 0x145780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14577Cu;
    // 0x145780: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14577Cu, 0x145784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145784u;
label_145784:
    // 0x145784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145788: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145788u;
    {
        const bool branch_taken_0x145788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145788u;
        // 0x14578c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145788) {
            ctx->pc = 0x1457ACu;
            goto label_1457ac;
        }
    }
    ctx->pc = 0x145790u;
    // 0x145790: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x145790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x145794: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x145794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x145798: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x145798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14579c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14579Cu;
    SET_GPR_U32(ctx, 31, 0x1457A4u);
    ctx->pc = 0x1457A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14579Cu;
    // 0x1457a0: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14579Cu, 0x1457A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457A4u;
label_1457a4:
    // 0x1457a4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1457A4u;
    SET_GPR_U32(ctx, 31, 0x1457ACu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1457A4u, 0x1457ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457ACu;
label_1457ac:
    // 0x1457ac: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1457acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457b0: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x1457b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1457b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1457b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1457b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1457bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1457c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1457c4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1457c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1457c8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1457c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457cc: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1457ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1457d0: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1457D0u;
    SET_GPR_U32(ctx, 31, 0x1457D8u);
    ctx->pc = 0x1457D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457D0u;
    // 0x1457d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1457D0u, 0x1457D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457D8u;
label_1457d8:
    // 0x1457d8: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1457d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1457dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1457e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1457e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1457e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1457e8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1457ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1457ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1457f0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1457f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1457f4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1457f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x1457f8: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1457f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1457fc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1457fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145800: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x145800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x145804: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x145804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x145808: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x145808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14580c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x145810: 0xc0516fc  jal         func_145BF0
    ctx->pc = 0x145810u;
    SET_GPR_U32(ctx, 31, 0x145818u);
    ctx->pc = 0x145814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145810u;
    // 0x145814: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF0u, 0x145810u, 0x145818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145818u;
label_145818:
    // 0x145818: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x145818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14581c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145820: 0xc0516fc  jal         func_145BF0
    ctx->pc = 0x145820u;
    SET_GPR_U32(ctx, 31, 0x145828u);
    ctx->pc = 0x145824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145820u;
    // 0x145824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF0u, 0x145820u, 0x145828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145828u;
label_145828:
    // 0x145828: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14582c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x14582cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145830: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x145830u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145834: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145838: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14583c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14583cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x145840: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x145840u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x145844: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x145844u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x145848: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x145848u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14584c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14584cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x145850: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x145850u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x145854: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x145854u;
    {
        const bool branch_taken_0x145854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145854u;
        // 0x145858: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145854) {
            ctx->pc = 0x1458CCu;
            goto label_1458cc;
        }
    }
    ctx->pc = 0x14585Cu;
label_14585c:
    // 0x14585c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145860: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x145864: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x145864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x145868: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x145868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x14586c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145870: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x145870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x145874: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x145874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145878: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x145878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14587c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14587cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x145880: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x145880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x145884: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x145884u;
    {
        const bool branch_taken_0x145884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x145888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145884u;
        // 0x145888: 0x27b300d8  addiu       $s3, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145884) {
            ctx->pc = 0x1458C8u;
            goto label_1458c8;
        }
    }
    ctx->pc = 0x14588Cu;
    // 0x14588c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145894: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x145894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145898: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145898u;
    {
        const bool branch_taken_0x145898 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145898u;
        // 0x14589c: 0x2a083  sra         $s4, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145898) {
            ctx->pc = 0x1458A8u;
            goto label_1458a8;
        }
    }
    ctx->pc = 0x1458A0u;
    // 0x1458a0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1458a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1458a4: 0x2a083  sra         $s4, $v0, 2
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 2));
label_1458a8:
    // 0x1458a8: 0xc051644  jal         func_145910
    ctx->pc = 0x1458A8u;
    SET_GPR_U32(ctx, 31, 0x1458B0u);
    ctx->pc = 0x1458ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458A8u;
    // 0x1458ac: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145910u, 0x1458A8u, 0x1458B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458B0u;
label_1458b0:
    // 0x1458b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1458b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1458b4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1458b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1458b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1458bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1458bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1458c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1458c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1458c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1458c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1458c8:
    // 0x1458c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1458c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1458cc:
    // 0x1458cc: 0x0  nop
    ctx->pc = 0x1458ccu;
    // NOP
    // 0x1458d0: 0x27b100dc  addiu       $s1, $sp, 0xDC
    ctx->pc = 0x1458d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1458d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1458d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1458d8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1458dc: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1458DCu;
    {
        const bool branch_taken_0x1458dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1458dc) {
            ctx->pc = 0x14585Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14585c;
        }
    }
    ctx->pc = 0x1458E4u;
label_1458e4:
    // 0x1458e4: 0x0  nop
    ctx->pc = 0x1458e4u;
    // NOP
    // 0x1458e8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1458e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1458ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1458ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1458f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1458f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1458f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1458f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1458f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1458f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1458fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1458fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145904: 0x3e00008  jr          $ra
    ctx->pc = 0x145904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145904u;
        // 0x145908: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14590Cu;
}
