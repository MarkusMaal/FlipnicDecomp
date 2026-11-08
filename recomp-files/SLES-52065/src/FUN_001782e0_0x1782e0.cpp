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

// Function: FUN_001782e0
// Address: 0x1782e0 - 0x17841c
void FUN_001782e0_0x1782e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001782e0_0x1782e0");
#endif

    switch (ctx->pc) {
        case 0x178334u: goto label_178334;
        case 0x1783a4u: goto label_1783a4;
        default: break;
    }

    ctx->pc = 0x1782e0u;

    // 0x1782e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1782e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1782e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1782e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1782e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1782e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1782ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1782ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1782f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1782f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1782f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1782f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1782f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1782fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178300: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x178300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178304: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178308: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x178308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17830c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17830cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178310: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x178310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x178314: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x178314u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178318: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x178318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x17831c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x17831cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x178320: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x178320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178324: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178328: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x178328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x17832c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x17832Cu;
    {
        const bool branch_taken_0x17832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17832Cu;
        // 0x178330: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17832c) {
            ctx->pc = 0x1783E4u;
            goto label_1783e4;
        }
    }
    ctx->pc = 0x178334u;
label_178334:
    // 0x178334: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x178334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x178338: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178338u;
    {
        const bool branch_taken_0x178338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178338) {
            ctx->pc = 0x178354u;
            goto label_178354;
        }
    }
    ctx->pc = 0x178340u;
    // 0x178340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178344: 0x2e030200  sltiu       $v1, $s0, 0x200
    ctx->pc = 0x178344u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x178348: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x178348u;
    {
        const bool branch_taken_0x178348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178348) {
            ctx->pc = 0x178354u;
            goto label_178354;
        }
    }
    ctx->pc = 0x178350u;
    // 0x178350: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_178354:
    // 0x178354: 0x0  nop
    ctx->pc = 0x178354u;
    // NOP
    // 0x178358: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17835c: 0x2463f670  addiu       $v1, $v1, -0x990
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
    // 0x178360: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178364: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178368: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x178368u;
    {
        const bool branch_taken_0x178368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178368) {
            ctx->pc = 0x1783B8u;
            goto label_1783b8;
        }
    }
    ctx->pc = 0x178370u;
    // 0x178370: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x178374: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x178374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x178378: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178378u;
    {
        const bool branch_taken_0x178378 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178378u;
        // 0x17837c: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178378) {
            ctx->pc = 0x178388u;
            goto label_178388;
        }
    }
    ctx->pc = 0x178380u;
    // 0x178380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178380u;
    {
        const bool branch_taken_0x178380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178380) {
            ctx->pc = 0x17838Cu;
            goto label_17838c;
        }
    }
    ctx->pc = 0x178388u;
label_178388:
    // 0x178388: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x178388u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_17838c:
    // 0x17838c: 0x0  nop
    ctx->pc = 0x17838cu;
    // NOP
    // 0x178390: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x178390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x178394: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x178398: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17839c: 0xc07ef92  jal         func_1FBE48
    ctx->pc = 0x17839Cu;
    SET_GPR_U32(ctx, 31, 0x1783A4u);
    ctx->pc = 0x1783A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17839Cu;
    // 0x1783a0: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE48u, 0x17839Cu, 0x1783A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783A4u;
label_1783a4:
    // 0x1783a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1783a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1783a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1783a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1783ac: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1783acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1783b0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1783b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1783b4: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x1783b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
label_1783b8:
    // 0x1783b8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1783b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1783bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1783c0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1783C0u;
    {
        const bool branch_taken_0x1783c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1783c0) {
            ctx->pc = 0x1783DCu;
            goto label_1783dc;
        }
    }
    ctx->pc = 0x1783C8u;
    // 0x1783c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1783c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1783cc: 0x2e030200  sltiu       $v1, $s0, 0x200
    ctx->pc = 0x1783ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1783d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1783D0u;
    {
        const bool branch_taken_0x1783d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1783d0) {
            ctx->pc = 0x1783DCu;
            goto label_1783dc;
        }
    }
    ctx->pc = 0x1783D8u;
    // 0x1783d8: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_1783dc:
    // 0x1783dc: 0x0  nop
    ctx->pc = 0x1783dcu;
    // NOP
    // 0x1783e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1783e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1783e4:
    // 0x1783e4: 0x0  nop
    ctx->pc = 0x1783e4u;
    // NOP
    // 0x1783e8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1783e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1783ec: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1783ECu;
    {
        const bool branch_taken_0x1783ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1783ec) {
            ctx->pc = 0x178334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178334;
        }
    }
    ctx->pc = 0x1783F4u;
    // 0x1783f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1783f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1783f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1783f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1783fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1783fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178400: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x178400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178404: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x178404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178408: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17840c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178414: 0x3e00008  jr          $ra
    ctx->pc = 0x178414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178414u;
        // 0x178418: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17841Cu;
}
