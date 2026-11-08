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

// Function: FUN_0012c3a0
// Address: 0x12c3a0 - 0x12c71c
void FUN_0012c3a0_0x12c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c3a0_0x12c3a0");
#endif

    switch (ctx->pc) {
        case 0x12c3d0u: goto label_12c3d0;
        case 0x12c45cu: goto label_12c45c;
        case 0x12c478u: goto label_12c478;
        case 0x12c4d0u: goto label_12c4d0;
        case 0x12c504u: goto label_12c504;
        case 0x12c52cu: goto label_12c52c;
        case 0x12c54cu: goto label_12c54c;
        case 0x12c574u: goto label_12c574;
        case 0x12c5b4u: goto label_12c5b4;
        case 0x12c5d8u: goto label_12c5d8;
        case 0x12c5ecu: goto label_12c5ec;
        case 0x12c61cu: goto label_12c61c;
        case 0x12c644u: goto label_12c644;
        case 0x12c664u: goto label_12c664;
        case 0x12c698u: goto label_12c698;
        case 0x12c700u: goto label_12c700;
        default: break;
    }

    ctx->pc = 0x12c3a0u;

    // 0x12c3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12c3a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12c3a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12c3ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12c3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c3b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c3bc: 0x80910068  lb          $s1, 0x68($a0)
    ctx->pc = 0x12c3bcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x12c3c0: 0x80900067  lb          $s0, 0x67($a0)
    ctx->pc = 0x12c3c0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 103)));
    // 0x12c3c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3c8: 0xc07d806  jal         func_1F6018
    ctx->pc = 0x12C3C8u;
    SET_GPR_U32(ctx, 31, 0x12C3D0u);
    ctx->pc = 0x12C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3C8u;
    // 0x12c3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6018u, 0x12C3C8u, 0x12C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3D0u;
label_12c3d0:
    // 0x12c3d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C3D0u;
    {
        const bool branch_taken_0x12c3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c3d0) {
            ctx->pc = 0x12C3DCu;
            goto label_12c3dc;
        }
    }
    ctx->pc = 0x12C3D8u;
    // 0x12c3d8: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x12c3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
label_12c3dc:
    // 0x12c3dc: 0x82440066  lb          $a0, 0x66($s2)
    ctx->pc = 0x12c3dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c3e0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12c3e4: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x12C3E4u;
    {
        const bool branch_taken_0x12c3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3E4u;
        // 0x12c3e8: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3e4) {
            ctx->pc = 0x12C638u;
            goto label_12c638;
        }
    }
    ctx->pc = 0x12C3ECu;
    // 0x12c3ec: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x12C3ECu;
    {
        const bool branch_taken_0x12c3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c3ec) {
            ctx->pc = 0x12C610u;
            goto label_12c610;
        }
    }
    ctx->pc = 0x12C3F4u;
    // 0x12c3f4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12c3f8: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x12C3F8u;
    {
        const bool branch_taken_0x12c3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3F8u;
        // 0x12c3fc: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3f8) {
            ctx->pc = 0x12C5CCu;
            goto label_12c5cc;
        }
    }
    ctx->pc = 0x12C400u;
    // 0x12c400: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x12C400u;
    {
        const bool branch_taken_0x12c400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c400) {
            ctx->pc = 0x12C560u;
            goto label_12c560;
        }
    }
    ctx->pc = 0x12C408u;
    // 0x12c408: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12c40c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x12C40Cu;
    {
        const bool branch_taken_0x12c40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C40Cu;
        // 0x12c410: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c40c) {
            ctx->pc = 0x12C520u;
            goto label_12c520;
        }
    }
    ctx->pc = 0x12C414u;
    // 0x12c414: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x12C414u;
    {
        const bool branch_taken_0x12c414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c414) {
            ctx->pc = 0x12C4F0u;
            goto label_12c4f0;
        }
    }
    ctx->pc = 0x12C41Cu;
    // 0x12c41c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x12c420: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x12C420u;
    {
        const bool branch_taken_0x12c420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c420) {
            ctx->pc = 0x12C4BCu;
            goto label_12c4bc;
        }
    }
    ctx->pc = 0x12C428u;
    // 0x12c428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C428u;
    {
        const bool branch_taken_0x12c428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C428u;
        // 0x12c42c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c428) {
            ctx->pc = 0x12C438u;
            goto label_12c438;
        }
    }
    ctx->pc = 0x12C430u;
    // 0x12c430: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x12C430u;
    {
        const bool branch_taken_0x12c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C430u;
        // 0x12c434: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c430) {
            ctx->pc = 0x12C678u;
            goto label_12c678;
        }
    }
    ctx->pc = 0x12C438u;
