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

// Function: FUN_001403b0
// Address: 0x1403b0 - 0x140608
void FUN_001403b0_0x1403b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001403b0_0x1403b0");
#endif

    switch (ctx->pc) {
        case 0x1404b8u: goto label_1404b8;
        case 0x1404c4u: goto label_1404c4;
        case 0x1404d0u: goto label_1404d0;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404e8u: goto label_1404e8;
        case 0x140508u: goto label_140508;
        case 0x140558u: goto label_140558;
        case 0x140570u: goto label_140570;
        case 0x1405c8u: goto label_1405c8;
        default: break;
    }

    ctx->pc = 0x1403b0u;

    // 0x1403b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1403b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1403b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1403b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1403b8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1403b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1403bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1403bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1403c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1403c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1403c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1403c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1403c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1403cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1403ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1403d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1403d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1403d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1403d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1403d8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1403d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1403dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1403dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1403e0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1403e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403e4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1403e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403e8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1403e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1403ec: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1403ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1403f0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1403f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1403f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1403f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1403f8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1403f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403fc: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1403fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140400: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x140400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x140404: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x140404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x140408: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x140408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14040c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140410: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x140410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140414: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x140414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140418: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x140418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14041c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14041cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x140420: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x140420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x140424: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x140424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x140428: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x140428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14042c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x14042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140430: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x140430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x140434: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x140434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x140438: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x140438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14043c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x14043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x140440: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x140440u;
    {
        const bool branch_taken_0x140440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x140440) {
            ctx->pc = 0x1405E4u;
            goto label_1405e4;
        }
    }
    ctx->pc = 0x140448u;
    // 0x140448: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x140448u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x14044c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x140450: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x140450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x140454: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x140454u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x140458: 0x538023  subu        $s0, $v0, $s3
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14045c: 0x0  nop
    ctx->pc = 0x14045cu;
    // NOP
    // 0x140460: 0x8812  mflo        $s1
    ctx->pc = 0x140460u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x140464: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x140464u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x140468: 0x0  nop
    ctx->pc = 0x140468u;
    // NOP
    // 0x14046c: 0x0  nop
    ctx->pc = 0x14046cu;
    // NOP
    // 0x140470: 0x9810  mfhi        $s3
    ctx->pc = 0x140470u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x140474: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x140478: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x140478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x14047c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x140480: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x140480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x140484: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x140484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x140488: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x140488u;
    {
        const bool branch_taken_0x140488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140488u;
        // 0x14048c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140488) {
            ctx->pc = 0x140494u;
            goto label_140494;
        }
    }
    ctx->pc = 0x140490u;
    // 0x140490: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_140494:
    // 0x140494: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140498: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x140498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14049c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1404a0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1404a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1404a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1404a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404a8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1404ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1404b0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1404B0u;
    SET_GPR_U32(ctx, 31, 0x1404B8u);
    ctx->pc = 0x1404B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404B0u;
    // 0x1404b4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1404B0u, 0x1404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1404bc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1404BCu;
    SET_GPR_U32(ctx, 31, 0x1404C4u);
    ctx->pc = 0x1404C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404BCu;
    // 0x1404c0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1404BCu, 0x1404C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404C4u;
label_1404c4:
    // 0x1404c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1404c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1404c8: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1404C8u;
    SET_GPR_U32(ctx, 31, 0x1404D0u);
    ctx->pc = 0x1404CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404C8u;
    // 0x1404cc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1404C8u, 0x1404D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404D0u;
label_1404d0:
    // 0x1404d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1404d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404d4: 0xc050184  jal         func_140610
    ctx->pc = 0x1404D4u;
    SET_GPR_U32(ctx, 31, 0x1404DCu);
    ctx->pc = 0x1404D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D4u;
    // 0x1404d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1404D4u, 0x1404DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404DCu;
label_1404dc:
    // 0x1404dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1404dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1404e0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1404E0u;
    SET_GPR_U32(ctx, 31, 0x1404E8u);
    ctx->pc = 0x1404E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404E0u;
    // 0x1404e4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1404E0u, 0x1404E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404E8u;
label_1404e8:
    // 0x1404e8: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x1404e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1404ec: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1404ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1404f0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1404f4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1404f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1404f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1404fc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1404fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x140500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140500u;
    {
        const bool branch_taken_0x140500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140500u;
        // 0x140504: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140500) {
            ctx->pc = 0x14050Cu;
            goto label_14050c;
        }
    }
    ctx->pc = 0x140508u;
