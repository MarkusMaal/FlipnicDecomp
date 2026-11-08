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

// Function: FUN_0016d5d0
// Address: 0x16d5d0 - 0x16d7e4
void FUN_0016d5d0_0x16d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d5d0_0x16d5d0");
#endif

    switch (ctx->pc) {
        case 0x16d604u: goto label_16d604;
        case 0x16d62cu: goto label_16d62c;
        case 0x16d664u: goto label_16d664;
        case 0x16d674u: goto label_16d674;
        case 0x16d68cu: goto label_16d68c;
        case 0x16d698u: goto label_16d698;
        case 0x16d6ecu: goto label_16d6ec;
        case 0x16d724u: goto label_16d724;
        case 0x16d738u: goto label_16d738;
        case 0x16d750u: goto label_16d750;
        case 0x16d784u: goto label_16d784;
        case 0x16d798u: goto label_16d798;
        case 0x16d7c4u: goto label_16d7c4;
        default: break;
    }

    ctx->pc = 0x16d5d0u;

    // 0x16d5d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16d5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d5d8: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x16d5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16d5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d5e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5e8: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x16d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16d5ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16d5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5f0: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16d5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16d5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5f8: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x16d5fc: 0xc055038  jal         func_1540E0
    ctx->pc = 0x16D5FCu;
    SET_GPR_U32(ctx, 31, 0x16D604u);
    ctx->pc = 0x16D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5FCu;
    // 0x16d600: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16D5FCu, 0x16D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D604u;
label_16d604:
    // 0x16d604: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16d604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d608: 0x0  nop
    ctx->pc = 0x16d608u;
    // NOP
    // 0x16d60c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16d60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d610: 0x0  nop
    ctx->pc = 0x16d610u;
    // NOP
    // 0x16d614: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x16D614u;
    {
        const bool branch_taken_0x16d614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d614) {
            ctx->pc = 0x16D6A0u;
            goto label_16d6a0;
        }
    }
    ctx->pc = 0x16D61Cu;
    // 0x16d61c: 0xe6010284  swc1        $f1, 0x284($s0)
    ctx->pc = 0x16d61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x16d620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d624: 0xc055c40  jal         func_157100
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D624u;
    // 0x16d628: 0xe6010280  swc1        $f1, 0x280($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16D624u, 0x16D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D62Cu;
label_16d62c:
    // 0x16d62c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d630: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x16d630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x16d634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d638: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16d638u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d63c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16d63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16d640: 0x0  nop
    ctx->pc = 0x16d640u;
    // NOP
    // 0x16d644: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16d644u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16d648: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16d648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16d64c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16d64cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16d650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d654: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d658: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x16d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16d65c: 0xc056194  jal         func_158650
    ctx->pc = 0x16D65Cu;
    SET_GPR_U32(ctx, 31, 0x16D664u);
    ctx->pc = 0x16D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D65Cu;
    // 0x16d660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16D65Cu, 0x16D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D664u;
label_16d664:
    // 0x16d664: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16d668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d66c: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x16D66Cu;
    SET_GPR_U32(ctx, 31, 0x16D674u);
    ctx->pc = 0x16D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D66Cu;
    // 0x16d670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16D66Cu, 0x16D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D674u;
label_16d674:
    // 0x16d674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d678: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d67c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d680: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x16d680u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x16d684: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D684u;
    SET_GPR_U32(ctx, 31, 0x16D68Cu);
    ctx->pc = 0x16D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D684u;
    // 0x16d688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D684u, 0x16D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D68Cu;
label_16d68c:
    // 0x16d68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d690: 0xc042118  jal         func_108460
    ctx->pc = 0x16D690u;
    SET_GPR_U32(ctx, 31, 0x16D698u);
    ctx->pc = 0x16D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D690u;
    // 0x16d694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D690u, 0x16D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D698u;
label_16d698:
    // 0x16d698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D698u;
    {
        const bool branch_taken_0x16d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D698u;
        // 0x16d69c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d698) {
            ctx->pc = 0x16D6A4u;
            goto label_16d6a4;
        }
    }
    ctx->pc = 0x16D6A0u;
label_16d6a0:
    // 0x16d6a0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x16d6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d6a4:
    // 0x16d6a4: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x16d6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16d6a8: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x16D6A8u;
    {
        const bool branch_taken_0x16d6a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6A8u;
        // 0x16d6ac: 0x2a010000  slti        $at, $s0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6a8) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D6B0u;
    // 0x16d6b0: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d6b8: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16D6B8u;
    {
        const bool branch_taken_0x16d6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d6b8) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D6C0u;
    // 0x16d6c0: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x16d6c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16d6c8: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x16d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    // 0x16d6cc: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x16d6d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16D6D0u;
    {
        const bool branch_taken_0x16d6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6D0u;
        // 0x16d6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6d0) {
            ctx->pc = 0x16D748u;
            goto label_16d748;
        }
    }
    ctx->pc = 0x16D6D8u;
    // 0x16d6d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d6dc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16d6e0: 0x2484f440  addiu       $a0, $a0, -0xBC0
    ctx->pc = 0x16d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964288));
    // 0x16d6e4: 0xc046458  jal         func_119160
    ctx->pc = 0x16D6E4u;
    SET_GPR_U32(ctx, 31, 0x16D6ECu);
    ctx->pc = 0x16D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6E4u;
    // 0x16d6e8: 0xae2201d4  sw          $v0, 0x1D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x16D6E4u, 0x16D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6ECu;
