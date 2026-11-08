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

// Function: FUN_0017e370
// Address: 0x17e370 - 0x17e4b0
void FUN_0017e370_0x17e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e370_0x17e370");
#endif

    switch (ctx->pc) {
        case 0x17e370u: goto label_17e370;
        case 0x17e374u: goto label_17e374;
        case 0x17e378u: goto label_17e378;
        case 0x17e37cu: goto label_17e37c;
        case 0x17e380u: goto label_17e380;
        case 0x17e384u: goto label_17e384;
        case 0x17e388u: goto label_17e388;
        case 0x17e38cu: goto label_17e38c;
        case 0x17e390u: goto label_17e390;
        case 0x17e394u: goto label_17e394;
        case 0x17e398u: goto label_17e398;
        case 0x17e39cu: goto label_17e39c;
        case 0x17e3a0u: goto label_17e3a0;
        case 0x17e3a4u: goto label_17e3a4;
        case 0x17e3a8u: goto label_17e3a8;
        case 0x17e3acu: goto label_17e3ac;
        case 0x17e3b0u: goto label_17e3b0;
        case 0x17e3b4u: goto label_17e3b4;
        case 0x17e3b8u: goto label_17e3b8;
        case 0x17e3bcu: goto label_17e3bc;
        case 0x17e3c0u: goto label_17e3c0;
        case 0x17e3c4u: goto label_17e3c4;
        case 0x17e3c8u: goto label_17e3c8;
        case 0x17e3ccu: goto label_17e3cc;
        case 0x17e3d0u: goto label_17e3d0;
        case 0x17e3d4u: goto label_17e3d4;
        case 0x17e3d8u: goto label_17e3d8;
        case 0x17e3dcu: goto label_17e3dc;
        case 0x17e3e0u: goto label_17e3e0;
        case 0x17e3e4u: goto label_17e3e4;
        case 0x17e3e8u: goto label_17e3e8;
        case 0x17e3ecu: goto label_17e3ec;
        case 0x17e3f0u: goto label_17e3f0;
        case 0x17e3f4u: goto label_17e3f4;
        case 0x17e3f8u: goto label_17e3f8;
        case 0x17e3fcu: goto label_17e3fc;
        case 0x17e400u: goto label_17e400;
        case 0x17e404u: goto label_17e404;
        case 0x17e408u: goto label_17e408;
        case 0x17e40cu: goto label_17e40c;
        case 0x17e410u: goto label_17e410;
        case 0x17e414u: goto label_17e414;
        case 0x17e418u: goto label_17e418;
        case 0x17e41cu: goto label_17e41c;
        case 0x17e420u: goto label_17e420;
        case 0x17e424u: goto label_17e424;
        case 0x17e428u: goto label_17e428;
        case 0x17e42cu: goto label_17e42c;
        case 0x17e430u: goto label_17e430;
        case 0x17e434u: goto label_17e434;
        case 0x17e438u: goto label_17e438;
        case 0x17e43cu: goto label_17e43c;
        case 0x17e440u: goto label_17e440;
        case 0x17e444u: goto label_17e444;
        case 0x17e448u: goto label_17e448;
        case 0x17e44cu: goto label_17e44c;
        case 0x17e450u: goto label_17e450;
        case 0x17e454u: goto label_17e454;
        case 0x17e458u: goto label_17e458;
        case 0x17e45cu: goto label_17e45c;
        case 0x17e460u: goto label_17e460;
        case 0x17e464u: goto label_17e464;
        case 0x17e468u: goto label_17e468;
        case 0x17e46cu: goto label_17e46c;
        case 0x17e470u: goto label_17e470;
        case 0x17e474u: goto label_17e474;
        case 0x17e478u: goto label_17e478;
        case 0x17e47cu: goto label_17e47c;
        case 0x17e480u: goto label_17e480;
        case 0x17e484u: goto label_17e484;
        case 0x17e488u: goto label_17e488;
        case 0x17e48cu: goto label_17e48c;
        case 0x17e490u: goto label_17e490;
        case 0x17e494u: goto label_17e494;
        case 0x17e498u: goto label_17e498;
        case 0x17e49cu: goto label_17e49c;
        case 0x17e4a0u: goto label_17e4a0;
        case 0x17e4a4u: goto label_17e4a4;
        case 0x17e4a8u: goto label_17e4a8;
        case 0x17e4acu: goto label_17e4ac;
        default: break;
    }

    ctx->pc = 0x17e370u;