label_12c438:
    // 0x12c438: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C438u;
    {
        const bool branch_taken_0x12c438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C438u;
        // 0x12c43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c438) {
            ctx->pc = 0x12C44Cu;
            goto label_12c44c;
        }
    }
    ctx->pc = 0x12C440u;
    // 0x12c440: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c444: 0x144300a5  bne         $v0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12C444u;
    {
        const bool branch_taken_0x12c444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C444u;
        // 0x12c448: 0x3c038080  lui         $v1, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c444) {
            ctx->pc = 0x12C6DCu;
            goto label_12c6dc;
        }
    }
    ctx->pc = 0x12C44Cu;
label_12c44c:
    // 0x12c44c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12c450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c454: 0xc07d8fe  jal         func_1F63F8
    ctx->pc = 0x12C454u;
    SET_GPR_U32(ctx, 31, 0x12C45Cu);
    ctx->pc = 0x12C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C454u;
    // 0x12c458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63F8u, 0x12C454u, 0x12C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C45Cu;
label_12c45c:
    // 0x12c45c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c460: 0x1260009d  beqz        $s3, . + 4 + (0x9D << 2)
    ctx->pc = 0x12C460u;
    {
        const bool branch_taken_0x12c460 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C460u;
        // 0x12c464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c460) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C468u;
    // 0x12c468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c46c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c470: 0xc07d8fe  jal         func_1F63F8
    ctx->pc = 0x12C470u;
    SET_GPR_U32(ctx, 31, 0x12C478u);
    ctx->pc = 0x12C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C470u;
    // 0x12c474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63F8u, 0x12C470u, 0x12C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C478u;
label_12c478:
    // 0x12c478: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C478u;
    {
        const bool branch_taken_0x12c478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12c478) {
            ctx->pc = 0x12C484u;
            goto label_12c484;
        }
    }
    ctx->pc = 0x12C480u;
    // 0x12c480: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c484:
    // 0x12c484: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x12c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12c488: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C488u;
    {
        const bool branch_taken_0x12c488 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C488u;
        // 0x12c48c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c488) {
            ctx->pc = 0x12C4ACu;
            goto label_12c4ac;
        }
    }
    ctx->pc = 0x12C490u;
    // 0x12c490: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c494: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C494u;
    {
        const bool branch_taken_0x12c494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C494u;
        // 0x12c498: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c494) {
            ctx->pc = 0x12C4A4u;
            goto label_12c4a4;
        }
    }
    ctx->pc = 0x12C49Cu;
    // 0x12c49c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C49Cu;
    {
        const bool branch_taken_0x12c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C49Cu;
        // 0x12c4a0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c49c) {
            ctx->pc = 0x12C4B4u;
            goto label_12c4b4;
        }
    }
    ctx->pc = 0x12C4A4u;