label_16d6ec:
    // 0x16d6ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16d6f0: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x16d6f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16d6f4: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x16d6f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x16d6f8: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x16d6f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x16d6fc: 0x7a290060  lq          $t1, 0x60($s1)
    ctx->pc = 0x16d6fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x16d700: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x16d700u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x16d704: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x16d704u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x16d708: 0x7ca80020  sq          $t0, 0x20($a1)
    ctx->pc = 0x16d708u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x16d70c: 0x7ca90030  sq          $t1, 0x30($a1)
    ctx->pc = 0x16d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 9));
    // 0x16d710: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x16d710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d714: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16d718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d71c: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x16D71Cu;
    SET_GPR_U32(ctx, 31, 0x16D724u);
    ctx->pc = 0x16D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D71Cu;
    // 0x16d720: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x16D71Cu, 0x16D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D724u;
label_16d724:
    // 0x16d724: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d72c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d730: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D730u;
    SET_GPR_U32(ctx, 31, 0x16D738u);
    ctx->pc = 0x16D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D730u;
    // 0x16d734: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D730u, 0x16D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D738u;
label_16d738:
    // 0x16d738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d740: 0xa062002b  sb          $v0, 0x2B($v1)
    ctx->pc = 0x16d740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d748:
    // 0x16d748: 0xc042118  jal         func_108460
    ctx->pc = 0x16D748u;
    SET_GPR_U32(ctx, 31, 0x16D750u);
    ctx->pc = 0x16D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D748u;
    // 0x16d74c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D748u, 0x16D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D750u;
label_16d750:
    // 0x16d750: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16D750u;
    {
        const bool branch_taken_0x16d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D750u;
        // 0x16d754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d750) {
            ctx->pc = 0x16D7D0u;
            goto label_16d7d0;
        }
    }
    ctx->pc = 0x16D758u;
label_16d758:
    // 0x16d758: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D758u;
    {
        const bool branch_taken_0x16d758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d758) {
            ctx->pc = 0x16D7A0u;
            goto label_16d7a0;
        }
    }
    ctx->pc = 0x16D760u;
    // 0x16d760: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d768: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D768u;
    {
        const bool branch_taken_0x16d768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D768u;
        // 0x16d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d768) {
            ctx->pc = 0x16D77Cu;
            goto label_16d77c;
        }
    }
    ctx->pc = 0x16D770u;
    // 0x16d770: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d774: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D774u;
    {
        const bool branch_taken_0x16d774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D774u;
        // 0x16d778: 0x2a010000  slti        $at, $s0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d774) {
            ctx->pc = 0x16D7A4u;
            goto label_16d7a4;
        }
    }
    ctx->pc = 0x16D77Cu;
label_16d77c:
    // 0x16d77c: 0xc042118  jal         func_108460
    ctx->pc = 0x16D77Cu;
    SET_GPR_U32(ctx, 31, 0x16D784u);
    ctx->pc = 0x16D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D77Cu;
    // 0x16d780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D77Cu, 0x16D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D784u;
label_16d784:
    // 0x16d784: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d78c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d790: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D790u;
    SET_GPR_U32(ctx, 31, 0x16D798u);
    ctx->pc = 0x16D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D790u;
    // 0x16d794: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D790u, 0x16D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D798u;
label_16d798:
    // 0x16d798: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16D798u;
    {
        const bool branch_taken_0x16d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D798u;
        // 0x16d79c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d798) {
            ctx->pc = 0x16D7D0u;
            goto label_16d7d0;
        }
    }
    ctx->pc = 0x16D7A0u;
label_16d7a0:
    // 0x16d7a0: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x16d7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_16d7a4:
    // 0x16d7a4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D7A4u;
    {
        const bool branch_taken_0x16d7a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d7a4) {
            ctx->pc = 0x16D7CCu;
            goto label_16d7cc;
        }
    }
    ctx->pc = 0x16D7ACu;
    // 0x16d7ac: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d7b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d7b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D7B4u;
    {
        const bool branch_taken_0x16d7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7B4u;
        // 0x16d7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7b4) {
            ctx->pc = 0x16D7CCu;
            goto label_16d7cc;
        }
    }
    ctx->pc = 0x16D7BCu;
    // 0x16d7bc: 0xc042118  jal         func_108460
    ctx->pc = 0x16D7BCu;
    SET_GPR_U32(ctx, 31, 0x16D7C4u);
    ctx->pc = 0x16D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7BCu;
    // 0x16d7c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D7BCu, 0x16D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7C4u;
label_16d7c4:
    // 0x16d7c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D7C4u;
    {
        const bool branch_taken_0x16d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7C4u;
        // 0x16d7c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7c4) {
            ctx->pc = 0x16D7D0u;
            goto label_16d7d0;
        }
    }
    ctx->pc = 0x16D7CCu;
label_16d7cc:
    // 0x16d7cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16d7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d7d0:
    // 0x16d7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x16D7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7DCu;
        // 0x16d7e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D7E4u;
}