label_17e370:
    // 0x17e370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17e374:
    // 0x17e374: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17e378:
    // 0x17e378: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17e37c:
    // 0x17e37c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17e380:
    // 0x17e380: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17e380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e384:
    // 0x17e384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17e388:
    // 0x17e388: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17e388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17e38c:
    // 0x17e38c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17e38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17e390:
    // 0x17e390: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17e390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17e394:
    // 0x17e394: 0x8c85101c  lw          $a1, 0x101C($a0)
    ctx->pc = 0x17e394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
label_17e398:
    // 0x17e398: 0x8c861020  lw          $a2, 0x1020($a0)
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
label_17e39c:
    // 0x17e39c: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
label_17e3a0:
    // 0x17e3a0: 0xc05fb00  jal         func_17EC00
label_17e3a4:
    if (ctx->pc == 0x17E3A4u) {
        ctx->pc = 0x17E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3A0u;
        // 0x17e3a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3A8u;
        goto label_17e3a8;
    }
    ctx->pc = 0x17E3A0u;
    SET_GPR_U32(ctx, 31, 0x17E3A8u);
    ctx->pc = 0x17E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3A0u;
    // 0x17e3a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E3A0u, 0x17E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3A8u;
label_17e3a8:
    // 0x17e3a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17e3ac:
    if (ctx->pc == 0x17E3ACu) {
        ctx->pc = 0x17E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3A8u;
        // 0x17e3ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3B0u;
        goto label_17e3b0;
    }
    ctx->pc = 0x17E3A8u;
    {
        const bool branch_taken_0x17e3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3A8u;
        // 0x17e3ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3a8) {
            ctx->pc = 0x17E3B8u;
            goto label_17e3b8;
        }
    }
    ctx->pc = 0x17E3B0u;
label_17e3b0:
    // 0x17e3b0: 0x10000038  b           . + 4 + (0x38 << 2)
label_17e3b4:
    if (ctx->pc == 0x17E3B4u) {
        ctx->pc = 0x17E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3B0u;
        // 0x17e3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3B8u;
        goto label_17e3b8;
    }
    ctx->pc = 0x17E3B0u;
    {
        const bool branch_taken_0x17e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3B0u;
        // 0x17e3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3b0) {
            ctx->pc = 0x17E494u;
            goto label_17e494;
        }
    }
    ctx->pc = 0x17E3B8u;
label_17e3b8:
    // 0x17e3b8: 0x1243001a  beq         $s2, $v1, . + 4 + (0x1A << 2)
label_17e3bc:
    if (ctx->pc == 0x17E3BCu) {
        ctx->pc = 0x17E3C0u;
        goto label_17e3c0;
    }
    ctx->pc = 0x17E3B8u;
    {
        const bool branch_taken_0x17e3b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e3b8) {
            ctx->pc = 0x17E424u;
            goto label_17e424;
        }
    }
    ctx->pc = 0x17E3C0u;
label_17e3c0:
    // 0x17e3c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e3c4:
    // 0x17e3c4: 0x1243000e  beq         $s2, $v1, . + 4 + (0xE << 2)
label_17e3c8:
    if (ctx->pc == 0x17E3C8u) {
        ctx->pc = 0x17E3CCu;
        goto label_17e3cc;
    }
    ctx->pc = 0x17E3C4u;
    {
        const bool branch_taken_0x17e3c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e3c4) {
            ctx->pc = 0x17E400u;
            goto label_17e400;
        }
    }
    ctx->pc = 0x17E3CCu;
label_17e3cc:
    // 0x17e3cc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_17e3d0:
    if (ctx->pc == 0x17E3D0u) {
        ctx->pc = 0x17E3D4u;
        goto label_17e3d4;
    }
    ctx->pc = 0x17E3CCu;
    {
        const bool branch_taken_0x17e3cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3cc) {
            ctx->pc = 0x17E3DCu;
            goto label_17e3dc;
        }
    }
    ctx->pc = 0x17E3D4u;
label_17e3d4:
    // 0x17e3d4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_17e3d8:
    if (ctx->pc == 0x17E3D8u) {
        ctx->pc = 0x17E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3D4u;
        // 0x17e3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3DCu;
        goto label_17e3dc;
    }
    ctx->pc = 0x17E3D4u;
    {
        const bool branch_taken_0x17e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3D4u;
        // 0x17e3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3d4) {
            ctx->pc = 0x17E494u;
            goto label_17e494;
        }
    }
    ctx->pc = 0x17E3DCu;
