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

// Function: FUN_0017a2e0
// Address: 0x17a2e0 - 0x17a398
void FUN_0017a2e0_0x17a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a2e0_0x17a2e0");
#endif

    switch (ctx->pc) {
        case 0x17a2e0u: goto label_17a2e0;
        case 0x17a2e4u: goto label_17a2e4;
        case 0x17a2e8u: goto label_17a2e8;
        case 0x17a2ecu: goto label_17a2ec;
        case 0x17a2f0u: goto label_17a2f0;
        case 0x17a2f4u: goto label_17a2f4;
        case 0x17a2f8u: goto label_17a2f8;
        case 0x17a2fcu: goto label_17a2fc;
        case 0x17a300u: goto label_17a300;
        case 0x17a304u: goto label_17a304;
        case 0x17a308u: goto label_17a308;
        case 0x17a30cu: goto label_17a30c;
        case 0x17a310u: goto label_17a310;
        case 0x17a314u: goto label_17a314;
        case 0x17a318u: goto label_17a318;
        case 0x17a31cu: goto label_17a31c;
        case 0x17a320u: goto label_17a320;
        case 0x17a324u: goto label_17a324;
        case 0x17a328u: goto label_17a328;
        case 0x17a32cu: goto label_17a32c;
        case 0x17a330u: goto label_17a330;
        case 0x17a334u: goto label_17a334;
        case 0x17a338u: goto label_17a338;
        case 0x17a33cu: goto label_17a33c;
        case 0x17a340u: goto label_17a340;
        case 0x17a344u: goto label_17a344;
        case 0x17a348u: goto label_17a348;
        case 0x17a34cu: goto label_17a34c;
        case 0x17a350u: goto label_17a350;
        case 0x17a354u: goto label_17a354;
        case 0x17a358u: goto label_17a358;
        case 0x17a35cu: goto label_17a35c;
        case 0x17a360u: goto label_17a360;
        case 0x17a364u: goto label_17a364;
        case 0x17a368u: goto label_17a368;
        case 0x17a36cu: goto label_17a36c;
        case 0x17a370u: goto label_17a370;
        case 0x17a374u: goto label_17a374;
        case 0x17a378u: goto label_17a378;
        case 0x17a37cu: goto label_17a37c;
        case 0x17a380u: goto label_17a380;
        case 0x17a384u: goto label_17a384;
        case 0x17a388u: goto label_17a388;
        case 0x17a38cu: goto label_17a38c;
        case 0x17a390u: goto label_17a390;
        case 0x17a394u: goto label_17a394;
        default: break;
    }

    ctx->pc = 0x17a2e0u;

label_17a2e0:
    // 0x17a2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a2e4:
    // 0x17a2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a2e8:
    // 0x17a2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a2ec:
    // 0x17a2ec: 0xc0596a0  jal         func_165A80
label_17a2f0:
    if (ctx->pc == 0x17A2F0u) {
        ctx->pc = 0x17A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2ECu;
        // 0x17a2f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2F4u;
        goto label_17a2f4;
    }
    ctx->pc = 0x17A2ECu;
    SET_GPR_U32(ctx, 31, 0x17A2F4u);
    ctx->pc = 0x17A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2ECu;
    // 0x17a2f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x17A2ECu, 0x17A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2F4u;
label_17a2f4:
    // 0x17a2f4: 0xc046458  jal         func_119160
label_17a2f8:
    if (ctx->pc == 0x17A2F8u) {
        ctx->pc = 0x17A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2F4u;
        // 0x17a2f8: 0x8f8480c0  lw          $a0, -0x7F40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2FCu;
        goto label_17a2fc;
    }
    ctx->pc = 0x17A2F4u;
    SET_GPR_U32(ctx, 31, 0x17A2FCu);
    ctx->pc = 0x17A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2F4u;
    // 0x17a2f8: 0x8f8480c0  lw          $a0, -0x7F40($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17A2F4u, 0x17A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2FCu;
label_17a2fc:
    // 0x17a2fc: 0x8f8480c4  lw          $a0, -0x7F3C($gp)
    ctx->pc = 0x17a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
label_17a300:
    // 0x17a300: 0xc046458  jal         func_119160
label_17a304:
    if (ctx->pc == 0x17A304u) {
        ctx->pc = 0x17A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A300u;
        // 0x17a304: 0xaf828628  sw          $v0, -0x79D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A308u;
        goto label_17a308;
    }
    ctx->pc = 0x17A300u;
    SET_GPR_U32(ctx, 31, 0x17A308u);
    ctx->pc = 0x17A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A300u;
    // 0x17a304: 0xaf828628  sw          $v0, -0x79D8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17A300u, 0x17A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A308u;
