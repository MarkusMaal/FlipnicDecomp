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

// Function: FUN_00188ef0
// Address: 0x188ef0 - 0x1893cc
void FUN_00188ef0_0x188ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188ef0_0x188ef0");
#endif

    switch (ctx->pc) {
        case 0x188f28u: goto label_188f28;
        case 0x188f4cu: goto label_188f4c;
        case 0x188facu: goto label_188fac;
        case 0x1891f8u: goto label_1891f8;
        case 0x1892ccu: goto label_1892cc;
        case 0x1892ecu: goto label_1892ec;
        case 0x1893a0u: goto label_1893a0;
        case 0x1893a8u: goto label_1893a8;
        default: break;
    }

    ctx->pc = 0x188ef0u;

    // 0x188ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188ef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x188ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x188ef8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x188ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x188efc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x188efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x188f00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x188f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x188f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x188f08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x188f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x188f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x188f10: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x188f14: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x188f14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x188f18: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x188f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x188f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f20: 0xc040168  jal         func_1005A0
    ctx->pc = 0x188F20u;
    SET_GPR_U32(ctx, 31, 0x188F28u);
    ctx->pc = 0x188F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F20u;
    // 0x188f24: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x188F20u, 0x188F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F28u;
label_188f28:
    // 0x188f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x188f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f2c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x188f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188f30: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x188f34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f38: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x188F38u;
    {
        const bool branch_taken_0x188f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F38u;
        // 0x188f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f38) {
            ctx->pc = 0x188FC8u;
            goto label_188fc8;
        }
    }
    ctx->pc = 0x188F40u;
    // 0x188f40: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x188f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x188f44: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x188F44u;
    {
        const bool branch_taken_0x188f44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x188F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F44u;
        // 0x188f48: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f44) {
            ctx->pc = 0x188FA0u;
            goto label_188fa0;
        }
    }
    ctx->pc = 0x188F4Cu;
label_188f4c:
    // 0x188f4c: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x188f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x188f50: 0x2264021  addu        $t0, $s1, $a2
    ctx->pc = 0x188f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x188f54: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x188f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x188f58: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x188f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x188f5c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x188f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x188f60: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x188f60u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f64: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x188f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x188f68: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x188f68u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f6c: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x188f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x188f70: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x188f70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f74: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x188f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x188f78: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x188f78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f7c: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x188f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x188f80: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x188f80u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f84: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x188f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x188f88: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x188f88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f8c: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x188f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x188f90: 0xa1030006  sb          $v1, 0x6($t0)
    ctx->pc = 0x188f90u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x188f94: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x188f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x188f98: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x188F98u;
    {
        const bool branch_taken_0x188f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F98u;
        // 0x188f9c: 0xa1030007  sb          $v1, 0x7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f98) {
            ctx->pc = 0x188F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188f4c;
        }
    }
    ctx->pc = 0x188FA0u;
label_188fa0:
    // 0x188fa0: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x188fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188fa4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x188FA4u;
    {
        const bool branch_taken_0x188fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fa4) {
            ctx->pc = 0x188FC8u;
            goto label_188fc8;
        }
    }
    ctx->pc = 0x188FACu;
label_188fac:
    // 0x188fac: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x188fb0: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x188fb4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x188fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188fb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x188fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x188fbc: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x188fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188fc0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188FC0u;
    {
        const bool branch_taken_0x188fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FC0u;
        // 0x188fc4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fc0) {
            ctx->pc = 0x188FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188fac;
        }
    }
    ctx->pc = 0x188FC8u;
label_188fc8:
    // 0x188fc8: 0x92620080  lbu         $v0, 0x80($s3)
    ctx->pc = 0x188fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x188fcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188FCCu;
    {
        const bool branch_taken_0x188fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fcc) {
            ctx->pc = 0x188FE0u;
            goto label_188fe0;
        }
    }
    ctx->pc = 0x188FD4u;
    // 0x188fd4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x188fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x188fd8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x188FD8u;
    {
        const bool branch_taken_0x188fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FD8u;
        // 0x188fdc: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fd8) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x188FE0u;
label_188fe0:
    // 0x188fe0: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x188fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188fe4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x188fe8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188fec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x188ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ff4: 0x0  nop
    ctx->pc = 0x188ff4u;
    // NOP
    // 0x188ff8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x188ffc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x188ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189000: 0x0  nop
    ctx->pc = 0x189000u;
    // NOP
    // 0x189004: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189004u;
    {
        const bool branch_taken_0x189004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189004) {
            ctx->pc = 0x18901Cu;
            goto label_18901c;
        }
    }
    ctx->pc = 0x18900Cu;
    // 0x18900c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18900cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189010: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189014u;
    {
        const bool branch_taken_0x189014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189014u;
        // 0x189018: 0xa3a3007c  sb          $v1, 0x7C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189014) {
            ctx->pc = 0x189038u;
            goto label_189038;
        }
    }
    ctx->pc = 0x18901Cu;