label_17e3dc:
    // 0x17e3dc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e3e0:
    // 0x17e3e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e3e4:
    if (ctx->pc == 0x17E3E4u) {
        ctx->pc = 0x17E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3E0u;
        // 0x17e3e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3E8u;
        goto label_17e3e8;
    }
    ctx->pc = 0x17E3E0u;
    {
        const bool branch_taken_0x17e3e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3E0u;
        // 0x17e3e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3e0) {
            ctx->pc = 0x17E3F0u;
            goto label_17e3f0;
        }
    }
    ctx->pc = 0x17E3E8u;
label_17e3e8:
    // 0x17e3e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e3ec:
    if (ctx->pc == 0x17E3ECu) {
        ctx->pc = 0x17E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3E8u;
        // 0x17e3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3F0u;
        goto label_17e3f0;
    }
    ctx->pc = 0x17E3E8u;
    {
        const bool branch_taken_0x17e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3E8u;
        // 0x17e3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3e8) {
            ctx->pc = 0x17E3F8u;
            goto label_17e3f8;
        }
    }
    ctx->pc = 0x17E3F0u;
label_17e3f0:
    // 0x17e3f0: 0xc05f530  jal         func_17D4C0
label_17e3f4:
    if (ctx->pc == 0x17E3F4u) {
        ctx->pc = 0x17E3F8u;
        goto label_17e3f8;
    }
    ctx->pc = 0x17E3F0u;
    SET_GPR_U32(ctx, 31, 0x17E3F8u);
    ctx->pc = 0x17D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4C0u, 0x17E3F0u, 0x17E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E3F8u;
label_17e3f8:
    // 0x17e3f8: 0x10000027  b           . + 4 + (0x27 << 2)
label_17e3fc:
    if (ctx->pc == 0x17E3FCu) {
        ctx->pc = 0x17E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3F8u;
        // 0x17e3fc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E400u;
        goto label_17e400;
    }
    ctx->pc = 0x17E3F8u;
    {
        const bool branch_taken_0x17e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3F8u;
        // 0x17e3fc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3f8) {
            ctx->pc = 0x17E498u;
            goto label_17e498;
        }
    }
    ctx->pc = 0x17E400u;
label_17e400:
    // 0x17e400: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e404:
    // 0x17e404: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e408:
    if (ctx->pc == 0x17E408u) {
        ctx->pc = 0x17E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E404u;
        // 0x17e408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E40Cu;
        goto label_17e40c;
    }
    ctx->pc = 0x17E404u;
    {
        const bool branch_taken_0x17e404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E404u;
        // 0x17e408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e404) {
            ctx->pc = 0x17E414u;
            goto label_17e414;
        }
    }
    ctx->pc = 0x17E40Cu;
label_17e40c:
    // 0x17e40c: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e410:
    if (ctx->pc == 0x17E410u) {
        ctx->pc = 0x17E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E40Cu;
        // 0x17e410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E414u;
        goto label_17e414;
    }
    ctx->pc = 0x17E40Cu;
    {
        const bool branch_taken_0x17e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E40Cu;
        // 0x17e410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e40c) {
            ctx->pc = 0x17E41Cu;
            goto label_17e41c;
        }
    }
    ctx->pc = 0x17E414u;
label_17e414:
    // 0x17e414: 0xc05f548  jal         func_17D520
label_17e418:
    if (ctx->pc == 0x17E418u) {
        ctx->pc = 0x17E41Cu;
        goto label_17e41c;
    }
    ctx->pc = 0x17E414u;
    SET_GPR_U32(ctx, 31, 0x17E41Cu);
    ctx->pc = 0x17D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D520u, 0x17E414u, 0x17E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E41Cu;
label_17e41c:
    // 0x17e41c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_17e420:
    if (ctx->pc == 0x17E420u) {
        ctx->pc = 0x17E424u;
        goto label_17e424;
    }
    ctx->pc = 0x17E41Cu;
    {
        const bool branch_taken_0x17e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e41c) {
            ctx->pc = 0x17E494u;
            goto label_17e494;
        }
    }
    ctx->pc = 0x17E424u;
label_17e424:
    // 0x17e424: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17e428:
    // 0x17e428: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e42c:
    if (ctx->pc == 0x17E42Cu) {
        ctx->pc = 0x17E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E428u;
        // 0x17e42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E430u;
        goto label_17e430;
    }
    ctx->pc = 0x17E428u;
    {
        const bool branch_taken_0x17e428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E428u;
        // 0x17e42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e428) {
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E430u;
label_17e430:
    // 0x17e430: 0x10000018  b           . + 4 + (0x18 << 2)
label_17e434:
    if (ctx->pc == 0x17E434u) {
        ctx->pc = 0x17E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E430u;
        // 0x17e434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E438u;
        goto label_17e438;
    }
    ctx->pc = 0x17E430u;
    {
        const bool branch_taken_0x17e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E430u;
        // 0x17e434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e430) {
            ctx->pc = 0x17E494u;
            goto label_17e494;
        }
    }
    ctx->pc = 0x17E438u;
