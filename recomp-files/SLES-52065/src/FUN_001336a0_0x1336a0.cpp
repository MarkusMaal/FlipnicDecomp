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

// Function: FUN_001336a0
// Address: 0x1336a0 - 0x133808
void FUN_001336a0_0x1336a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001336a0_0x1336a0");
#endif

    switch (ctx->pc) {
        case 0x1336ccu: goto label_1336cc;
        case 0x1336d8u: goto label_1336d8;
        case 0x1336f0u: goto label_1336f0;
        case 0x1336f8u: goto label_1336f8;
        case 0x133700u: goto label_133700;
        case 0x133708u: goto label_133708;
        case 0x133714u: goto label_133714;
        case 0x133734u: goto label_133734;
        case 0x133740u: goto label_133740;
        case 0x13374cu: goto label_13374c;
        case 0x133774u: goto label_133774;
        case 0x133784u: goto label_133784;
        default: break;
    }

    ctx->pc = 0x1336a0u;

    // 0x1336a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1336a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1336a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1336a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1336a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1336ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1336acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1336b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1336b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1336b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1336b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1336b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1336bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1336bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1336c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1336c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1336c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1336c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1336cc:
    // 0x1336cc: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1336ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1336d0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336D0u;
    SET_GPR_U32(ctx, 31, 0x1336D8u);
    ctx->pc = 0x1336D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336D0u;
    // 0x1336d4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336D0u, 0x1336D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336D8u;
label_1336d8:
    // 0x1336d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1336d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1336dc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1336dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1336e0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1336E0u;
    {
        const bool branch_taken_0x1336e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1336E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336E0u;
        // 0x1336e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336e0) {
            ctx->pc = 0x1336CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1336cc;
        }
    }
    ctx->pc = 0x1336E8u;
    // 0x1336e8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336E8u;
    SET_GPR_U32(ctx, 31, 0x1336F0u);
    ctx->pc = 0x1336ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336E8u;
    // 0x1336ec: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336E8u, 0x1336F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336F0u;
label_1336f0:
    // 0x1336f0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336F0u;
    SET_GPR_U32(ctx, 31, 0x1336F8u);
    ctx->pc = 0x1336F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336F0u;
    // 0x1336f4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336F0u, 0x1336F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336F8u;
label_1336f8:
    // 0x1336f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336F8u;
    SET_GPR_U32(ctx, 31, 0x133700u);
    ctx->pc = 0x1336FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336F8u;
    // 0x1336fc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336F8u, 0x133700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133700u;
label_133700:
    // 0x133700: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x133700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133704: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133708:
    // 0x133708: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x133708u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13370c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13370Cu;
    SET_GPR_U32(ctx, 31, 0x133714u);
    ctx->pc = 0x133710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13370Cu;
    // 0x133710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13370Cu, 0x133714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133714u;
label_133714:
    // 0x133714: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x133714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x133718: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x133718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13371c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13371cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x133720: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x133724: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x133724u;
    {
        const bool branch_taken_0x133724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133724u;
        // 0x133728: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133724) {
            ctx->pc = 0x133708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133708;
        }
    }
    ctx->pc = 0x13372Cu;
    // 0x13372c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13372Cu;
    SET_GPR_U32(ctx, 31, 0x133734u);
    ctx->pc = 0x133730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13372Cu;
    // 0x133730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13372Cu, 0x133734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133734u;
label_133734:
    // 0x133734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133738: 0xc040168  jal         func_1005A0
    ctx->pc = 0x133738u;
    SET_GPR_U32(ctx, 31, 0x133740u);
    ctx->pc = 0x13373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133738u;
    // 0x13373c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x133738u, 0x133740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133740u;
label_133740:
    // 0x133740: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x133740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x133744: 0xc040168  jal         func_1005A0
    ctx->pc = 0x133744u;
    SET_GPR_U32(ctx, 31, 0x13374Cu);
    ctx->pc = 0x133748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133744u;
    // 0x133748: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x133744u, 0x13374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13374Cu;
label_13374c:
    // 0x13374c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x13374cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x133750: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x133750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x133754: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x133754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x133758: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x133758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x13375c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x13375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x133760: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133764: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x133764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x133768: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x133768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13376c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13376Cu;
    {
        const bool branch_taken_0x13376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13376Cu;
        // 0x133770: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13376c) {
            ctx->pc = 0x13378Cu;
            goto label_13378c;
        }
    }
    ctx->pc = 0x133774u;
label_133774:
    // 0x133774: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x133778: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x133778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13377c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x13377Cu;
    SET_GPR_U32(ctx, 31, 0x133784u);
    ctx->pc = 0x133780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13377Cu;
    // 0x133780: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x13377Cu, 0x133784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133784u;
label_133784:
    // 0x133784: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x133784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x133788: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13378c:
    // 0x13378c: 0x0  nop
    ctx->pc = 0x13378cu;
    // NOP
    // 0x133790: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x133790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x133794: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x133794u;
    {
        const bool branch_taken_0x133794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x133798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133794u;
        // 0x133798: 0x3c053f80  lui         $a1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133794) {
            ctx->pc = 0x133774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133774;
        }
    }
    ctx->pc = 0x13379Cu;
    // 0x13379c: 0x3c033025  lui         $v1, 0x3025
    ctx->pc = 0x13379cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12325 << 16));
    // 0x1337a0: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x1337a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
    // 0x1337a4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1337a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1337a8: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1337a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1337ac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1337acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1337b0: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1337b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1337b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1337b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1337b8: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x1337b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x1337bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1337bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1337c0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1337c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1337c4: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1337c8: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1337c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1337cc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1337ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1337d0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1337d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1337d4: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x1337d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
    // 0x1337d8: 0x962500a0  lhu         $a1, 0xA0($s1)
    ctx->pc = 0x1337d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1337dc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1337dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1337e0: 0xfe240090  sd          $a0, 0x90($s1)
    ctx->pc = 0x1337e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 4));
    // 0x1337e4: 0xfe230098  sd          $v1, 0x98($s1)
    ctx->pc = 0x1337e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 152), GPR_U64(ctx, 3));
    // 0x1337e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1337e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1337ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1337ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1337f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1337f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1337f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1337f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1337f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1337f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1337fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1337fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133800: 0x3e00008  jr          $ra
    ctx->pc = 0x133800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133800u;
        // 0x133804: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133808u;
}
