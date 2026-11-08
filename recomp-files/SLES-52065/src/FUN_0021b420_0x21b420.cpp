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

// Function: FUN_0021b420
// Address: 0x21b420 - 0x21b55c
void FUN_0021b420_0x21b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b420_0x21b420");
#endif

    switch (ctx->pc) {
        case 0x21b47cu: goto label_21b47c;
        case 0x21b4a0u: goto label_21b4a0;
        case 0x21b4d8u: goto label_21b4d8;
        case 0x21b52cu: goto label_21b52c;
        default: break;
    }

    ctx->pc = 0x21b420u;

    // 0x21b420: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21b424: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x21b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x21b428: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x21b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x21b42c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x21b42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x21b430: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21b430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21b434: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x21b434u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b438: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21b43c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x21b43cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b440: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21b444: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x21b444u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x21b448: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21b44c: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x21b44cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x21b450: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b454: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21b458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b45c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21b460: 0x8ea36700  lw          $v1, 0x6700($s5)
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80076700u));
    // 0x21b464: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0xB0001800u));
    // 0x21b468: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x21b468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x21b46c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B46Cu;
    {
        const bool branch_taken_0x21b46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B46Cu;
        // 0x21b470: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b46c) {
            ctx->pc = 0x21B490u;
            goto label_21b490;
        }
    }
    ctx->pc = 0x21B474u;
    // 0x21b474: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x21B474u;
    {
        const bool branch_taken_0x21b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B474u;
        // 0x21b478: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b474) {
            ctx->pc = 0x21B530u;
            goto label_21b530;
        }
    }
    ctx->pc = 0x21B47Cu;
label_21b47c:
    // 0x21b47c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x21b47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b480: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x21b480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x21b484: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x21b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21b488: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21B488u;
    {
        const bool branch_taken_0x21b488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B488u;
        // 0x21b48c: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b488) {
            ctx->pc = 0x21B4C0u;
            goto label_21b4c0;
        }
    }
    ctx->pc = 0x21B490u;
label_21b490:
    // 0x21b490: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x21b490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x21b494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21b494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b498: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x21b498u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x80076708u));
    // 0x21b49c: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x21b49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
label_21b4a0:
    // 0x21b4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21b4a4: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21B4A4u;
    {
        const bool branch_taken_0x21b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4A4u;
        // 0x21b4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4a4) {
            ctx->pc = 0x21B47Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b47c;
        }
    }
    ctx->pc = 0x21B4ACu;
    // 0x21b4ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b4b0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x21b4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x21b4b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B4B4u;
    {
        const bool branch_taken_0x21b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4B4u;
        // 0x21b4b8: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4b4) {
            ctx->pc = 0x21B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b4a0;
        }
    }
    ctx->pc = 0x21B4BCu;
    // 0x21b4bc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x21b4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b4c0:
    // 0x21b4c0: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B4C0u;
    {
        const bool branch_taken_0x21b4c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x21B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4C0u;
        // 0x21b4c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4c0) {
            ctx->pc = 0x21B530u;
            goto label_21b530;
        }
    }
    ctx->pc = 0x21B4C8u;
    // 0x21b4c8: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x21b4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4d0: 0xc01d816  jal         func_076058
    ctx->pc = 0x21B4D0u;
    SET_GPR_U32(ctx, 31, 0x21B4D8u);
    ctx->pc = 0x21B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B4D0u;
    // 0x21b4d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x21B4D0u, 0x21B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4D8u;
label_21b4d8:
    // 0x21b4d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b4dc: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x21b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
    // 0x21b4e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x21b4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b4e4: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
    // 0x21b4e8: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x21b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    // 0x21b4ec: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x21b4f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21b4f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x21b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b4f8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x21b4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b4fc: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x21b4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21b500: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x21b500u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x21b504: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x21b504u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x21b508: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21b508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b50c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x21b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x21b510: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x21b510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b514: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x21b514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
    // 0x21b518: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x21b518u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
    // 0x21b51c: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x21b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x21b520: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x21b520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
    // 0x21b524: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B524u;
    SET_GPR_U32(ctx, 31, 0x21B52Cu);
    ctx->pc = 0x21B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B524u;
    // 0x21b528: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B524u, 0x21B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B52Cu;
label_21b52c:
    // 0x21b52c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21b530:
    // 0x21b530: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21b530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21b534: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x21b534u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21b538: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21b538u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b53c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21b53cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b540: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21b540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b544: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21b544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b548: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b54c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21b54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b554: 0x3e00008  jr          $ra
    ctx->pc = 0x21B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B554u;
        // 0x21b558: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B55Cu;
}