label_17e438:
    // 0x17e438: 0xc051198  jal         func_144660
label_17e43c:
    if (ctx->pc == 0x17E43Cu) {
        ctx->pc = 0x17E440u;
        goto label_17e440;
    }
    ctx->pc = 0x17E438u;
    SET_GPR_U32(ctx, 31, 0x17E440u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E438u, 0x17E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E440u;
label_17e440:
    // 0x17e440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e444:
    // 0x17e444: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_17e448:
    if (ctx->pc == 0x17E448u) {
        ctx->pc = 0x17E44Cu;
        goto label_17e44c;
    }
    ctx->pc = 0x17E444u;
    {
        const bool branch_taken_0x17e444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e444) {
            ctx->pc = 0x17E454u;
            goto label_17e454;
        }
    }
    ctx->pc = 0x17E44Cu;
label_17e44c:
    // 0x17e44c: 0x10000011  b           . + 4 + (0x11 << 2)
label_17e450:
    if (ctx->pc == 0x17E450u) {
        ctx->pc = 0x17E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E44Cu;
        // 0x17e450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E454u;
        goto label_17e454;
    }
    ctx->pc = 0x17E44Cu;
    {
        const bool branch_taken_0x17e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E44Cu;
        // 0x17e450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e44c) {
            ctx->pc = 0x17E494u;
            goto label_17e494;
        }
    }
    ctx->pc = 0x17E454u;
label_17e454:
    // 0x17e454: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e458:
    // 0x17e458: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17e458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17e45c:
    // 0x17e45c: 0x320f809  jalr        $t9
label_17e460:
    if (ctx->pc == 0x17E460u) {
        ctx->pc = 0x17E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E45Cu;
        // 0x17e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E464u;
        goto label_17e464;
    }
    ctx->pc = 0x17E45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E464u);
        ctx->pc = 0x17E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E45Cu;
        // 0x17e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E45Cu, 0x17E464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E464u;
label_17e464:
    // 0x17e464: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_17e468:
    if (ctx->pc == 0x17E468u) {
        ctx->pc = 0x17E46Cu;
        goto label_17e46c;
    }
    ctx->pc = 0x17E464u;
    {
        const bool branch_taken_0x17e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e464) {
            ctx->pc = 0x17E490u;
            goto label_17e490;
        }
    }
    ctx->pc = 0x17E46Cu;
label_17e46c:
    // 0x17e46c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e470:
    // 0x17e470: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e474:
    // 0x17e474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17e474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_17e478:
    // 0x17e478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e47c:
    // 0x17e47c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17e480:
    // 0x17e480: 0x320f809  jalr        $t9
label_17e484:
    if (ctx->pc == 0x17E484u) {
        ctx->pc = 0x17E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E480u;
        // 0x17e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E488u;
        goto label_17e488;
    }
    ctx->pc = 0x17E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E488u);
        ctx->pc = 0x17E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E480u;
        // 0x17e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E480u, 0x17E488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E488u;
label_17e488:
    // 0x17e488: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e48c:
    if (ctx->pc == 0x17E48Cu) {
        ctx->pc = 0x17E490u;
        goto label_17e490;
    }
    ctx->pc = 0x17E488u;
    {
        const bool branch_taken_0x17e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e488) {
            ctx->pc = 0x17E494u;
            goto label_17e494;
        }
    }
    ctx->pc = 0x17E490u;
label_17e490:
    // 0x17e490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e494:
    // 0x17e494: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17e494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17e498:
    // 0x17e498: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17e49c:
    // 0x17e49c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17e49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e4a0:
    // 0x17e4a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e4a4:
    // 0x17e4a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e4a8:
    // 0x17e4a8: 0x3e00008  jr          $ra
label_17e4ac:
    if (ctx->pc == 0x17E4ACu) {
        ctx->pc = 0x17E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4A8u;
        // 0x17e4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E4B0u;
        goto label_fallthrough_0x17e4a8;
    }
    ctx->pc = 0x17E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4A8u;
        // 0x17e4ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e4a8:
    ctx->pc = 0x17E4B0u;
}
