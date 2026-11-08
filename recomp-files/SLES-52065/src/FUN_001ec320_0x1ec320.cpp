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

// Function: FUN_001ec320
// Address: 0x1ec320 - 0x1ec3f8
void FUN_001ec320_0x1ec320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec320_0x1ec320");
#endif

    switch (ctx->pc) {
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3f0u: goto label_1ec3f0;
        default: break;
    }

    ctx->pc = 0x1ec320u;

    // 0x1ec320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ec320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ec324: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec32c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ec32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1ec330: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ec330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ec334: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1ec334u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1ec338: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ec338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ec33c: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ec33cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1ec340: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ec340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ec344: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1ec344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec348: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ec348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ec34c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1ec34cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec354: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1ec354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1ec358: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ec358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ec35c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x1ec35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_1ec360:
    // 0x1ec360: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EC360u;
    SET_GPR_U32(ctx, 31, 0x1EC368u);
    ctx->pc = 0x1EC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC360u;
    // 0x1ec364: 0x8ec4be50  lw          $a0, -0x41B0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EC360u, 0x1EC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC368u;
label_1ec368:
    // 0x1ec368: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec36c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1ec36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1ec370: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec374: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ec378: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1ec378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1ec37c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1ec37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ec380: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1ec380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ec384: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1ec384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec388: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1EC388u;
    {
        const bool branch_taken_0x1ec388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC388u;
        // 0x1ec38c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec388) {
            ctx->pc = 0x1EC3C8u;
            goto label_1ec3c8;
        }
    }
    ctx->pc = 0x1EC390u;
    // 0x1ec390: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC390u;
    {
        const bool branch_taken_0x1ec390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC390u;
        // 0x1ec394: 0x26a441d8  addiu       $a0, $s5, 0x41D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec390) {
            ctx->pc = 0x1EC3A8u;
            goto label_1ec3a8;
        }
    }
    ctx->pc = 0x1EC398u;
    // 0x1ec398: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC398u;
    {
        const bool branch_taken_0x1ec398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC398u;
        // 0x1ec39c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec398) {
            ctx->pc = 0x1EC3B8u;
            goto label_1ec3b8;
        }
    }
    ctx->pc = 0x1EC3A0u;
    // 0x1ec3a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC3A0u;
    {
        const bool branch_taken_0x1ec3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3a0) {
            ctx->pc = 0x1EC3E8u;
            goto label_1ec3e8;
        }
    }
    ctx->pc = 0x1EC3A8u;
label_1ec3a8:
    // 0x1ec3a8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC3A8u;
    {
        const bool branch_taken_0x1ec3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A8u;
        // 0x1ec3ac: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3a8) {
            ctx->pc = 0x1EC3D8u;
            goto label_1ec3d8;
        }
    }
    ctx->pc = 0x1EC3B0u;
    // 0x1ec3b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EC3B0u;
    {
        const bool branch_taken_0x1ec3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3b0) {
            ctx->pc = 0x1EC3E8u;
            goto label_1ec3e8;
        }
    }
    ctx->pc = 0x1EC3B8u;
label_1ec3b8:
    // 0x1ec3b8: 0xc07ad54  jal         func_1EB550
    ctx->pc = 0x1EC3B8u;
    SET_GPR_U32(ctx, 31, 0x1EC3C0u);
    ctx->pc = 0x1EC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3B8u;
    // 0x1ec3bc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB550u, 0x1EC3B8u, 0x1EC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3C0u;
label_1ec3c0:
    // 0x1ec3c0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1EC3C0u;
    {
        const bool branch_taken_0x1ec3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3c0) {
            ctx->pc = 0x1EC360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC3C8u;
label_1ec3c8:
    // 0x1ec3c8: 0xc07ad34  jal         func_1EB4D0
    ctx->pc = 0x1EC3C8u;
    SET_GPR_U32(ctx, 31, 0x1EC3D0u);
    ctx->pc = 0x1EC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3C8u;
    // 0x1ec3cc: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4D0u, 0x1EC3C8u, 0x1EC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3D0u;
label_1ec3d0:
    // 0x1ec3d0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1EC3D0u;
    {
        const bool branch_taken_0x1ec3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3d0) {
            ctx->pc = 0x1EC360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC3D8u;
label_1ec3d8:
    // 0x1ec3d8: 0xc07ad64  jal         func_1EB590
    ctx->pc = 0x1EC3D8u;
    SET_GPR_U32(ctx, 31, 0x1EC3E0u);
    ctx->pc = 0x1EC3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3D8u;
    // 0x1ec3dc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB590u, 0x1EC3D8u, 0x1EC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3E0u;
label_1ec3e0:
    // 0x1ec3e0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1EC3E0u;
    {
        const bool branch_taken_0x1ec3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3e0) {
            ctx->pc = 0x1EC360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC3E8u;
label_1ec3e8:
    // 0x1ec3e8: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1EC3E8u;
    SET_GPR_U32(ctx, 31, 0x1EC3F0u);
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1EC3E8u, 0x1EC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3F0u;
label_1ec3f0:
    // 0x1ec3f0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1EC3F0u;
    {
        const bool branch_taken_0x1ec3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3f0) {
            ctx->pc = 0x1EC360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC3F8u;
}