label_17a308:
    // 0x17a308: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x17a308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_17a30c:
    // 0x17a30c: 0xc046458  jal         func_119160
label_17a310:
    if (ctx->pc == 0x17A310u) {
        ctx->pc = 0x17A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A30Cu;
        // 0x17a310: 0x8f8480c8  lw          $a0, -0x7F38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A314u;
        goto label_17a314;
    }
    ctx->pc = 0x17A30Cu;
    SET_GPR_U32(ctx, 31, 0x17A314u);
    ctx->pc = 0x17A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A30Cu;
    // 0x17a310: 0x8f8480c8  lw          $a0, -0x7F38($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17A30Cu, 0x17A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A314u;
label_17a314:
    // 0x17a314: 0xae020414  sw          $v0, 0x414($s0)
    ctx->pc = 0x17a314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 2));
label_17a318:
    // 0x17a318: 0xc046458  jal         func_119160
label_17a31c:
    if (ctx->pc == 0x17A31Cu) {
        ctx->pc = 0x17A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A318u;
        // 0x17a31c: 0x8f8480cc  lw          $a0, -0x7F34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A320u;
        goto label_17a320;
    }
    ctx->pc = 0x17A318u;
    SET_GPR_U32(ctx, 31, 0x17A320u);
    ctx->pc = 0x17A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A318u;
    // 0x17a31c: 0x8f8480cc  lw          $a0, -0x7F34($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17A318u, 0x17A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A320u;
label_17a320:
    // 0x17a320: 0xae020418  sw          $v0, 0x418($s0)
    ctx->pc = 0x17a320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
label_17a324:
    // 0x17a324: 0xc046458  jal         func_119160
label_17a328:
    if (ctx->pc == 0x17A328u) {
        ctx->pc = 0x17A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A324u;
        // 0x17a328: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A32Cu;
        goto label_17a32c;
    }
    ctx->pc = 0x17A324u;
    SET_GPR_U32(ctx, 31, 0x17A32Cu);
    ctx->pc = 0x17A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A324u;
    // 0x17a328: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17A324u, 0x17A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A32Cu;
label_17a32c:
    // 0x17a32c: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x17a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
label_17a330:
    // 0x17a330: 0x8f838628  lw          $v1, -0x79D8($gp)
    ctx->pc = 0x17a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_17a334:
    // 0x17a334: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a338:
    // 0x17a338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a33c:
    // 0x17a33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a340:
    // 0x17a340: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a344:
    // 0x17a344: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17a344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a348:
    // 0x17a348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17a348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17a34c:
    // 0x17a34c: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x17a34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_17a350:
    // 0x17a350: 0x320f809  jalr        $t9
label_17a354:
    if (ctx->pc == 0x17A354u) {
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0x26050400  addiu       $a1, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A358u;
        goto label_17a358;
    }
    ctx->pc = 0x17A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A358u);
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0x26050400  addiu       $a1, $s0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A350u, 0x17A358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A358u;
label_17a358:
    // 0x17a358: 0xc05ea58  jal         func_17A960
label_17a35c:
    if (ctx->pc == 0x17A35Cu) {
        ctx->pc = 0x17A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A358u;
        // 0x17a35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A360u;
        goto label_17a360;
    }
    ctx->pc = 0x17A358u;
    SET_GPR_U32(ctx, 31, 0x17A360u);
    ctx->pc = 0x17A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A358u;
    // 0x17a35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A960u, 0x17A358u, 0x17A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A360u;
label_17a360:
    // 0x17a360: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x17a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a364:
    // 0x17a364: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x17a364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_17a368:
    // 0x17a368: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a36c:
    // 0x17a36c: 0x0  nop
    ctx->pc = 0x17a36cu;
    // NOP
label_17a370:
    // 0x17a370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17a374:
    // 0x17a374: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17a374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17a378:
    // 0x17a378: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17a378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17a37c:
    // 0x17a37c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x17a37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_17a380:
    // 0x17a380: 0x0  nop
    ctx->pc = 0x17a380u;
    // NOP
label_17a384:
    // 0x17a384: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x17a384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
label_17a388:
    // 0x17a388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a38c:
    // 0x17a38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a390:
    // 0x17a390: 0x3e00008  jr          $ra
label_17a394:
    if (ctx->pc == 0x17A394u) {
        ctx->pc = 0x17A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A390u;
        // 0x17a394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A398u;
        goto label_fallthrough_0x17a390;
    }
    ctx->pc = 0x17A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A390u;
        // 0x17a394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a390:
    ctx->pc = 0x17A398u;
}
