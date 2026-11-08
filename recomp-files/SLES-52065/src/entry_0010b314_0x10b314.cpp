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

// Function: entry_0010b314
// Address: 0x10b314 - 0x10b3ec
void entry_0010b314_0x10b314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b314_0x10b314");
#endif

    switch (ctx->pc) {
        case 0x10b32cu: goto label_10b32c;
        case 0x10b350u: goto label_10b350;
        case 0x10b35cu: goto label_10b35c;
        case 0x10b370u: goto label_10b370;
        case 0x10b380u: goto label_10b380;
        case 0x10b3d4u: goto label_10b3d4;
        default: break;
    }

    ctx->pc = 0x10b314u;

label_10b314:
    // 0x10b314: 0x860243f0  lh          $v0, 0x43F0($s0)
    ctx->pc = 0x10b314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 17392)));
label_10b318:
    // 0x10b318: 0x1c400034  bgtz        $v0, . + 4 + (0x34 << 2)
label_10b31c:
    if (ctx->pc == 0x10B31Cu) {
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B320u;
        goto label_10b320;
    }
    ctx->pc = 0x10B318u;
    {
        const bool branch_taken_0x10b318 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b318) {
            ctx->pc = 0x10B3ECu;
            return;
        }
    }
    ctx->pc = 0x10B320u;
label_10b320:
    // 0x10b320: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10b324:
    // 0x10b324: 0xc046458  jal         func_119160
label_10b328:
    if (ctx->pc == 0x10B328u) {
        ctx->pc = 0x10B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B324u;
        // 0x10b328: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B32Cu;
        goto label_10b32c;
    }
    ctx->pc = 0x10B324u;
    SET_GPR_U32(ctx, 31, 0x10B32Cu);
    ctx->pc = 0x10B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B324u;
    // 0x10b328: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10B324u, 0x10B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B32Cu;
label_10b32c:
    // 0x10b32c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10b330:
    // 0x10b330: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_10b334:
    // 0x10b334: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x10b334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
label_10b338:
    // 0x10b338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b33c:
    // 0x10b33c: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x10b33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_10b340:
    // 0x10b340: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b344:
    // 0x10b344: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x10b344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b348:
    // 0x10b348: 0xc046680  jal         func_119A00
label_10b34c:
    if (ctx->pc == 0x10B34Cu) {
        ctx->pc = 0x10B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B348u;
        // 0x10b34c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B350u;
        goto label_10b350;
    }
    ctx->pc = 0x10B348u;
    SET_GPR_U32(ctx, 31, 0x10B350u);
    ctx->pc = 0x10B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B348u;
    // 0x10b34c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A00u, 0x10B348u, 0x10B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B350u;
label_10b350:
    // 0x10b350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b354:
    // 0x10b354: 0xc042118  jal         func_108460
label_10b358:
    if (ctx->pc == 0x10B358u) {
        ctx->pc = 0x10B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B354u;
        // 0x10b358: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B35Cu;
        goto label_10b35c;
    }
    ctx->pc = 0x10B354u;
    SET_GPR_U32(ctx, 31, 0x10B35Cu);
    ctx->pc = 0x10B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B354u;
    // 0x10b358: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B354u, 0x10B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B35Cu;
label_10b35c:
    // 0x10b35c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b360:
    // 0x10b360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b364:
    // 0x10b364: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b368:
    // 0x10b368: 0x320f809  jalr        $t9
label_10b36c:
    if (ctx->pc == 0x10B36Cu) {
        ctx->pc = 0x10B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B368u;
        // 0x10b36c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B370u;
        goto label_10b370;
    }
    ctx->pc = 0x10B368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B370u);
        ctx->pc = 0x10B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B368u;
        // 0x10b36c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B368u, 0x10B370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B370u;
label_10b370:
    // 0x10b370: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b374:
    // 0x10b374: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10b374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10b378:
    // 0x10b378: 0x320f809  jalr        $t9
label_10b37c:
    if (ctx->pc == 0x10B37Cu) {
        ctx->pc = 0x10B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B378u;
        // 0x10b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B380u;
        goto label_10b380;
    }
    ctx->pc = 0x10B378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B380u);
        ctx->pc = 0x10B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B378u;
        // 0x10b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B378u, 0x10B380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B380u;
label_10b380:
    // 0x10b380: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x10b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_10b384:
    // 0x10b384: 0x8e0643e4  lw          $a2, 0x43E4($s0)
    ctx->pc = 0x10b384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17380)));
label_10b388:
    // 0x10b388: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10b388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10b38c:
    // 0x10b38c: 0x8e0343d0  lw          $v1, 0x43D0($s0)
    ctx->pc = 0x10b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17360)));
label_10b390:
    // 0x10b390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b394:
    // 0x10b394: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x10b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_10b398:
    // 0x10b398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10b39c:
    // 0x10b39c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x10b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_10b3a0:
    // 0x10b3a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10b3a4:
    // 0x10b3a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x10b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b3a8:
    // 0x10b3a8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x10b3a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_10b3ac:
    // 0x10b3ac: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x10b3acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_10b3b0:
    // 0x10b3b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b3b4:
    // 0x10b3b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10b3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_10b3b8:
    // 0x10b3b8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x10b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_10b3bc:
    // 0x10b3bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10b3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10b3c0:
    // 0x10b3c0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x10b3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_10b3c4:
    // 0x10b3c4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b3c8:
    // 0x10b3c8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b3cc:
    // 0x10b3cc: 0x320f809  jalr        $t9
label_10b3d0:
    if (ctx->pc == 0x10B3D0u) {
        ctx->pc = 0x10B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3CCu;
        // 0x10b3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B3D4u;
        goto label_10b3d4;
    }
    ctx->pc = 0x10B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B3D4u);
        ctx->pc = 0x10B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3CCu;
        // 0x10b3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B3CCu, 0x10B3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B3D4u;
label_10b3d4:
    // 0x10b3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b3d8:
    // 0x10b3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b3dc:
    // 0x10b3dc: 0xae032314  sw          $v1, 0x2314($s0)
    ctx->pc = 0x10b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 3));
label_10b3e0:
    // 0x10b3e0: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x10b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_10b3e4:
    // 0x10b3e4: 0xa20243f2  sb          $v0, 0x43F2($s0)
    ctx->pc = 0x10b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17394), (uint8_t)GPR_U32(ctx, 2));
label_10b3e8:
    // 0x10b3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10b3ecu;
}