label_18901c:
    // 0x18901c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18901cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189020: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x189024: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189028: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18902c: 0x0  nop
    ctx->pc = 0x18902cu;
    // NOP
    // 0x189030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189034: 0xa3a3007c  sb          $v1, 0x7C($sp)
    ctx->pc = 0x189034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 3));
label_189038:
    // 0x189038: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x18903c: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x18903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189040: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189044: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x189044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x189048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18904c: 0x0  nop
    ctx->pc = 0x18904cu;
    // NOP
    // 0x189050: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189054: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189058: 0x0  nop
    ctx->pc = 0x189058u;
    // NOP
    // 0x18905c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18905Cu;
    {
        const bool branch_taken_0x18905c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18905c) {
            ctx->pc = 0x189074u;
            goto label_189074;
        }
    }
    ctx->pc = 0x189064u;
    // 0x189064: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189068: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18906c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18906Cu;
    {
        const bool branch_taken_0x18906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18906Cu;
        // 0x189070: 0xa3a3007d  sb          $v1, 0x7D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18906c) {
            ctx->pc = 0x189090u;
            goto label_189090;
        }
    }
    ctx->pc = 0x189074u;
label_189074:
    // 0x189074: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189074u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189078: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18907c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18907cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189080: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189084: 0x0  nop
    ctx->pc = 0x189084u;
    // NOP
    // 0x189088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18908c: 0xa3a3007d  sb          $v1, 0x7D($sp)
    ctx->pc = 0x18908cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 3));
label_189090:
    // 0x189090: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x189094: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x189094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189098: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18909c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1890a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1890a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1890a4: 0x0  nop
    ctx->pc = 0x1890a4u;
    // NOP
    // 0x1890a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1890a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1890ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1890acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1890b0: 0x0  nop
    ctx->pc = 0x1890b0u;
    // NOP
    // 0x1890b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1890B4u;
    {
        const bool branch_taken_0x1890b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1890b4) {
            ctx->pc = 0x1890CCu;
            goto label_1890cc;
        }
    }
    ctx->pc = 0x1890BCu;
    // 0x1890bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1890bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1890c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1890c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1890c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0xa3a3007e  sb          $v1, 0x7E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1890E8u;
            goto label_1890e8;
        }
    }
    ctx->pc = 0x1890CCu;
label_1890cc:
    // 0x1890cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1890ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1890d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1890d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1890d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1890d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1890d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1890dc: 0x0  nop
    ctx->pc = 0x1890dcu;
    // NOP
    // 0x1890e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1890e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1890e4: 0xa3a3007e  sb          $v1, 0x7E($sp)
    ctx->pc = 0x1890e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 3));
label_1890e8:
    // 0x1890e8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1890ec: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x1890ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1890f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1890f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1890f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1890f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1890f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1890f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1890fc: 0x0  nop
    ctx->pc = 0x1890fcu;
    // NOP
    // 0x189100: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189104: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189108: 0x0  nop
    ctx->pc = 0x189108u;
    // NOP
    // 0x18910c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18910Cu;
    {
        const bool branch_taken_0x18910c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18910c) {
            ctx->pc = 0x189124u;
            goto label_189124;
        }
    }
    ctx->pc = 0x189114u;
    // 0x189114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18911c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18911Cu;
    {
        const bool branch_taken_0x18911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18911Cu;
        // 0x189120: 0xa3a3007f  sb          $v1, 0x7F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18911c) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x189124u;
label_189124:
    // 0x189124: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18912c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18912cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189130: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189134: 0x0  nop
    ctx->pc = 0x189134u;
    // NOP
    // 0x189138: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18913c: 0xa3a3007f  sb          $v1, 0x7F($sp)
    ctx->pc = 0x18913cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 3));
