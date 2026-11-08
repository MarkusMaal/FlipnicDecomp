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

// Function: FUN_001cb2e0
// Address: 0x1cb2e0 - 0x1cb640
void FUN_001cb2e0_0x1cb2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb2e0_0x1cb2e0");
#endif

    switch (ctx->pc) {
        case 0x1cb300u: goto label_1cb300;
        case 0x1cb310u: goto label_1cb310;
        case 0x1cb324u: goto label_1cb324;
        case 0x1cb334u: goto label_1cb334;
        case 0x1cb33cu: goto label_1cb33c;
        case 0x1cb354u: goto label_1cb354;
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb378u: goto label_1cb378;
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb3a0u: goto label_1cb3a0;
        case 0x1cb3bcu: goto label_1cb3bc;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb484u: goto label_1cb484;
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4dcu: goto label_1cb4dc;
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb614u: goto label_1cb614;
        case 0x1cb628u: goto label_1cb628;
        default: break;
    }

    ctx->pc = 0x1cb2e0u;

    // 0x1cb2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb2e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cb2e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb2f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cb2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb2f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cb2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb300:
    // 0x1cb300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb304: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb308: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB308u;
    // 0x1cb30c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB308u, 0x1CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb314: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1cb314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1cb318: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
    // 0x1cb31c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB31Cu;
    SET_GPR_U32(ctx, 31, 0x1CB324u);
    ctx->pc = 0x1CB320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB31Cu;
    // 0x1cb320: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB31Cu, 0x1CB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB324u;
label_1cb324:
    // 0x1cb324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb328: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb32c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB32Cu;
    SET_GPR_U32(ctx, 31, 0x1CB334u);
    ctx->pc = 0x1CB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB32Cu;
    // 0x1cb330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB32Cu, 0x1CB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB334u;
label_1cb334:
    // 0x1cb334: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CB334u;
    SET_GPR_U32(ctx, 31, 0x1CB33Cu);
    ctx->pc = 0x1CB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB334u;
    // 0x1cb338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CB334u, 0x1CB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB33Cu;
label_1cb33c:
    // 0x1cb33c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cb340: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1cb340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cb344: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CB344u;
    {
        const bool branch_taken_0x1cb344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB344u;
        // 0x1cb348: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb344) {
            ctx->pc = 0x1CB300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb300;
        }
    }
    ctx->pc = 0x1CB34Cu;
    // 0x1cb34c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cb350: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1cb354:
    // 0x1cb354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb358: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb35c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB35Cu;
    SET_GPR_U32(ctx, 31, 0x1CB364u);
    ctx->pc = 0x1CB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB35Cu;
    // 0x1cb360: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB35Cu, 0x1CB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB364u;
label_1cb364:
    // 0x1cb364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb368: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1cb36c: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
    // 0x1cb370: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB370u;
    SET_GPR_U32(ctx, 31, 0x1CB378u);
    ctx->pc = 0x1CB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB370u;
    // 0x1cb374: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB370u, 0x1CB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB378u;
label_1cb378:
    // 0x1cb378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cb37c: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x1cb37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1cb380: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB380u;
    {
        const bool branch_taken_0x1cb380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB380u;
        // 0x1cb384: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb380) {
            ctx->pc = 0x1CB354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb354;
        }
    }
    ctx->pc = 0x1CB388u;
    // 0x1cb388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb38c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb390: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB390u;
    SET_GPR_U32(ctx, 31, 0x1CB398u);
    ctx->pc = 0x1CB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB390u;
    // 0x1cb394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB390u, 0x1CB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB398u;
label_1cb398:
    // 0x1cb398: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CB398u;
    SET_GPR_U32(ctx, 31, 0x1CB3A0u);
    ctx->pc = 0x1CB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB398u;
    // 0x1cb39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CB398u, 0x1CB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3A0u;
label_1cb3a0:
    // 0x1cb3a0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1cb3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1cb3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3a8: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1cb3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x1cb3ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB3B4u;
    SET_GPR_U32(ctx, 31, 0x1CB3BCu);
    ctx->pc = 0x1CB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3B4u;
    // 0x1cb3b8: 0xae200090  sw          $zero, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB3B4u, 0x1CB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3BCu;
label_1cb3bc:
    // 0x1cb3bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb3c8: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1cb3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb3cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB3CCu;
    SET_GPR_U32(ctx, 31, 0x1CB3D4u);
    ctx->pc = 0x1CB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3CCu;
    // 0x1cb3d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB3CCu, 0x1CB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3D4u;
label_1cb3d4:
    // 0x1cb3d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb3e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb3e4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb3e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1cb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb3ec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB3ECu;
    SET_GPR_U32(ctx, 31, 0x1CB3F4u);
    ctx->pc = 0x1CB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3ECu;
    // 0x1cb3f0: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB3ECu, 0x1CB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3F4u;
