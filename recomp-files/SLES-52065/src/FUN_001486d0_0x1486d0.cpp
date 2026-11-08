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

// Function: FUN_001486d0
// Address: 0x1486d0 - 0x148908
void FUN_001486d0_0x1486d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001486d0_0x1486d0");
#endif

    switch (ctx->pc) {
        case 0x14880cu: goto label_14880c;
        default: break;
    }

    ctx->pc = 0x1486d0u;

    // 0x1486d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1486d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1486d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1486d8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1486d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1486dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1486dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1486e0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1486e4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1486e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1486e8: 0x27ad002c  addiu       $t5, $sp, 0x2C
    ctx->pc = 0x1486e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1486ec: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1486ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1486f0: 0x27af0024  addiu       $t7, $sp, 0x24
    ctx->pc = 0x1486f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1486f4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1486f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1486f8: 0x27ae0028  addiu       $t6, $sp, 0x28
    ctx->pc = 0x1486f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1486fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1486fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148700: 0x27ac0030  addiu       $t4, $sp, 0x30
    ctx->pc = 0x148700u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x148704: 0x27ab0034  addiu       $t3, $sp, 0x34
    ctx->pc = 0x148704u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x148708: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x148708u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x14870c: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x14870cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x148710: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x148710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x148714: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x148714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x148718: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x148718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14871c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x14871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148720: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x148720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x148724: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x148724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x148728: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x148728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14872c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148730: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x148730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148734: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x148734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148738: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x148738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14873c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14873cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x148740: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x148740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x148744: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x148744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x148748: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x148748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14874c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x14874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148750: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x148750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x148754: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x148754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x148758: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14875c: 0x8fb8004c  lw          $t8, 0x4C($sp)
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x148760: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148764: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x148764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148768: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x148768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14876c: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x14876cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148770: 0x1158005a  beq         $t2, $t8, . + 4 + (0x5A << 2)
    ctx->pc = 0x148770u;
    {
        const bool branch_taken_0x148770 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 24));
        ctx->pc = 0x148774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148770u;
        // 0x148774: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148770) {
            ctx->pc = 0x1488DCu;
            goto label_1488dc;
        }
    }
    ctx->pc = 0x148778u;
    // 0x148778: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14877c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148780: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x148780u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x148784: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148788: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14878c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x14878cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x148790: 0x8d900000  lw          $s0, 0x0($t4)
    ctx->pc = 0x148790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x148794: 0x1470004e  bne         $v1, $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x148794u;
    {
        const bool branch_taken_0x148794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x148794) {
            ctx->pc = 0x1488D0u;
            goto label_1488d0;
        }
    }
    ctx->pc = 0x14879Cu;
    // 0x14879c: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1487a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1487a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1487a4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1487a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1487a8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1487A8u;
    {
        const bool branch_taken_0x1487a8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1487ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487A8u;
        // 0x1487ac: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487a8) {
            ctx->pc = 0x1487B8u;
            goto label_1487b8;
        }
    }
    ctx->pc = 0x1487B0u;
    // 0x1487b0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1487b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1487b4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1487b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1487b8:
    // 0x1487b8: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x1487b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1487bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1487c0: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x1487c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x1487c4: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1487c8: 0x26190004  addiu       $t9, $s0, 0x4
    ctx->pc = 0x1487c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1487cc: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x1487ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
    // 0x1487d0: 0x8fb10020  lw          $s1, 0x20($sp)
    ctx->pc = 0x1487d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1487d4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1487d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1487d8: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1487d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1487dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1487dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1487e0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1487e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1487e4: 0x17300002  bne         $t9, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1487E4u;
    {
        const bool branch_taken_0x1487e4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 16));
        if (branch_taken_0x1487e4) {
            ctx->pc = 0x1487F0u;
            goto label_1487f0;
        }
    }
    ctx->pc = 0x1487ECu;
    // 0x1487ec: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x1487ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
label_1487f0:
    // 0x1487f0: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x1487f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1487f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1487f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1487f8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1487fc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148800: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x148800u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x148804: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x148804u;
    {
        const bool branch_taken_0x148804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148804u;
        // 0x148808: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148804) {
            ctx->pc = 0x1488D0u;
            goto label_1488d0;
        }
    }
    ctx->pc = 0x14880Cu;
label_14880c:
    // 0x14880c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x14880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148810: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x148810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148818: 0x0  nop
    ctx->pc = 0x148818u;
    // NOP
    // 0x14881c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14881Cu;
    {
        const bool branch_taken_0x14881c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14881c) {
            ctx->pc = 0x148840u;
            goto label_148840;
        }
    }
    ctx->pc = 0x148824u;
    // 0x148824: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x148824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148828: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x148828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14882c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x14882cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148830: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148834: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x148838: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x148838u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14883c: 0x0  nop
    ctx->pc = 0x14883cu;
    // NOP
label_148840:
    // 0x148840: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148848: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x148848u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x14884c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x14884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148850: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x148850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x148854: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x148854u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x148858: 0x8d900000  lw          $s0, 0x0($t4)
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14885c: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14885Cu;
    {
        const bool branch_taken_0x14885c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x14885c) {
            ctx->pc = 0x1488D0u;
            goto label_1488d0;
        }
    }
    ctx->pc = 0x148864u;
    // 0x148864: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148868: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14886c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14886cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148870: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148870u;
    {
        const bool branch_taken_0x148870 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x148874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148870u;
        // 0x148874: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148870) {
            ctx->pc = 0x148880u;
            goto label_148880;
        }
    }
    ctx->pc = 0x148878u;
    // 0x148878: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x148878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x14887c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x14887cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_148880:
    // 0x148880: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148884: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148888: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x148888u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x14888c: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x14888cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148890: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x148894: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x148894u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    // 0x148898: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14889c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x14889cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1488a0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1488a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1488a4: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x1488a8: 0x219c821  addu        $t9, $s0, $t9
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x1488ac: 0x16390002  bne         $s1, $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x1488ACu;
    {
        const bool branch_taken_0x1488ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 25));
        if (branch_taken_0x1488ac) {
            ctx->pc = 0x1488B8u;
            goto label_1488b8;
        }
    }
    ctx->pc = 0x1488B4u;
    // 0x1488b4: 0xadd00000  sw          $s0, 0x0($t6)
    ctx->pc = 0x1488b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 16));
label_1488b8:
    // 0x1488b8: 0x8dd90000  lw          $t9, 0x0($t6)
    ctx->pc = 0x1488b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1488bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1488bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1488c0: 0x8f300000  lw          $s0, 0x0($t9)
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1488c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1488c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1488c8: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x1488c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x1488cc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1488ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_1488d0:
    // 0x1488d0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1488d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1488d4: 0x1478ffcd  bne         $v1, $t8, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1488D4u;
    {
        const bool branch_taken_0x1488d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        if (branch_taken_0x1488d4) {
            ctx->pc = 0x14880Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14880c;
        }
    }
    ctx->pc = 0x1488DCu;
label_1488dc:
    // 0x1488dc: 0x0  nop
    ctx->pc = 0x1488dcu;
    // NOP
    // 0x1488e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1488e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1488e4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1488e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1488e8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1488e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1488ec: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x1488ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x1488f0: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x1488f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x1488f4: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x1488f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x1488f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1488f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1488fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1488fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148900: 0x3e00008  jr          $ra
    ctx->pc = 0x148900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148900u;
        // 0x148904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148908u;
}
