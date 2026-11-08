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

// Function: FUN_0014b6f0
// Address: 0x14b6f0 - 0x14b948
void FUN_0014b6f0_0x14b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b6f0_0x14b6f0");
#endif

    switch (ctx->pc) {
        case 0x14b7f8u: goto label_14b7f8;
        case 0x14b804u: goto label_14b804;
        case 0x14b810u: goto label_14b810;
        case 0x14b81cu: goto label_14b81c;
        case 0x14b828u: goto label_14b828;
        case 0x14b848u: goto label_14b848;
        case 0x14b898u: goto label_14b898;
        case 0x14b8b0u: goto label_14b8b0;
        case 0x14b908u: goto label_14b908;
        default: break;
    }

    ctx->pc = 0x14b6f0u;

    // 0x14b6f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x14b6f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14b6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14b6f8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x14b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b6fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14b700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b704: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14b704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b70c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b718: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x14b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b71c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x14b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b720: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x14b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b724: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b728: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x14b728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14b72c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x14b72cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14b730: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x14b730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14b734: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14b738: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x14b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b73c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x14b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b740: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x14b740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14b744: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x14b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x14b748: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14b748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b74c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b750: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x14b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b754: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x14b754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b758: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x14b758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14b75c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14b75cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14b760: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x14b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14b764: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x14b764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x14b768: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x14b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b76c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x14b76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b770: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x14b770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x14b774: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x14b774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x14b778: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x14b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14b77c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x14b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x14b780: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x14B780u;
    {
        const bool branch_taken_0x14b780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b780) {
            ctx->pc = 0x14B924u;
            goto label_14b924;
        }
    }
    ctx->pc = 0x14B788u;
    // 0x14b788: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x14b78c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b790: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x14b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x14b794: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x14b794u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x14b798: 0x538023  subu        $s0, $v0, $s3
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14b79c: 0x0  nop
    ctx->pc = 0x14b79cu;
    // NOP
    // 0x14b7a0: 0x8812  mflo        $s1
    ctx->pc = 0x14b7a0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x14b7a4: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x14b7a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x14b7a8: 0x0  nop
    ctx->pc = 0x14b7a8u;
    // NOP
    // 0x14b7ac: 0x0  nop
    ctx->pc = 0x14b7acu;
    // NOP
    // 0x14b7b0: 0x9810  mfhi        $s3
    ctx->pc = 0x14b7b0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x14b7b4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x14b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x14b7b8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x14b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x14b7bc: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x14b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14b7c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b7c4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x14b7c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b7c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B7C8u;
    {
        const bool branch_taken_0x14b7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7C8u;
        // 0x14b7cc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7c8) {
            ctx->pc = 0x14B7D4u;
            goto label_14b7d4;
        }
    }
    ctx->pc = 0x14B7D0u;
    // 0x14b7d0: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_14b7d4:
    // 0x14b7d4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b7d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14b7dc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x14b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b7e0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x14b7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7e8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14b7ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b7f0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B7F0u;
    SET_GPR_U32(ctx, 31, 0x14B7F8u);
    ctx->pc = 0x14B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7F0u;
    // 0x14b7f4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B7F0u, 0x14B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7F8u;
label_14b7f8:
    // 0x14b7f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14b7fc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B7FCu;
    SET_GPR_U32(ctx, 31, 0x14B804u);
    ctx->pc = 0x14B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7FCu;
    // 0x14b800: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B7FCu, 0x14B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B804u;
label_14b804:
    // 0x14b804: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14b804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14b808: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B808u;
    SET_GPR_U32(ctx, 31, 0x14B810u);
    ctx->pc = 0x14B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B808u;
    // 0x14b80c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B808u, 0x14B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B810u;
label_14b810:
    // 0x14b810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b814: 0xc050184  jal         func_140610
    ctx->pc = 0x14B814u;
    SET_GPR_U32(ctx, 31, 0x14B81Cu);
    ctx->pc = 0x14B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B814u;
    // 0x14b818: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14B814u, 0x14B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B81Cu;
label_14b81c:
    // 0x14b81c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14b820: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B820u;
    SET_GPR_U32(ctx, 31, 0x14B828u);
    ctx->pc = 0x14B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B820u;
    // 0x14b824: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B820u, 0x14B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B828u;
label_14b828:
    // 0x14b828: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14b82c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x14b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x14b830: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14b834: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14b834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14b838: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14b838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b83c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x14b83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14b840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B840u;
    {
        const bool branch_taken_0x14b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B840u;
        // 0x14b844: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b840) {
            ctx->pc = 0x14B84Cu;
            goto label_14b84c;
        }
    }
    ctx->pc = 0x14B848u;
