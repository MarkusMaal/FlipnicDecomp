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

// Function: FUN_001bde80
// Address: 0x1bde80 - 0x1be0d8
void FUN_001bde80_0x1bde80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bde80_0x1bde80");
#endif

    switch (ctx->pc) {
        case 0x1bdf88u: goto label_1bdf88;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdfd8u: goto label_1bdfd8;
        case 0x1be028u: goto label_1be028;
        case 0x1be040u: goto label_1be040;
        case 0x1be098u: goto label_1be098;
        default: break;
    }

    ctx->pc = 0x1bde80u;

    // 0x1bde80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1bde84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bde84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bde88: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1bde88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bde8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bde8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bde90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bde90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bde94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bde94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bde98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bde9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bdea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bdea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bdea8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1bdea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bdeac: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1bdeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bdeb0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1bdeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdeb4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1bdeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdeb8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1bdeb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1bdebc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1bdebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdec0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdec4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1bdec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1bdec8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1bdec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdecc: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1bdeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bded0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x1bded0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1bded4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1bded4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1bded8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1bded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bdedc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1bdedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bdee0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1bdee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdee4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1bdee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdee8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1bdee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1bdeec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1bdeecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1bdef0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1bdef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1bdef4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1bdef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1bdef8: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1bdef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdefc: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1bdefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdf00: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x1bdf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1bdf04: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1bdf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1bdf08: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1bdf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1bdf0c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bdf10: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1BDF10u;
    {
        const bool branch_taken_0x1bdf10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf10) {
            ctx->pc = 0x1BE0B4u;
            goto label_1be0b4;
        }
    }
    ctx->pc = 0x1BDF18u;
    // 0x1bdf18: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x1bdf18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1bdf1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bdf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdf20: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1bdf24: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x1bdf24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x1bdf28: 0x538023  subu        $s0, $v0, $s3
    ctx->pc = 0x1bdf28u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1bdf2c: 0x0  nop
    ctx->pc = 0x1bdf2cu;
    // NOP
    // 0x1bdf30: 0x8812  mflo        $s1
    ctx->pc = 0x1bdf30u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1bdf34: 0x263001b  divu        $zero, $s3, $v1
    ctx->pc = 0x1bdf34u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
    // 0x1bdf38: 0x0  nop
    ctx->pc = 0x1bdf38u;
    // NOP
    // 0x1bdf3c: 0x0  nop
    ctx->pc = 0x1bdf3cu;
    // NOP
    // 0x1bdf40: 0x9810  mfhi        $s3
    ctx->pc = 0x1bdf40u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1bdf44: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bdf48: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1bdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1bdf4c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1bdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1bdf50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdf54: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1bdf54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bdf58: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDF58u;
    {
        const bool branch_taken_0x1bdf58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF58u;
        // 0x1bdf5c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf58) {
            ctx->pc = 0x1BDF64u;
            goto label_1bdf64;
        }
    }
    ctx->pc = 0x1BDF60u;
    // 0x1bdf60: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_1bdf64:
    // 0x1bdf64: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdf68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1bdf6c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bdf70: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1bdf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bdf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf78: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bdf7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdf80: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BDF80u;
    SET_GPR_U32(ctx, 31, 0x1BDF88u);
    ctx->pc = 0x1BDF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF80u;
    // 0x1bdf84: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BDF80u, 0x1BDF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF88u;
label_1bdf88:
    // 0x1bdf88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bdf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bdf8c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF94u);
    ctx->pc = 0x1BDF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF8Cu;
    // 0x1bdf90: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDF8Cu, 0x1BDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF94u;
label_1bdf94:
    // 0x1bdf94: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bdf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bdf98: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDF98u;
    SET_GPR_U32(ctx, 31, 0x1BDFA0u);
    ctx->pc = 0x1BDF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF98u;
    // 0x1bdf9c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDF98u, 0x1BDFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFA0u;
label_1bdfa0:
    // 0x1bdfa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfa4: 0xc050184  jal         func_140610
    ctx->pc = 0x1BDFA4u;
    SET_GPR_U32(ctx, 31, 0x1BDFACu);
    ctx->pc = 0x1BDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFA4u;
    // 0x1bdfa8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1BDFA4u, 0x1BDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFACu;
label_1bdfac:
    // 0x1bdfac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdfb0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1BDFB0u;
    SET_GPR_U32(ctx, 31, 0x1BDFB8u);
    ctx->pc = 0x1BDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFB0u;
    // 0x1bdfb4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1BDFB0u, 0x1BDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB8u;
label_1bdfb8:
    // 0x1bdfb8: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1bdfbc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1bdfc0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bdfc4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bdfc8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1bdfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bdfcc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bdfd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDFD0u;
    {
        const bool branch_taken_0x1bdfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFD0u;
        // 0x1bdfd4: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfd0) {
            ctx->pc = 0x1BDFDCu;
            goto label_1bdfdc;
        }
    }
    ctx->pc = 0x1BDFD8u;
