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

// Function: FUN_0013f8f0
// Address: 0x13f8f0 - 0x13fb68
void FUN_0013f8f0_0x13f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f8f0_0x13f8f0");
#endif

    switch (ctx->pc) {
        case 0x13f918u: goto label_13f918;
        case 0x13f934u: goto label_13f934;
        case 0x13f93cu: goto label_13f93c;
        case 0x13f9c8u: goto label_13f9c8;
        case 0x13f9e8u: goto label_13f9e8;
        case 0x13f9f0u: goto label_13f9f0;
        case 0x13fac4u: goto label_13fac4;
        case 0x13fb34u: goto label_13fb34;
        default: break;
    }

    ctx->pc = 0x13f8f0u;

    // 0x13f8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13f8f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13f8f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13f8fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f900: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13f900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f90c: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x13f90cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f910: 0xc0505b0  jal         func_1416C0
    ctx->pc = 0x13F910u;
    SET_GPR_U32(ctx, 31, 0x13F918u);
    ctx->pc = 0x13F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F910u;
    // 0x13f914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1416C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416C0u, 0x13F910u, 0x13F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F918u;
label_13f918:
    // 0x13f918: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F918u;
    {
        const bool branch_taken_0x13f918 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F918u;
        // 0x13f91c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f918) {
            ctx->pc = 0x13F93Cu;
            goto label_13f93c;
        }
    }
    ctx->pc = 0x13F920u;
    // 0x13f920: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13f920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13f924: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13f928: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f92c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13F92Cu;
    SET_GPR_U32(ctx, 31, 0x13F934u);
    ctx->pc = 0x13F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F92Cu;
    // 0x13f930: 0x24a5f0a0  addiu       $a1, $a1, -0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13F92Cu, 0x13F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F934u;
label_13f934:
    // 0x13f934: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13F934u;
    SET_GPR_U32(ctx, 31, 0x13F93Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13F934u, 0x13F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F93Cu;
label_13f93c:
    // 0x13f93c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f940: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13f940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f944: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x13f944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13f948: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13F948u;
    {
        const bool branch_taken_0x13f948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f948) {
            ctx->pc = 0x13F98Cu;
            goto label_13f98c;
        }
    }
    ctx->pc = 0x13F950u;
    // 0x13f950: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f954: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f958: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x13f958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13f95c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F95Cu;
    {
        const bool branch_taken_0x13f95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f95c) {
            ctx->pc = 0x13F968u;
            goto label_13f968;
        }
    }
    ctx->pc = 0x13F964u;
    // 0x13f964: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13f968:
    // 0x13f968: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13f96c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f970: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x13f970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13f974: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f978: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13f978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13f97c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f980: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13f984: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x13F984u;
    {
        const bool branch_taken_0x13f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F984u;
        // 0x13f988: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f984) {
            ctx->pc = 0x13FB4Cu;
            goto label_13fb4c;
        }
    }
    ctx->pc = 0x13F98Cu;
label_13f98c:
    // 0x13f98c: 0x8f82809c  lw          $v0, -0x7F64($gp)
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934684)));
    // 0x13f990: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x13f990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13f994: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F994u;
    {
        const bool branch_taken_0x13f994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F994u;
        // 0x13f998: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f994) {
            ctx->pc = 0x13F9A4u;
            goto label_13f9a4;
        }
    }
    ctx->pc = 0x13F99Cu;
    // 0x13f99c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F99Cu;
    {
        const bool branch_taken_0x13f99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F99Cu;
        // 0x13f9a0: 0x2782809c  addiu       $v0, $gp, -0x7F64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f99c) {
            ctx->pc = 0x13F9A8u;
            goto label_13f9a8;
        }
    }
    ctx->pc = 0x13F9A4u;
label_13f9a4:
    // 0x13f9a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f9a8:
    // 0x13f9a8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f9ac: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x13f9acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13f9b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F9B0u;
    {
        const bool branch_taken_0x13f9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9B0u;
        // 0x13f9b4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9b0) {
            ctx->pc = 0x13F9C0u;
            goto label_13f9c0;
        }
    }
    ctx->pc = 0x13F9B8u;
    // 0x13f9b8: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x13f9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13f9bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13f9c0:
    // 0x13f9c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13F9C0u;
    SET_GPR_U32(ctx, 31, 0x13F9C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13F9C0u, 0x13F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9C8u;
label_13f9c8:
    // 0x13f9c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9cc: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F9CCu;
    {
        const bool branch_taken_0x13f9cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9CCu;
        // 0x13f9d0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9cc) {
            ctx->pc = 0x13F9F0u;
            goto label_13f9f0;
        }
    }
    ctx->pc = 0x13F9D4u;
    // 0x13f9d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13f9d8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13f9dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f9e0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13F9E0u;
    SET_GPR_U32(ctx, 31, 0x13F9E8u);
    ctx->pc = 0x13F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9E0u;
    // 0x13f9e4: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13F9E0u, 0x13F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9E8u;