label_1cb3f4:
    // 0x1cb3f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb400: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb404: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB404u;
    SET_GPR_U32(ctx, 31, 0x1CB40Cu);
    ctx->pc = 0x1CB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB404u;
    // 0x1cb408: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB404u, 0x1CB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB40Cu;
label_1cb40c:
    // 0x1cb40c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1cb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb414: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb41c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb420: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb424: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB424u;
    SET_GPR_U32(ctx, 31, 0x1CB42Cu);
    ctx->pc = 0x1CB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB424u;
    // 0x1cb428: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB424u, 0x1CB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB42Cu;
label_1cb42c:
    // 0x1cb42c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cb42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb438: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB438u;
    SET_GPR_U32(ctx, 31, 0x1CB440u);
    ctx->pc = 0x1CB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB438u;
    // 0x1cb43c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB438u, 0x1CB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB440u;
label_1cb440:
    // 0x1cb440: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cb440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb448: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb44c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB44Cu;
    SET_GPR_U32(ctx, 31, 0x1CB454u);
    ctx->pc = 0x1CB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB44Cu;
    // 0x1cb450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB44Cu, 0x1CB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB454u;
label_1cb454:
    // 0x1cb454: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb45c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB45Cu;
    SET_GPR_U32(ctx, 31, 0x1CB464u);
    ctx->pc = 0x1CB460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB45Cu;
    // 0x1cb460: 0x24a58000  addiu       $a1, $a1, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB45Cu, 0x1CB464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB464u;
label_1cb464:
    // 0x1cb464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb468: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb46c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB46Cu;
    SET_GPR_U32(ctx, 31, 0x1CB474u);
    ctx->pc = 0x1CB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB46Cu;
    // 0x1cb470: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB46Cu, 0x1CB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB474u;
label_1cb474:
    // 0x1cb474: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb47c: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB47Cu;
    SET_GPR_U32(ctx, 31, 0x1CB484u);
    ctx->pc = 0x1CB480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB47Cu;
    // 0x1cb480: 0x24a58010  addiu       $a1, $a1, -0x7FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB47Cu, 0x1CB484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB484u;
label_1cb484:
    // 0x1cb484: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1cb484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1cb488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB488u;
    {
        const bool branch_taken_0x1cb488 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB488u;
        // 0x1cb48c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb488) {
            ctx->pc = 0x1CB498u;
            goto label_1cb498;
        }
    }
    ctx->pc = 0x1CB490u;
    // 0x1cb490: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb494: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1cb494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1cb498:
    // 0x1cb498: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x1cb498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x1cb49c: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x1cb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1cb4a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB4A0u;
    {
        const bool branch_taken_0x1cb4a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4A0u;
        // 0x1cb4a4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4a0) {
            ctx->pc = 0x1CB4B0u;
            goto label_1cb4b0;
        }
    }
    ctx->pc = 0x1CB4A8u;
    // 0x1cb4a8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb4ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1cb4b0:
    // 0x1cb4b0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1CB4B0u;
    SET_GPR_U32(ctx, 31, 0x1CB4B8u);
    ctx->pc = 0x1CB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4B0u;
    // 0x1cb4b4: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1CB4B0u, 0x1CB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4B8u;
label_1cb4b8:
    // 0x1cb4b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4bc: 0xc062944  jal         func_18A510
    ctx->pc = 0x1CB4BCu;
    SET_GPR_U32(ctx, 31, 0x1CB4C4u);
    ctx->pc = 0x1CB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4BCu;
    // 0x1cb4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A510u, 0x1CB4BCu, 0x1CB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4C4u;
label_1cb4c4:
    // 0x1cb4c4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x1cb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x1cb4c8: 0xc062990  jal         func_18A640
    ctx->pc = 0x1CB4C8u;
    SET_GPR_U32(ctx, 31, 0x1CB4D0u);
    ctx->pc = 0x1CB4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4C8u;
    // 0x1cb4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A640u, 0x1CB4C8u, 0x1CB4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4D0u;
label_1cb4d0:
    // 0x1cb4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4d4: 0xc0629b8  jal         func_18A6E0
    ctx->pc = 0x1CB4D4u;
    SET_GPR_U32(ctx, 31, 0x1CB4DCu);
    ctx->pc = 0x1CB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4D4u;
    // 0x1cb4d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A6E0u, 0x1CB4D4u, 0x1CB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4DCu;
