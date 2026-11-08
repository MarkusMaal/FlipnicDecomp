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

// Function: FUN_00151020
// Address: 0x151020 - 0x151278
void FUN_00151020_0x151020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151020_0x151020");
#endif

    switch (ctx->pc) {
        case 0x151128u: goto label_151128;
        case 0x151134u: goto label_151134;
        case 0x151140u: goto label_151140;
        case 0x15114cu: goto label_15114c;
        case 0x151158u: goto label_151158;
        case 0x151178u: goto label_151178;
        case 0x1511c8u: goto label_1511c8;
        case 0x1511e0u: goto label_1511e0;
        case 0x151238u: goto label_151238;
        default: break;
    }

    ctx->pc = 0x151020u;

    // 0x151020: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x151024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x151024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x151028: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15102c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x151030: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151034: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x151034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15103c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151048: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x151048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15104c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x15104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151050: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x151050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151054: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x151054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151058: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x151058u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15105c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x15105cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x151060: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x151060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x151064: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x151064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x151068: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x151068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15106c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x15106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151070: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x151070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x151074: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x151074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x151078: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x151078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15107c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x15107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151080: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x151080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151084: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x151084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151088: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x151088u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15108c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x15108cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x151090: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x151090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x151094: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x151094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x151098: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x151098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15109c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x15109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1510a0: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x1510a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1510a4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1510a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1510a8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1510ac: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1510acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1510b0: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x151254u;
            goto label_151254;
        }
    }
    ctx->pc = 0x1510B8u;
    // 0x1510b8: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x1510b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1510bc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1510bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1510c0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1510c4: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x1510c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x1510c8: 0x538023  subu        $s0, $v0, $s3
    ctx->pc = 0x1510c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1510cc: 0x0  nop
    ctx->pc = 0x1510ccu;
    // NOP
    // 0x1510d0: 0x8812  mflo        $s1
    ctx->pc = 0x1510d0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1510d4: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x1510d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x1510d8: 0x0  nop
    ctx->pc = 0x1510d8u;
    // NOP
    // 0x1510dc: 0x0  nop
    ctx->pc = 0x1510dcu;
    // NOP
    // 0x1510e0: 0x9810  mfhi        $s3
    ctx->pc = 0x1510e0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1510e4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1510e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1510e8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1510e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1510ec: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1510ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1510f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1510f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1510f4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1510f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1510f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1510F8u;
    {
        const bool branch_taken_0x1510f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510F8u;
        // 0x1510fc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510f8) {
            ctx->pc = 0x151104u;
            goto label_151104;
        }
    }
    ctx->pc = 0x151100u;
    // 0x151100: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x151100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_151104:
    // 0x151104: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x151104u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151108: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x151108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15110c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x15110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x151110: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x151110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x151114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151118: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x151118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15111c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15111cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151120: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x151120u;
    SET_GPR_U32(ctx, 31, 0x151128u);
    ctx->pc = 0x151124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151120u;
    // 0x151124: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x151120u, 0x151128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151128u;
label_151128:
    // 0x151128: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15112c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x15112Cu;
    SET_GPR_U32(ctx, 31, 0x151134u);
    ctx->pc = 0x151130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15112Cu;
    // 0x151130: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x15112Cu, 0x151134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151134u;
label_151134:
    // 0x151134: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x151134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x151138: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x151138u;
    SET_GPR_U32(ctx, 31, 0x151140u);
    ctx->pc = 0x15113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151138u;
    // 0x15113c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x151138u, 0x151140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151140u;
label_151140:
    // 0x151140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151144: 0xc050184  jal         func_140610
    ctx->pc = 0x151144u;
    SET_GPR_U32(ctx, 31, 0x15114Cu);
    ctx->pc = 0x151148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151144u;
    // 0x151148: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x151144u, 0x15114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15114Cu;
label_15114c:
    // 0x15114c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151150: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x151150u;
    SET_GPR_U32(ctx, 31, 0x151158u);
    ctx->pc = 0x151154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151150u;
    // 0x151154: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x151150u, 0x151158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151158u;
label_151158:
    // 0x151158: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x151158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15115c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x151160: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151164: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151168: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15116c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x151170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151170u;
    {
        const bool branch_taken_0x151170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151170u;
        // 0x151174: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151170) {
            ctx->pc = 0x15117Cu;
            goto label_15117c;
        }
    }
    ctx->pc = 0x151178u;