label_13f9e8:
    // 0x13f9e8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13F9E8u;
    SET_GPR_U32(ctx, 31, 0x13F9F0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13F9E8u, 0x13F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9F0u;
label_13f9f0:
    // 0x13f9f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f9f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13f9f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f9fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x13fa00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13fa04: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x13fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13fa08: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x13FA08u;
    {
        const bool branch_taken_0x13fa08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa08) {
            ctx->pc = 0x13FB20u;
            goto label_13fb20;
        }
    }
    ctx->pc = 0x13FA10u;
    // 0x13fa10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x13fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13fa14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fa18: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13fa1c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x13fa1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13fa20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA20u;
    {
        const bool branch_taken_0x13fa20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA20u;
        // 0x13fa24: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa20) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA28u;
    // 0x13fa28: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13fa2c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fa30: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fa34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fa38: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x13fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x13fa3c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x13fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x13fa40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA40u;
    {
        const bool branch_taken_0x13fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA40u;
        // 0x13fa44: 0xafb00060  sw          $s0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa40) {
            ctx->pc = 0x13FA68u;
            goto label_13fa68;
        }
    }
    ctx->pc = 0x13FA48u;
label_13fa48:
    // 0x13fa48: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x13fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fa4c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fa50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fa54: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13fa58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fa5c: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x13fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x13fa60: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x13fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x13fa64: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x13fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
label_13fa68:
    // 0x13fa68: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x13fa68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13fa6c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x13fa6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fa70: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x13fa70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fa74: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x13fa74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13fa78: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13fa7c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x13fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x13fa80: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x13fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x13fa84: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x13fa84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x13fa88: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x13fa8c: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x13fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    // 0x13fa90: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x13fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x13fa94: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x13fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x13fa98: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x13fa98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fa9c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x13fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13faa0: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x13faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x13faa4: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x13faa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x13faa8: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x13faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13faac: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x13faacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fab0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x13fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fab4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x13fab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13fab8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x13fab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x13fabc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13FABCu;
    {
        const bool branch_taken_0x13fabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FABCu;
        // 0x13fac0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fabc) {
            ctx->pc = 0x13FB0Cu;
            goto label_13fb0c;
        }
    }
    ctx->pc = 0x13FAC4u;
label_13fac4:
    // 0x13fac4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fac8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13fac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13facc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13faccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13fad0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x13fad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fad4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13fad8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x13fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x13fadc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fae0: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13fae4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x13fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x13fae8: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x13fae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13faec: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x13faecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13faf0: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13faf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13faf8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x13faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x13fafc: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FAFCu;
    {
        const bool branch_taken_0x13fafc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fafc) {
            ctx->pc = 0x13FB08u;
            goto label_13fb08;
        }
    }
    ctx->pc = 0x13FB04u;
    // 0x13fb04: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x13fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_13fb08:
    // 0x13fb08: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_13fb0c:
    // 0x13fb0c: 0x0  nop
    ctx->pc = 0x13fb0cu;
    // NOP
    // 0x13fb10: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x13fb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fb14: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x13fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x13fb18: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13FB18u;
    {
        const bool branch_taken_0x13fb18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fb18) {
            ctx->pc = 0x13FAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13fac4;
        }
    }
    ctx->pc = 0x13FB20u;
label_13fb20:
    // 0x13fb20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fb24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FB24u;
    {
        const bool branch_taken_0x13fb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb24) {
            ctx->pc = 0x13FB34u;
            goto label_13fb34;
        }
    }
    ctx->pc = 0x13FB2Cu;
    // 0x13fb2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13FB2Cu;
    SET_GPR_U32(ctx, 31, 0x13FB34u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13FB2Cu, 0x13FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB34u;
label_13fb34:
    // 0x13fb34: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x13fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x13fb38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13fb3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13fb40: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x13fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x13fb44: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x13fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x13fb48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_13fb4c:
    // 0x13fb4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13fb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fb50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13fb50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fb54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13fb54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fb58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fb60: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB60u;
        // 0x13fb64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB68u;
}