label_1cb4dc:
    // 0x1cb4dc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cb4e0: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
    // 0x1cb4e4: 0x9024c7f4  lbu         $a0, -0x380C($at)
    ctx->pc = 0x1cb4e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x22C7F4u));
    // 0x1cb4e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb4ec: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x1cb4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
    // 0x1cb4f0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1cb4f4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x1cb4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4fc: 0x0  nop
    ctx->pc = 0x1cb4fcu;
    // NOP
    // 0x1cb500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb504: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cb504u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cb508: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb50c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cb50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cb510: 0x0  nop
    ctx->pc = 0x1cb510u;
    // NOP
    // 0x1cb514: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x1cb518: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1cb51c: 0x70621818  mult1       $v1, $v1, $v0
    ctx->pc = 0x1cb51cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb524: 0x0  nop
    ctx->pc = 0x1cb524u;
    // NOP
    // 0x1cb528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb52c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cb52cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cb530: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb534: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cb534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cb538: 0x0  nop
    ctx->pc = 0x1cb538u;
    // NOP
    // 0x1cb53c: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x1cb53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x1cb540: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cb544: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1cb544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x1cb548: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1cb548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1cb54c: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x1cb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x1cb550: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1cb554: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1cb554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
    // 0x1cb558: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1cb55c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB55Cu;
    {
        const bool branch_taken_0x1cb55c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB55Cu;
        // 0x1cb560: 0xae23008c  sw          $v1, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb55c) {
            ctx->pc = 0x1CB57Cu;
            goto label_1cb57c;
        }
    }
    ctx->pc = 0x1CB564u;
    // 0x1cb564: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cb568: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB568u;
    {
        const bool branch_taken_0x1cb568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb568) {
            ctx->pc = 0x1CB57Cu;
            goto label_1cb57c;
        }
    }
    ctx->pc = 0x1CB570u;
    // 0x1cb570: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1cb574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb578: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1cb578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_1cb57c:
    // 0x1cb57c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB57Cu;
    {
        const bool branch_taken_0x1cb57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB57Cu;
        // 0x1cb580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb57c) {
            ctx->pc = 0x1CB5A0u;
            goto label_1cb5a0;
        }
    }
    ctx->pc = 0x1CB584u;
    // 0x1cb584: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cb588: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB588u;
    {
        const bool branch_taken_0x1cb588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb588) {
            ctx->pc = 0x1CB59Cu;
            goto label_1cb59c;
        }
    }
    ctx->pc = 0x1CB590u;
    // 0x1cb590: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1cb594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb598: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1cb598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_1cb59c:
    // 0x1cb59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5a0:
    // 0x1cb5a0: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CB5A0u;
    SET_GPR_U32(ctx, 31, 0x1CB5A8u);
    ctx->pc = 0x1CB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5A0u;
    // 0x1cb5a4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CB5A0u, 0x1CB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5A8u;
label_1cb5a8:
    // 0x1cb5a8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5b0: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x1cb5b4: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CB5B4u;
    SET_GPR_U32(ctx, 31, 0x1CB5BCu);
    ctx->pc = 0x1CB5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5B4u;
    // 0x1cb5b8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CB5B4u, 0x1CB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5BCu;
label_1cb5bc:
    // 0x1cb5bc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5c4: 0x24a57c50  addiu       $a1, $a1, 0x7C50
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
    // 0x1cb5c8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CB5C8u;
    SET_GPR_U32(ctx, 31, 0x1CB5D0u);
    ctx->pc = 0x1CB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5C8u;
    // 0x1cb5cc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CB5C8u, 0x1CB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5D0u;
label_1cb5d0:
    // 0x1cb5d0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5d8: 0x24a57d40  addiu       $a1, $a1, 0x7D40
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32064));
    // 0x1cb5dc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CB5DCu;
    SET_GPR_U32(ctx, 31, 0x1CB5E4u);
    ctx->pc = 0x1CB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5DCu;
    // 0x1cb5e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CB5DCu, 0x1CB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CB5E4u;
    SET_GPR_U32(ctx, 31, 0x1CB5ECu);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CB5E4u, 0x1CB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5ECu;
label_1cb5ec:
    // 0x1cb5ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cb5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cb5f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb5f4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB5F4u;
    {
        const bool branch_taken_0x1cb5f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb5f4) {
            ctx->pc = 0x1CB628u;
            goto label_1cb628;
        }
    }
    ctx->pc = 0x1CB5FCu;
    // 0x1cb5fc: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CB5FCu;
    SET_GPR_U32(ctx, 31, 0x1CB604u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CB5FCu, 0x1CB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB604u;
label_1cb604:
    // 0x1cb604: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb60c: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CB60Cu;
    SET_GPR_U32(ctx, 31, 0x1CB614u);
    ctx->pc = 0x1CB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB60Cu;
    // 0x1cb610: 0x24a579a0  addiu       $a1, $a1, 0x79A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CB60Cu, 0x1CB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB614u;
label_1cb614:
    // 0x1cb614: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb618: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb61c: 0x24a579b0  addiu       $a1, $a1, 0x79B0
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31152));
    // 0x1cb620: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB620u;
    SET_GPR_U32(ctx, 31, 0x1CB628u);
    ctx->pc = 0x1CB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB620u;
    // 0x1cb624: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB620u, 0x1CB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB628u;
label_1cb628:
    // 0x1cb628: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cb628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb62c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb638: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB638u;
        // 0x1cb63c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB640u;
}