label_189140:
    // 0x189140: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x189144: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189144u;
    {
        const bool branch_taken_0x189144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189144u;
        // 0x189148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189144) {
            ctx->pc = 0x18918Cu;
            goto label_18918c;
        }
    }
    ctx->pc = 0x18914Cu;
    // 0x18914c: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x18914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x189150: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189154: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189158: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x18915c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18915cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189160u;
    {
        const bool branch_taken_0x189160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189160u;
        // 0x189164: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189160) {
            ctx->pc = 0x189174u;
            goto label_189174;
        }
    }
    ctx->pc = 0x189168u;
    // 0x189168: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x18916c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x18916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189170: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189174:
    // 0x189174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189174u;
    {
        const bool branch_taken_0x189174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189174) {
            ctx->pc = 0x189188u;
            goto label_189188;
        }
    }
    ctx->pc = 0x18917Cu;
    // 0x18917c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189180: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x189184: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189188:
    // 0x189188: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x189188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18918c:
    // 0x18918c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18918Cu;
    {
        const bool branch_taken_0x18918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18918Cu;
        // 0x189190: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18918c) {
            ctx->pc = 0x1891FCu;
            goto label_1891fc;
        }
    }
    ctx->pc = 0x189194u;
    // 0x189194: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189194u;
    {
        const bool branch_taken_0x189194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189194u;
        // 0x189198: 0x8e66005c  lw          $a2, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189194) {
            ctx->pc = 0x1891E8u;
            goto label_1891e8;
        }
    }
    ctx->pc = 0x18919Cu;
    // 0x18919c: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1891a0: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1891a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1891a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1891a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1891a8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1891a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1891ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1891acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1891b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1891B0u;
    {
        const bool branch_taken_0x1891b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891B0u;
        // 0x1891b4: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891b0) {
            ctx->pc = 0x1891C4u;
            goto label_1891c4;
        }
    }
    ctx->pc = 0x1891B8u;
    // 0x1891b8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1891bc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1891bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1891c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1891c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1891c4:
    // 0x1891c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1891C4u;
    {
        const bool branch_taken_0x1891c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891c4) {
            ctx->pc = 0x1891D8u;
            goto label_1891d8;
        }
    }
    ctx->pc = 0x1891CCu;
    // 0x1891cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1891ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1891d0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1891d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1891d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1891d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1891d8:
    // 0x1891d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1891D8u;
    {
        const bool branch_taken_0x1891d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891d8) {
            ctx->pc = 0x1891E8u;
            goto label_1891e8;
        }
    }
    ctx->pc = 0x1891E0u;
    // 0x1891e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1891E0u;
    {
        const bool branch_taken_0x1891e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891E0u;
        // 0x1891e4: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891e0) {
            ctx->pc = 0x1891F0u;
            goto label_1891f0;
        }
    }
    ctx->pc = 0x1891E8u;
label_1891e8:
    // 0x1891e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1891e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891ec: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1891ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
label_1891f0:
    // 0x1891f0: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1891F0u;
    SET_GPR_U32(ctx, 31, 0x1891F8u);
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1891F0u, 0x1891F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891F8u;
label_1891f8:
    // 0x1891f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1891fc:
    // 0x1891fc: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1891fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x189200: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x189200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189204: 0x346b0004  ori         $t3, $v1, 0x4
    ctx->pc = 0x189204u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x189208: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x189208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x18920c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x189210: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x189210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x189214: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x189218: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x18921c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x18921cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189220: 0x346a0004  ori         $t2, $v1, 0x4
    ctx->pc = 0x189220u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x189224: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x189224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189228: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x189228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x18922c: 0xffa50060  sd          $a1, 0x60($sp)
    ctx->pc = 0x18922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 5));
    // 0x189230: 0xffa40068  sd          $a0, 0x68($sp)
    ctx->pc = 0x189230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 4));
    // 0x189234: 0x34691001  ori         $t1, $v1, 0x1001
    ctx->pc = 0x189234u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x189238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18923c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x18923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x189240: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189244: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x189244u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x189248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18924c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18924cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x189250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189254: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x189254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x189258: 0x7baa0060  lq          $t2, 0x60($sp)
    ctx->pc = 0x189258u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18925c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189260: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x189260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
    // 0x189264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189268: 0xfc690020  sd          $t1, 0x20($v1)
    ctx->pc = 0x189268u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 9));
    // 0x18926c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189270: 0xfc680028  sd          $t0, 0x28($v1)
    ctx->pc = 0x189270u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 8));
    // 0x189274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189278: 0xfc670030  sd          $a3, 0x30($v1)
    ctx->pc = 0x189278u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 7));
    // 0x18927c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189280: 0xfc660038  sd          $a2, 0x38($v1)
    ctx->pc = 0x189280u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 6));
    // 0x189284: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189288: 0xfc650040  sd          $a1, 0x40($v1)
    ctx->pc = 0x189288u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 5));
    // 0x18928c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189290: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x189290u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
    // 0x189294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189298: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x18929c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18929cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1892a0: 0x8e660078  lw          $a2, 0x78($s3)
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1892a4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1892A4u;
    {
        const bool branch_taken_0x1892a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892a4) {
            ctx->pc = 0x1892D4u;
            goto label_1892d4;
        }
    }
    ctx->pc = 0x1892ACu;
    // 0x1892ac: 0xc66c0070  lwc1        $f12, 0x70($s3)
    ctx->pc = 0x1892acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1892b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1892b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892b4: 0xc6740010  lwc1        $f20, 0x10($s3)
    ctx->pc = 0x1892b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1892b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1892b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892bc: 0xc6750014  lwc1        $f21, 0x14($s3)
    ctx->pc = 0x1892bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1892c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1892c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892c4: 0xc062240  jal         func_188900
    ctx->pc = 0x1892C4u;
    SET_GPR_U32(ctx, 31, 0x1892CCu);
    ctx->pc = 0x1892C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892C4u;
    // 0x1892c8: 0x26700014  addiu       $s0, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188900u, 0x1892C4u, 0x1892CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892CCu;