label_14b848:
    // 0x14b848: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14b848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_14b84c:
    // 0x14b84c: 0x0  nop
    ctx->pc = 0x14b84cu;
    // NOP
    // 0x14b850: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x14b850u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b854: 0x0  nop
    ctx->pc = 0x14b854u;
    // NOP
    // 0x14b858: 0x0  nop
    ctx->pc = 0x14b858u;
    // NOP
    // 0x14b85c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B85Cu;
    {
        const bool branch_taken_0x14b85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b85c) {
            ctx->pc = 0x14B848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b848;
        }
    }
    ctx->pc = 0x14B864u;
    // 0x14b864: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x14b864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x14b868: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14b868u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14b86c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14B86Cu;
    {
        const bool branch_taken_0x14b86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b86c) {
            ctx->pc = 0x14B928u;
            goto label_14b928;
        }
    }
    ctx->pc = 0x14B874u;
    // 0x14b874: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14b878: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14b878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14b87c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14b880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b884: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x14b884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b888: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x14B888u;
    {
        const bool branch_taken_0x14b888 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x14b888) {
            ctx->pc = 0x14B8DCu;
            goto label_14b8dc;
        }
    }
    ctx->pc = 0x14B890u;
    // 0x14b890: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14B890u;
    {
        const bool branch_taken_0x14b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B890u;
        // 0x14b894: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b890) {
            ctx->pc = 0x14B8DCu;
            goto label_14b8dc;
        }
    }
    ctx->pc = 0x14B898u;
label_14b898:
    // 0x14b898: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x14b898u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b89c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x14b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14b8a0: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x14b8a4: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x14b8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b8a8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B8A8u;
    {
        const bool branch_taken_0x14b8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8a8) {
            ctx->pc = 0x14B8C8u;
            goto label_14b8c8;
        }
    }
    ctx->pc = 0x14B8B0u;
label_14b8b0:
    // 0x14b8b0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x14b8b4: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x14b8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b8b8: 0x0  nop
    ctx->pc = 0x14b8b8u;
    // NOP
    // 0x14b8bc: 0x0  nop
    ctx->pc = 0x14b8bcu;
    // NOP
    // 0x14b8c0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B8C0u;
    {
        const bool branch_taken_0x14b8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b8c0) {
            ctx->pc = 0x14B8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b8b0;
        }
    }
    ctx->pc = 0x14B8C8u;
label_14b8c8:
    // 0x14b8c8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14b8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14b8cc: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B8CCu;
    {
        const bool branch_taken_0x14b8cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x14b8cc) {
            ctx->pc = 0x14B8D8u;
            goto label_14b8d8;
        }
    }
    ctx->pc = 0x14B8D4u;
    // 0x14b8d4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14b8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14b8d8:
    // 0x14b8d8: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x14b8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_14b8dc:
    // 0x14b8dc: 0x0  nop
    ctx->pc = 0x14b8dcu;
    // NOP
    // 0x14b8e0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14b8e4: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x14b8e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14b8e8: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14B8E8u;
    {
        const bool branch_taken_0x14b8e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8e8) {
            ctx->pc = 0x14B898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b898;
        }
    }
    ctx->pc = 0x14B8F0u;
    // 0x14b8f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B8F0u;
    {
        const bool branch_taken_0x14b8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8f0) {
            ctx->pc = 0x14B924u;
            goto label_14b924;
        }
    }
    ctx->pc = 0x14B8F8u;
    // 0x14b8f8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b8fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14b900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B900u;
    {
        const bool branch_taken_0x14b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B900u;
        // 0x14b904: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b900) {
            ctx->pc = 0x14B90Cu;
            goto label_14b90c;
        }
    }
    ctx->pc = 0x14B908u;
label_14b908:
    // 0x14b908: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14b908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_14b90c:
    // 0x14b90c: 0x0  nop
    ctx->pc = 0x14b90cu;
    // NOP
    // 0x14b910: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x14b910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b914: 0x0  nop
    ctx->pc = 0x14b914u;
    // NOP
    // 0x14b918: 0x0  nop
    ctx->pc = 0x14b918u;
    // NOP
    // 0x14b91c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14B91Cu;
    {
        const bool branch_taken_0x14b91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b91c) {
            ctx->pc = 0x14B908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b908;
        }
    }
    ctx->pc = 0x14B924u;
label_14b924:
    // 0x14b924: 0x0  nop
    ctx->pc = 0x14b924u;
    // NOP
label_14b928:
    // 0x14b928: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b92c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b92cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b940: 0x3e00008  jr          $ra
    ctx->pc = 0x14B940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B940u;
        // 0x14b944: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B948u;
}
