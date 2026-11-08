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

// Function: FUN_001bd400
// Address: 0x1bd400 - 0x1bd564
void FUN_001bd400_0x1bd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd400_0x1bd400");
#endif

    switch (ctx->pc) {
        case 0x1bd448u: goto label_1bd448;
        case 0x1bd458u: goto label_1bd458;
        case 0x1bd49cu: goto label_1bd49c;
        case 0x1bd4ecu: goto label_1bd4ec;
        case 0x1bd534u: goto label_1bd534;
        default: break;
    }

    ctx->pc = 0x1bd400u;

    // 0x1bd400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd404: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bd408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bd40c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bd418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd41c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bd420: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bd424: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd428: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bd42c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bd430: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1bd430u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1bd434: 0x0  nop
    ctx->pc = 0x1bd434u;
    // NOP
    // 0x1bd438: 0x0  nop
    ctx->pc = 0x1bd438u;
    // NOP
    // 0x1bd43c: 0x2812  mflo        $a1
    ctx->pc = 0x1bd43cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bd440: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1BD440u;
    SET_GPR_U32(ctx, 31, 0x1BD448u);
    ctx->pc = 0x1BD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD440u;
    // 0x1bd444: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1BD440u, 0x1BD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD448u;
label_1bd448:
    // 0x1bd448: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1bd448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bd44c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd450: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD450u;
    {
        const bool branch_taken_0x1bd450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD450u;
        // 0x1bd454: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd450) {
            ctx->pc = 0x1BD4A0u;
            goto label_1bd4a0;
        }
    }
    ctx->pc = 0x1BD458u;
label_1bd458:
    // 0x1bd458: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd45c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd460: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bd460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bd464: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1bd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd468: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd46c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd470: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd478: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bd478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bd47c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD47Cu;
    {
        const bool branch_taken_0x1bd47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd47c) {
            ctx->pc = 0x1BD488u;
            goto label_1bd488;
        }
    }
    ctx->pc = 0x1BD484u;
    // 0x1bd484: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bd484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd488:
    // 0x1bd488: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd490: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd494: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD494u;
    SET_GPR_U32(ctx, 31, 0x1BD49Cu);
    ctx->pc = 0x1BD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD494u;
    // 0x1bd498: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD494u, 0x1BD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD49Cu;
label_1bd49c:
    // 0x1bd49c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1bd4a0:
    // 0x1bd4a0: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x1bd4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd4a4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd4a8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bd4ac: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd4b0: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x1bd4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bd4b4: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bd4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd4b8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1bd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1bd4bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bd4c0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1bd4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1bd4c4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bd4c8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1bd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bd4cc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1bd4ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd4d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1bd4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1bd4d4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BD4D4u;
    {
        const bool branch_taken_0x1bd4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4d4) {
            ctx->pc = 0x1BD458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd458;
        }
    }
    ctx->pc = 0x1BD4DCu;
    // 0x1bd4dc: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD4DCu;
    {
        const bool branch_taken_0x1bd4dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4DCu;
        // 0x1bd4e0: 0x2510fffe  addiu       $s0, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4dc) {
            ctx->pc = 0x1BD54Cu;
            goto label_1bd54c;
        }
    }
    ctx->pc = 0x1BD4E4u;
    // 0x1bd4e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD540u;
            goto label_1bd540;
        }
    }
    ctx->pc = 0x1BD4ECu;
label_1bd4ec:
    // 0x1bd4ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1bd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd4f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd4f4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bd4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bd4f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1bd4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd4fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1bd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd500: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd504: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd50c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bd50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bd510: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD510u;
    {
        const bool branch_taken_0x1bd510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd510) {
            ctx->pc = 0x1BD51Cu;
            goto label_1bd51c;
        }
    }
    ctx->pc = 0x1BD518u;
    // 0x1bd518: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bd518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd51c:
    // 0x1bd51c: 0x0  nop
    ctx->pc = 0x1bd51cu;
    // NOP
    // 0x1bd520: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd524: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd528: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1bd528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd52c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD52Cu;
    SET_GPR_U32(ctx, 31, 0x1BD534u);
    ctx->pc = 0x1BD530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD52Cu;
    // 0x1bd530: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD52Cu, 0x1BD534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD534u;
label_1bd534:
    // 0x1bd534: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1bd534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1bd538: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1BD538u;
    {
        const bool branch_taken_0x1bd538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD538u;
        // 0x1bd53c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd538) {
            ctx->pc = 0x1BD4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd4ec;
        }
    }
    ctx->pc = 0x1BD540u;
label_1bd540:
    // 0x1bd540: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd544: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1bd544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bd548: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1bd548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1bd54c:
    // 0x1bd54c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bd54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd55c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD55Cu;
        // 0x1bd560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD564u;
}