label_1bdfd8:
    // 0x1bdfd8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1bdfdc:
    // 0x1bdfdc: 0x0  nop
    ctx->pc = 0x1bdfdcu;
    // NOP
    // 0x1bdfe0: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x1bdfe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdfe4: 0x0  nop
    ctx->pc = 0x1bdfe4u;
    // NOP
    // 0x1bdfe8: 0x0  nop
    ctx->pc = 0x1bdfe8u;
    // NOP
    // 0x1bdfec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BDFECu;
    {
        const bool branch_taken_0x1bdfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdfec) {
            ctx->pc = 0x1BDFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdfd8;
        }
    }
    ctx->pc = 0x1BDFF4u;
    // 0x1bdff4: 0x2531823  subu        $v1, $s2, $s3
    ctx->pc = 0x1bdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1bdff8: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1bdff8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1bdffc: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BDFFCu;
    {
        const bool branch_taken_0x1bdffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdffc) {
            ctx->pc = 0x1BE0B8u;
            goto label_1be0b8;
        }
    }
    ctx->pc = 0x1BE004u;
    // 0x1be004: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1be008: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1be00c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1be010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be014: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1be018: 0x15070014  bne         $t0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE018u;
    {
        const bool branch_taken_0x1be018 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1be018) {
            ctx->pc = 0x1BE06Cu;
            goto label_1be06c;
        }
    }
    ctx->pc = 0x1BE020u;
    // 0x1be020: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE020u;
    {
        const bool branch_taken_0x1be020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE020u;
        // 0x1be024: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be020) {
            ctx->pc = 0x1BE06Cu;
            goto label_1be06c;
        }
    }
    ctx->pc = 0x1BE028u;
label_1be028:
    // 0x1be028: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1be02c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1be030: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1be034: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x1be034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1be038: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE038u;
    {
        const bool branch_taken_0x1be038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be038) {
            ctx->pc = 0x1BE058u;
            goto label_1be058;
        }
    }
    ctx->pc = 0x1BE040u;
label_1be040:
    // 0x1be040: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1be040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1be044: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x1be044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1be048: 0x0  nop
    ctx->pc = 0x1be048u;
    // NOP
    // 0x1be04c: 0x0  nop
    ctx->pc = 0x1be04cu;
    // NOP
    // 0x1be050: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE050u;
    {
        const bool branch_taken_0x1be050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be050) {
            ctx->pc = 0x1BE040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be040;
        }
    }
    ctx->pc = 0x1BE058u;
label_1be058:
    // 0x1be058: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1be058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1be05c: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE05Cu;
    {
        const bool branch_taken_0x1be05c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1be05c) {
            ctx->pc = 0x1BE068u;
            goto label_1be068;
        }
    }
    ctx->pc = 0x1BE064u;
    // 0x1be064: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1be064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be068:
    // 0x1be068: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1be06c:
    // 0x1be06c: 0x0  nop
    ctx->pc = 0x1be06cu;
    // NOP
    // 0x1be070: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1be070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1be074: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x1be074u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1be078: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BE078u;
    {
        const bool branch_taken_0x1be078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be078) {
            ctx->pc = 0x1BE028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be028;
        }
    }
    ctx->pc = 0x1BE080u;
    // 0x1be080: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE080u;
    {
        const bool branch_taken_0x1be080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be080) {
            ctx->pc = 0x1BE0B4u;
            goto label_1be0b4;
        }
    }
    ctx->pc = 0x1BE088u;
    // 0x1be088: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1be08c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1be090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE090u;
    {
        const bool branch_taken_0x1be090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE090u;
        // 0x1be094: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be090) {
            ctx->pc = 0x1BE09Cu;
            goto label_1be09c;
        }
    }
    ctx->pc = 0x1BE098u;
label_1be098:
    // 0x1be098: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1be098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1be09c:
    // 0x1be09c: 0x0  nop
    ctx->pc = 0x1be09cu;
    // NOP
    // 0x1be0a0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1be0a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1be0a4: 0x0  nop
    ctx->pc = 0x1be0a4u;
    // NOP
    // 0x1be0a8: 0x0  nop
    ctx->pc = 0x1be0a8u;
    // NOP
    // 0x1be0ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BE0ACu;
    {
        const bool branch_taken_0x1be0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be0ac) {
            ctx->pc = 0x1BE098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be098;
        }
    }
    ctx->pc = 0x1BE0B4u;
label_1be0b4:
    // 0x1be0b4: 0x0  nop
    ctx->pc = 0x1be0b4u;
    // NOP
label_1be0b8:
    // 0x1be0b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1be0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be0bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1be0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be0c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be0c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0D0u;
        // 0x1be0d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE0D8u;
}