label_12c4a4:
    // 0x12c4a4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x12C4A4u;
    {
        const bool branch_taken_0x12c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4A4u;
        // 0x12c4a8: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4a4) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C4ACu;
label_12c4ac:
    // 0x12c4ac: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x12C4ACu;
    {
        const bool branch_taken_0x12c4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4ACu;
        // 0x12c4b0: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4ac) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C4B4u;
label_12c4b4:
    // 0x12c4b4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x12C4B4u;
    {
        const bool branch_taken_0x12c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4B4u;
        // 0x12c4b8: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4b4) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C4BCu;
label_12c4bc:
    // 0x12c4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c4c8: 0xc07d8fe  jal         func_1F63F8
    ctx->pc = 0x12C4C8u;
    SET_GPR_U32(ctx, 31, 0x12C4D0u);
    ctx->pc = 0x12C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4C8u;
    // 0x12c4cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63F8u, 0x12C4C8u, 0x12C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4D0u;
label_12c4d0:
    // 0x12c4d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C4D0u;
    {
        const bool branch_taken_0x12c4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c4d0) {
            ctx->pc = 0x12C4E4u;
            goto label_12c4e4;
        }
    }
    ctx->pc = 0x12C4D8u;
    // 0x12c4d8: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c4dc: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x12C4DCu;
    {
        const bool branch_taken_0x12c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4DCu;
        // 0x12c4e0: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4dc) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C4E4u;
label_12c4e4:
    // 0x12c4e4: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c4e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c4ec: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_12c4f0:
    // 0x12c4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c4fc: 0xc07d94c  jal         func_1F6530
    ctx->pc = 0x12C4FCu;
    SET_GPR_U32(ctx, 31, 0x12C504u);
    ctx->pc = 0x12C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4FCu;
    // 0x12c500: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6530u, 0x12C4FCu, 0x12C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C504u;
label_12c504:
    // 0x12c504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c508: 0x14430073  bne         $v0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x12C508u;
    {
        const bool branch_taken_0x12c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c508) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C510u;
    // 0x12c510: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c518: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x12C518u;
    {
        const bool branch_taken_0x12c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C518u;
        // 0x12c51c: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c518) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C520u;
label_12c520:
    // 0x12c520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c524: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C524u;
    SET_GPR_U32(ctx, 31, 0x12C52Cu);
    ctx->pc = 0x12C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C524u;
    // 0x12c528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C524u, 0x12C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C52Cu;
label_12c52c:
    // 0x12c52c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c530: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C530u;
    {
        const bool branch_taken_0x12c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C530u;
        // 0x12c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c530) {
            ctx->pc = 0x12C544u;
            goto label_12c544;
        }
    }
    ctx->pc = 0x12C538u;
    // 0x12c538: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c53c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c540: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c540u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_12c544:
    // 0x12c544: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C544u;
    SET_GPR_U32(ctx, 31, 0x12C54Cu);
    ctx->pc = 0x12C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C544u;
    // 0x12c548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C544u, 0x12C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C54Cu;
label_12c54c:
    // 0x12c54c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x12C54Cu;
    {
        const bool branch_taken_0x12c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c54c) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C554u;
    // 0x12c554: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c558: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x12C558u;
    {
        const bool branch_taken_0x12c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C558u;
        // 0x12c55c: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c558) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C560u;
label_12c560:
    // 0x12c560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c568: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c56c: 0xc07d86e  jal         func_1F61B8
    ctx->pc = 0x12C56Cu;
    SET_GPR_U32(ctx, 31, 0x12C574u);
    ctx->pc = 0x12C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C56Cu;
    // 0x12c570: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F61B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61B8u, 0x12C56Cu, 0x12C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C574u;
label_12c574:
    // 0x12c574: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C574u;
    {
        const bool branch_taken_0x12c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c574) {
            ctx->pc = 0x12C584u;
            goto label_12c584;
        }
    }
    ctx->pc = 0x12C57Cu;
    // 0x12c57c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c580: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c580u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_12c584:
    // 0x12c584: 0xa2400072  sb          $zero, 0x72($s2)
    ctx->pc = 0x12c584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c58c: 0xa2420073  sb          $v0, 0x73($s2)
    ctx->pc = 0x12c58cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c594: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12c598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c59c: 0xa2420074  sb          $v0, 0x74($s2)
    ctx->pc = 0x12c59cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5a0: 0x26460072  addiu       $a2, $s2, 0x72
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 114));
    // 0x12c5a4: 0xa2420075  sb          $v0, 0x75($s2)
    ctx->pc = 0x12c5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5a8: 0xa2420076  sb          $v0, 0x76($s2)
    ctx->pc = 0x12c5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5ac: 0xc07d9aa  jal         func_1F66A8
    ctx->pc = 0x12C5ACu;
    SET_GPR_U32(ctx, 31, 0x12C5B4u);
    ctx->pc = 0x12C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5ACu;
    // 0x12c5b0: 0xa2420077  sb          $v0, 0x77($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 119), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F66A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F66A8u, 0x12C5ACu, 0x12C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5B4u;
label_12c5b4:
    // 0x12c5b4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x12C5B4u;
    {
        const bool branch_taken_0x12c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c5b4) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C5BCu;
    // 0x12c5bc: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c5bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c5c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c5c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x12C5C4u;
    {
        const bool branch_taken_0x12c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5C4u;
        // 0x12c5c8: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5c4) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C5CCu;
label_12c5cc:
    // 0x12c5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5d0: 0xc07d806  jal         func_1F6018
    ctx->pc = 0x12C5D0u;
    SET_GPR_U32(ctx, 31, 0x12C5D8u);
    ctx->pc = 0x12C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5D0u;
    // 0x12c5d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6018u, 0x12C5D0u, 0x12C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5D8u;
label_12c5d8:
    // 0x12c5d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12c5dc: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12C5DCu;
    {
        const bool branch_taken_0x12c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5DCu;
        // 0x12c5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5dc) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C5E4u;
    // 0x12c5e4: 0xc07da3a  jal         func_1F68E8
    ctx->pc = 0x12C5E4u;
    SET_GPR_U32(ctx, 31, 0x12C5ECu);
    ctx->pc = 0x12C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5E4u;
    // 0x12c5e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F68E8u, 0x12C5E4u, 0x12C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5ECu;
label_12c5ec:
    // 0x12c5ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c5f0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C5F0u;
    {
        const bool branch_taken_0x12c5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c5f0) {
            ctx->pc = 0x12C604u;
            goto label_12c604;
        }
    }
    ctx->pc = 0x12C5F8u;
    // 0x12c5f8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x12c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x12c5fc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12C5FCu;
    {
        const bool branch_taken_0x12c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5FCu;
        // 0x12c600: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5fc) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C604u;
label_12c604:
    // 0x12c604: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c608: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x12C608u;
    {
        const bool branch_taken_0x12c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C608u;
        // 0x12c60c: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c608) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C610u;
label_12c610:
    // 0x12c610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c614: 0xc07da52  jal         func_1F6948
    ctx->pc = 0x12C614u;
    SET_GPR_U32(ctx, 31, 0x12C61Cu);
    ctx->pc = 0x12C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C614u;
    // 0x12c618: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6948u, 0x12C614u, 0x12C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C61Cu;
label_12c61c:
    // 0x12c61c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c620: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x12C620u;
    {
        const bool branch_taken_0x12c620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c620) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C628u;
    // 0x12c628: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c630: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12C630u;
    {
        const bool branch_taken_0x12c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C630u;
        // 0x12c634: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c630) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C638u;
label_12c638:
    // 0x12c638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c63c: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C63Cu;
    SET_GPR_U32(ctx, 31, 0x12C644u);
    ctx->pc = 0x12C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C63Cu;
    // 0x12c640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C63Cu, 0x12C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C644u;
label_12c644:
    // 0x12c644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c648: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C648u;
    {
        const bool branch_taken_0x12c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C648u;
        // 0x12c64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c648) {
            ctx->pc = 0x12C65Cu;
            goto label_12c65c;
        }
    }
    ctx->pc = 0x12C650u;
    // 0x12c650: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c658: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c658u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
label_12c65c:
    // 0x12c65c: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C65Cu;
    SET_GPR_U32(ctx, 31, 0x12C664u);
    ctx->pc = 0x12C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C65Cu;
    // 0x12c660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C65Cu, 0x12C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C664u;
label_12c664:
    // 0x12c664: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12C664u;
    {
        const bool branch_taken_0x12c664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c664) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C66Cu;
    // 0x12c66c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c670: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12C670u;
    {
        const bool branch_taken_0x12c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C670u;
        // 0x12c674: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c670) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C678u;
label_12c678:
    // 0x12c678: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C678u;
    {
        const bool branch_taken_0x12c678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C678u;
        // 0x12c67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c678) {
            ctx->pc = 0x12C68Cu;
            goto label_12c68c;
        }
    }
    ctx->pc = 0x12C680u;
    // 0x12c680: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c684: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12C684u;
    {
        const bool branch_taken_0x12c684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C684u;
        // 0x12c688: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c684) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C68Cu;
label_12c68c:
    // 0x12c68c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c690: 0xc04b058  jal         func_12C160
    ctx->pc = 0x12C690u;
    SET_GPR_U32(ctx, 31, 0x12C698u);
    ctx->pc = 0x12C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C690u;
    // 0x12c694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C160u, 0x12C690u, 0x12C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x82440065  lb          $a0, 0x65($s2)
    ctx->pc = 0x12c698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
    // 0x12c69c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C69Cu;
    {
        const bool branch_taken_0x12c69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c69c) {
            ctx->pc = 0x12C6B8u;
            goto label_12c6b8;
        }
    }
    ctx->pc = 0x12C6A4u;
    // 0x12c6a4: 0x82430064  lb          $v1, 0x64($s2)
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12c6a8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C6A8u;
    {
        const bool branch_taken_0x12c6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x12c6a8) {
            ctx->pc = 0x12C6B8u;
            goto label_12c6b8;
        }
    }
    ctx->pc = 0x12C6B0u;
    // 0x12c6b0: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x12c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6b4: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x12c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
label_12c6b8:
    // 0x12c6b8: 0x82430064  lb          $v1, 0x64($s2)
    ctx->pc = 0x12c6b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12c6bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12C6BCu;
    {
        const bool branch_taken_0x12c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6BCu;
        // 0x12c6c0: 0xa2430065  sb          $v1, 0x65($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6bc) {
            ctx->pc = 0x12C700u;
            goto label_12c700;
        }
    }
    ctx->pc = 0x12C6C4u;
label_12c6c4:
    // 0x12c6c4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C6C4u;
    {
        const bool branch_taken_0x12c6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c6c4) {
            ctx->pc = 0x12C6D8u;
            goto label_12c6d8;
        }
    }
    ctx->pc = 0x12C6CCu;
    // 0x12c6cc: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x12c6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6d0: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x12c6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6d4: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x12c6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_12c6d8:
    // 0x12c6d8: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x12c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_12c6dc:
    // 0x12c6dc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12c6e0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x12c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x12c6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6e8: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x12c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x12c6ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6f0: 0xa2420047  sb          $v0, 0x47($s2)
    ctx->pc = 0x12c6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6f8: 0xc04b058  jal         func_12C160
    ctx->pc = 0x12C6F8u;
    SET_GPR_U32(ctx, 31, 0x12C700u);
    ctx->pc = 0x12C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6F8u;
    // 0x12c6fc: 0xa2420046  sb          $v0, 0x46($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C160u, 0x12C6F8u, 0x12C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C700u;
label_12c700:
    // 0x12c700: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12c700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c704: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12c704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12c708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c70c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c714: 0x3e00008  jr          $ra
    ctx->pc = 0x12C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C714u;
        // 0x12c718: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C71Cu;
}