label_1892cc:
    // 0x1892cc: 0xe6740010  swc1        $f20, 0x10($s3)
    ctx->pc = 0x1892ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1892d0: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x1892d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1892d4:
    // 0x1892d4: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1892d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1892d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1892dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1892dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1892e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892e4: 0xc062240  jal         func_188900
    ctx->pc = 0x1892E4u;
    SET_GPR_U32(ctx, 31, 0x1892ECu);
    ctx->pc = 0x1892E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892E4u;
    // 0x1892e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188900u, 0x1892E4u, 0x1892ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892ECu;
label_1892ec:
    // 0x1892ec: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1892f0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1892F0u;
    {
        const bool branch_taken_0x1892f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F0u;
        // 0x1892f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f0) {
            ctx->pc = 0x189338u;
            goto label_189338;
        }
    }
    ctx->pc = 0x1892F8u;
    // 0x1892f8: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1892fc: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1892fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189300: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189304: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189308: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x18930c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18930Cu;
    {
        const bool branch_taken_0x18930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18930Cu;
        // 0x189310: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18930c) {
            ctx->pc = 0x189320u;
            goto label_189320;
        }
    }
    ctx->pc = 0x189314u;
    // 0x189314: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189318: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x18931c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18931cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189320:
    // 0x189320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189320u;
    {
        const bool branch_taken_0x189320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189320) {
            ctx->pc = 0x189334u;
            goto label_189334;
        }
    }
    ctx->pc = 0x189328u;
    // 0x189328: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18932c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x18932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x189330: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189334:
    // 0x189334: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x189334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_189338:
    // 0x189338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x189338u;
    {
        const bool branch_taken_0x189338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189338) {
            ctx->pc = 0x1893A0u;
            goto label_1893a0;
        }
    }
    ctx->pc = 0x189340u;
    // 0x189340: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189340u;
    {
        const bool branch_taken_0x189340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189340u;
        // 0x189344: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189340) {
            ctx->pc = 0x189390u;
            goto label_189390;
        }
    }
    ctx->pc = 0x189348u;
    // 0x189348: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x18934c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189350: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189354: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189358u;
    {
        const bool branch_taken_0x189358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189358u;
        // 0x18935c: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189358) {
            ctx->pc = 0x18936Cu;
            goto label_18936c;
        }
    }
    ctx->pc = 0x189360u;
    // 0x189360: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189364: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18936c:
    // 0x18936c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18936Cu;
    {
        const bool branch_taken_0x18936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18936c) {
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189374u;
    // 0x189374: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189378: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x18937c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189380:
    // 0x189380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189380u;
    {
        const bool branch_taken_0x189380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189380) {
            ctx->pc = 0x189390u;
            goto label_189390;
        }
    }
    ctx->pc = 0x189388u;
    // 0x189388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189388u;
    {
        const bool branch_taken_0x189388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189388u;
        // 0x18938c: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189388) {
            ctx->pc = 0x189398u;
            goto label_189398;
        }
    }
    ctx->pc = 0x189390u;
label_189390:
    // 0x189390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189394: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x189394u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
label_189398:
    // 0x189398: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x189398u;
    SET_GPR_U32(ctx, 31, 0x1893A0u);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x189398u, 0x1893A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893A0u;
label_1893a0:
    // 0x1893a0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1893A0u;
    SET_GPR_U32(ctx, 31, 0x1893A8u);
    ctx->pc = 0x1893A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893A0u;
    // 0x1893a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1893A0u, 0x1893A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893A8u;
label_1893a8:
    // 0x1893a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1893a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1893ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1893acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1893b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1893b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1893b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1893b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1893b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1893b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1893bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1893bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1893c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1893c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1893c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1893C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1893C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C4u;
        // 0x1893c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893CCu;
}