label_140508:
    // 0x140508: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x140508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_14050c:
    // 0x14050c: 0x0  nop
    ctx->pc = 0x14050cu;
    // NOP
    // 0x140510: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x140510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140514: 0x0  nop
    ctx->pc = 0x140514u;
    // NOP
    // 0x140518: 0x0  nop
    ctx->pc = 0x140518u;
    // NOP
    // 0x14051c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14051Cu;
    {
        const bool branch_taken_0x14051c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14051c) {
            ctx->pc = 0x140508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140508;
        }
    }
    ctx->pc = 0x140524u;
    // 0x140524: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x140528: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x140528u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14052c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14052Cu;
    {
        const bool branch_taken_0x14052c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14052c) {
            ctx->pc = 0x1405E8u;
            goto label_1405e8;
        }
    }
    ctx->pc = 0x140534u;
    // 0x140534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x140534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140538: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14053c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x14053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x140540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140544: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x140544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x140548: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x140548u;
    {
        const bool branch_taken_0x140548 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x140548) {
            ctx->pc = 0x14059Cu;
            goto label_14059c;
        }
    }
    ctx->pc = 0x140550u;
    // 0x140550: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x140550u;
    {
        const bool branch_taken_0x140550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140550u;
        // 0x140554: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140550) {
            ctx->pc = 0x14059Cu;
            goto label_14059c;
        }
    }
    ctx->pc = 0x140558u;
label_140558:
    // 0x140558: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x140558u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14055c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x14055cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140560: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x140560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x140564: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x140564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140568: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x140568u;
    {
        const bool branch_taken_0x140568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140568) {
            ctx->pc = 0x140588u;
            goto label_140588;
        }
    }
    ctx->pc = 0x140570u;
label_140570:
    // 0x140570: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x140570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x140574: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x140574u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140578: 0x0  nop
    ctx->pc = 0x140578u;
    // NOP
    // 0x14057c: 0x0  nop
    ctx->pc = 0x14057cu;
    // NOP
    // 0x140580: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x140580u;
    {
        const bool branch_taken_0x140580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140580) {
            ctx->pc = 0x140570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140570;
        }
    }
    ctx->pc = 0x140588u;
label_140588:
    // 0x140588: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x140588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14058c: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x14058Cu;
    {
        const bool branch_taken_0x14058c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x14058c) {
            ctx->pc = 0x140598u;
            goto label_140598;
        }
    }
    ctx->pc = 0x140594u;
    // 0x140594: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x140594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140598:
    // 0x140598: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x140598u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_14059c:
    // 0x14059c: 0x0  nop
    ctx->pc = 0x14059cu;
    // NOP
    // 0x1405a0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1405a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1405a4: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x1405a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1405a8: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1405A8u;
    {
        const bool branch_taken_0x1405a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405a8) {
            ctx->pc = 0x140558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140558;
        }
    }
    ctx->pc = 0x1405B0u;
    // 0x1405b0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1405B0u;
    {
        const bool branch_taken_0x1405b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405b0) {
            ctx->pc = 0x1405E4u;
            goto label_1405e4;
        }
    }
    ctx->pc = 0x1405B8u;
    // 0x1405b8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1405b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1405bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1405c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1405C0u;
    {
        const bool branch_taken_0x1405c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C0u;
        // 0x1405c4: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405c0) {
            ctx->pc = 0x1405CCu;
            goto label_1405cc;
        }
    }
    ctx->pc = 0x1405C8u;
label_1405c8:
    // 0x1405c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1405c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1405cc:
    // 0x1405cc: 0x0  nop
    ctx->pc = 0x1405ccu;
    // NOP
    // 0x1405d0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1405d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1405d4: 0x0  nop
    ctx->pc = 0x1405d4u;
    // NOP
    // 0x1405d8: 0x0  nop
    ctx->pc = 0x1405d8u;
    // NOP
    // 0x1405dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1405DCu;
    {
        const bool branch_taken_0x1405dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1405dc) {
            ctx->pc = 0x1405C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1405c8;
        }
    }
    ctx->pc = 0x1405E4u;
label_1405e4:
    // 0x1405e4: 0x0  nop
    ctx->pc = 0x1405e4u;
    // NOP
label_1405e8:
    // 0x1405e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1405e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1405ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1405ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1405f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1405f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1405f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1405f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1405f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1405f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1405fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1405fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140600: 0x3e00008  jr          $ra
    ctx->pc = 0x140600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140600u;
        // 0x140604: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140608u;
}