label_151178:
    // 0x151178: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x151178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_15117c:
    // 0x15117c: 0x0  nop
    ctx->pc = 0x15117cu;
    // NOP
    // 0x151180: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x151180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x151184: 0x0  nop
    ctx->pc = 0x151184u;
    // NOP
    // 0x151188: 0x0  nop
    ctx->pc = 0x151188u;
    // NOP
    // 0x15118c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15118Cu;
    {
        const bool branch_taken_0x15118c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15118c) {
            ctx->pc = 0x151178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151178;
        }
    }
    ctx->pc = 0x151194u;
    // 0x151194: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x151194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x151198: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x151198u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15119c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15119Cu;
    {
        const bool branch_taken_0x15119c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15119c) {
            ctx->pc = 0x151258u;
            goto label_151258;
        }
    }
    ctx->pc = 0x1511A4u;
    // 0x1511a4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1511a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1511a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1511ac: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1511acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1511b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1511b4: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x1511b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1511b8: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1511B8u;
    {
        const bool branch_taken_0x1511b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1511b8) {
            ctx->pc = 0x15120Cu;
            goto label_15120c;
        }
    }
    ctx->pc = 0x1511C0u;
    // 0x1511c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1511C0u;
    {
        const bool branch_taken_0x1511c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511C0u;
        // 0x1511c4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511c0) {
            ctx->pc = 0x15120Cu;
            goto label_15120c;
        }
    }
    ctx->pc = 0x1511C8u;
label_1511c8:
    // 0x1511c8: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1511c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1511cc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1511ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1511d0: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x1511d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1511d4: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x1511d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1511d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1511D8u;
    {
        const bool branch_taken_0x1511d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511d8) {
            ctx->pc = 0x1511F8u;
            goto label_1511f8;
        }
    }
    ctx->pc = 0x1511E0u;
label_1511e0:
    // 0x1511e0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1511e4: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x1511e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1511e8: 0x0  nop
    ctx->pc = 0x1511e8u;
    // NOP
    // 0x1511ec: 0x0  nop
    ctx->pc = 0x1511ecu;
    // NOP
    // 0x1511f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1511F0u;
    {
        const bool branch_taken_0x1511f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1511f0) {
            ctx->pc = 0x1511E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1511e0;
        }
    }
    ctx->pc = 0x1511F8u;
label_1511f8:
    // 0x1511f8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1511f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1511fc: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1511FCu;
    {
        const bool branch_taken_0x1511fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1511fc) {
            ctx->pc = 0x151208u;
            goto label_151208;
        }
    }
    ctx->pc = 0x151204u;
    // 0x151204: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x151204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_151208:
    // 0x151208: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x151208u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_15120c:
    // 0x15120c: 0x0  nop
    ctx->pc = 0x15120cu;
    // NOP
    // 0x151210: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151214: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x151214u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x151218: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151218u;
    {
        const bool branch_taken_0x151218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151218) {
            ctx->pc = 0x1511C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1511c8;
        }
    }
    ctx->pc = 0x151220u;
    // 0x151220: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x151220u;
    {
        const bool branch_taken_0x151220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151220) {
            ctx->pc = 0x151254u;
            goto label_151254;
        }
    }
    ctx->pc = 0x151228u;
    // 0x151228: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15122c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x151230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151230u;
    {
        const bool branch_taken_0x151230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151230u;
        // 0x151234: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151230) {
            ctx->pc = 0x15123Cu;
            goto label_15123c;
        }
    }
    ctx->pc = 0x151238u;
label_151238:
    // 0x151238: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_15123c:
    // 0x15123c: 0x0  nop
    ctx->pc = 0x15123cu;
    // NOP
    // 0x151240: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x151240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x151244: 0x0  nop
    ctx->pc = 0x151244u;
    // NOP
    // 0x151248: 0x0  nop
    ctx->pc = 0x151248u;
    // NOP
    // 0x15124c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15124Cu;
    {
        const bool branch_taken_0x15124c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15124c) {
            ctx->pc = 0x151238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151238;
        }
    }
    ctx->pc = 0x151254u;
label_151254:
    // 0x151254: 0x0  nop
    ctx->pc = 0x151254u;
    // NOP
label_151258:
    // 0x151258: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x151258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15125c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15125cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151260: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151264: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15126c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15126cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151270: 0x3e00008  jr          $ra
    ctx->pc = 0x151270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151270u;
        // 0x151274: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151278u;
}
