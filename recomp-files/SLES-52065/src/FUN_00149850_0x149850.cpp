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

// Function: FUN_00149850
// Address: 0x149850 - 0x1499b4
void FUN_00149850_0x149850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00149850_0x149850");
#endif

    switch (ctx->pc) {
        case 0x149898u: goto label_149898;
        case 0x1498a8u: goto label_1498a8;
        case 0x1498ecu: goto label_1498ec;
        case 0x14993cu: goto label_14993c;
        case 0x149984u: goto label_149984;
        default: break;
    }

    ctx->pc = 0x149850u;

    // 0x149850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149854: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x149854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149858: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14985c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14986c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x149870: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x149874: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x149874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149878: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14987c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x149880: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x149880u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x149884: 0x0  nop
    ctx->pc = 0x149884u;
    // NOP
    // 0x149888: 0x0  nop
    ctx->pc = 0x149888u;
    // NOP
    // 0x14988c: 0x2812  mflo        $a1
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x149890: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x149890u;
    SET_GPR_U32(ctx, 31, 0x149898u);
    ctx->pc = 0x149894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149890u;
    // 0x149894: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x149890u, 0x149898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149898u;
label_149898:
    // 0x149898: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x149898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14989c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1498a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1498A0u;
    {
        const bool branch_taken_0x1498a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1498A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498A0u;
        // 0x1498a4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498a0) {
            ctx->pc = 0x1498F0u;
            goto label_1498f0;
        }
    }
    ctx->pc = 0x1498A8u;
label_1498a8:
    // 0x1498a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1498a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1498ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1498acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1498b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1498b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1498b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1498b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1498b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1498bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1498bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1498c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1498c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1498c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1498c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1498c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1498c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1498cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1498CCu;
    {
        const bool branch_taken_0x1498cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1498cc) {
            ctx->pc = 0x1498D8u;
            goto label_1498d8;
        }
    }
    ctx->pc = 0x1498D4u;
    // 0x1498d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1498d8:
    // 0x1498d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1498dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1498dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1498e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1498e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1498e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1498E4u;
    SET_GPR_U32(ctx, 31, 0x1498ECu);
    ctx->pc = 0x1498E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1498E4u;
    // 0x1498e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1498E4u, 0x1498ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498ECu;
label_1498ec:
    // 0x1498ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1498ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1498f0:
    // 0x1498f0: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x1498f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1498f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1498f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1498f8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x1498f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1498fc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1498fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149900: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x149900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x149904: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x149904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x149908: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14990c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x149910: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x149910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x149914: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x149914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x149918: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14991c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x14991cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x149920: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x149920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x149924: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x149924u;
    {
        const bool branch_taken_0x149924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149924) {
            ctx->pc = 0x1498A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1498a8;
        }
    }
    ctx->pc = 0x14992Cu;
    // 0x14992c: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x14992Cu;
    {
        const bool branch_taken_0x14992c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x149930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14992Cu;
        // 0x149930: 0x2510fffe  addiu       $s0, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14992c) {
            ctx->pc = 0x14999Cu;
            goto label_14999c;
        }
    }
    ctx->pc = 0x149934u;
    // 0x149934: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x149934u;
    {
        const bool branch_taken_0x149934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149934) {
            ctx->pc = 0x149990u;
            goto label_149990;
        }
    }
    ctx->pc = 0x14993Cu;
label_14993c:
    // 0x14993c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x149940: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x149944: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x149944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x149948: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x149948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14994c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149950: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x149950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149954: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x149954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x149958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14995c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x14995cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x149960: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149960u;
    {
        const bool branch_taken_0x149960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149960) {
            ctx->pc = 0x14996Cu;
            goto label_14996c;
        }
    }
    ctx->pc = 0x149968u;
    // 0x149968: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x149968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14996c:
    // 0x14996c: 0x0  nop
    ctx->pc = 0x14996cu;
    // NOP
    // 0x149970: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149978: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x149978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14997c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14997Cu;
    SET_GPR_U32(ctx, 31, 0x149984u);
    ctx->pc = 0x149980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14997Cu;
    // 0x149980: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14997Cu, 0x149984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149984u;
label_149984:
    // 0x149984: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x149984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x149988: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x149988u;
    {
        const bool branch_taken_0x149988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149988u;
        // 0x14998c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149988) {
            ctx->pc = 0x14993Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14993c;
        }
    }
    ctx->pc = 0x149990u;
label_149990:
    // 0x149990: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x149990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149994: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x149994u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x149998: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x149998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_14999c:
    // 0x14999c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14999cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1499a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1499a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1499a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1499a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1499a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1499a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1499ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1499ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1499B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499ACu;
        // 0x1499b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1499ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1499B4u;
}
