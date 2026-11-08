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

// Function: FUN_00148910
// Address: 0x148910 - 0x148b48
void FUN_00148910_0x148910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148910_0x148910");
#endif

    switch (ctx->pc) {
        case 0x148a4cu: goto label_148a4c;
        default: break;
    }

    ctx->pc = 0x148910u;

    // 0x148910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148918: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x148918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14891c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14891cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148920: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x148920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x148924: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x148924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x148928: 0x27ad002c  addiu       $t5, $sp, 0x2C
    ctx->pc = 0x148928u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14892c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x14892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148930: 0x27af0024  addiu       $t7, $sp, 0x24
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x148934: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x148934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148938: 0x27ae0028  addiu       $t6, $sp, 0x28
    ctx->pc = 0x148938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x14893c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148940: 0x27ac0030  addiu       $t4, $sp, 0x30
    ctx->pc = 0x148940u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x148944: 0x27ab0034  addiu       $t3, $sp, 0x34
    ctx->pc = 0x148944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x148948: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x148948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x14894c: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x14894cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x148950: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x148950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x148954: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x148954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x148958: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x148958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14895c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x14895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148960: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x148960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x148964: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x148964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x148968: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x148968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14896c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148970: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x148970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148974: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x148974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148978: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x148978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14897c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14897cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x148980: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x148980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x148984: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x148984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x148988: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x148988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14898c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x14898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148990: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x148990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x148994: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x148994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x148998: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x148998u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x14899c: 0x8fb8004c  lw          $t8, 0x4C($sp)
    ctx->pc = 0x14899cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1489a0: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1489a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1489a4: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x1489a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1489a8: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x1489a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1489ac: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x1489acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1489b0: 0x1158005a  beq         $t2, $t8, . + 4 + (0x5A << 2)
    ctx->pc = 0x1489B0u;
    {
        const bool branch_taken_0x1489b0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 24));
        ctx->pc = 0x1489B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489B0u;
        // 0x1489b4: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489b0) {
            ctx->pc = 0x148B1Cu;
            goto label_148b1c;
        }
    }
    ctx->pc = 0x1489B8u;
    // 0x1489b8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1489bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1489bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1489c0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1489c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1489c4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1489c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1489c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1489c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1489cc: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1489ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1489d0: 0x8d900000  lw          $s0, 0x0($t4)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1489d4: 0x1470004e  bne         $v1, $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1489D4u;
    {
        const bool branch_taken_0x1489d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1489d4) {
            ctx->pc = 0x148B10u;
            goto label_148b10;
        }
    }
    ctx->pc = 0x1489DCu;
    // 0x1489dc: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x1489dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1489e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1489e4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1489e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1489e8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1489E8u;
    {
        const bool branch_taken_0x1489e8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1489ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489E8u;
        // 0x1489ec: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489e8) {
            ctx->pc = 0x1489F8u;
            goto label_1489f8;
        }
    }
    ctx->pc = 0x1489F0u;
    // 0x1489f0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1489f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1489f4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1489f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1489f8:
    // 0x1489f8: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x1489f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1489fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1489fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148a00: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x148a00u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x148a04: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x148a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148a08: 0x26190004  addiu       $t9, $s0, 0x4
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x148a0c: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x148a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
    // 0x148a10: 0x8fb10020  lw          $s1, 0x20($sp)
    ctx->pc = 0x148a10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148a14: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x148a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148a18: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x148a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x148a1c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x148a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148a20: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x148a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x148a24: 0x17300002  bne         $t9, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x148A24u;
    {
        const bool branch_taken_0x148a24 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 16));
        if (branch_taken_0x148a24) {
            ctx->pc = 0x148A30u;
            goto label_148a30;
        }
    }
    ctx->pc = 0x148A2Cu;
    // 0x148a2c: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x148a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
label_148a30:
    // 0x148a30: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x148a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148a38: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x148a38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148a3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x148a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148a40: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x148a40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x148a44: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x148A44u;
    {
        const bool branch_taken_0x148a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A44u;
        // 0x148a48: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a44) {
            ctx->pc = 0x148B10u;
            goto label_148b10;
        }
    }
    ctx->pc = 0x148A4Cu;
label_148a4c:
    // 0x148a4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x148a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148a50: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x148a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148a54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148a58: 0x0  nop
    ctx->pc = 0x148a58u;
    // NOP
    // 0x148a5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x148A5Cu;
    {
        const bool branch_taken_0x148a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148a5c) {
            ctx->pc = 0x148A80u;
            goto label_148a80;
        }
    }
    ctx->pc = 0x148A64u;
    // 0x148a64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x148a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148a68: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x148a68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a6c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x148a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148a70: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x148a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148a74: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x148a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x148a78: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x148a78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148a7c: 0x0  nop
    ctx->pc = 0x148a7cu;
    // NOP
label_148a80:
    // 0x148a80: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148a88: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x148a88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x148a8c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x148a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148a90: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x148a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x148a94: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x148a94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x148a98: 0x8d900000  lw          $s0, 0x0($t4)
    ctx->pc = 0x148a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x148a9c: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x148A9Cu;
    {
        const bool branch_taken_0x148a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x148a9c) {
            ctx->pc = 0x148B10u;
            goto label_148b10;
        }
    }
    ctx->pc = 0x148AA4u;
    // 0x148aa4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x148aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148aa8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148aac: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x148aacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148ab0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148AB0u;
    {
        const bool branch_taken_0x148ab0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x148AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AB0u;
        // 0x148ab4: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ab0) {
            ctx->pc = 0x148AC0u;
            goto label_148ac0;
        }
    }
    ctx->pc = 0x148AB8u;
    // 0x148ab8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x148abc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x148abcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_148ac0:
    // 0x148ac0: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148ac4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148ac8: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x148ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x148acc: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148ad0: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x148ad4: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x148ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    // 0x148ad8: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x148ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148adc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x148adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148ae0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x148ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148ae4: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x148ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x148ae8: 0x219c821  addu        $t9, $s0, $t9
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x148aec: 0x16390002  bne         $s1, $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x148AECu;
    {
        const bool branch_taken_0x148aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 25));
        if (branch_taken_0x148aec) {
            ctx->pc = 0x148AF8u;
            goto label_148af8;
        }
    }
    ctx->pc = 0x148AF4u;
    // 0x148af4: 0xadd00000  sw          $s0, 0x0($t6)
    ctx->pc = 0x148af4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 16));
label_148af8:
    // 0x148af8: 0x8dd90000  lw          $t9, 0x0($t6)
    ctx->pc = 0x148af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148b00: 0x8f300000  lw          $s0, 0x0($t9)
    ctx->pc = 0x148b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x148b04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148b08: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x148b08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x148b0c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x148b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_148b10:
    // 0x148b10: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x148b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148b14: 0x1478ffcd  bne         $v1, $t8, . + 4 + (-0x33 << 2)
    ctx->pc = 0x148B14u;
    {
        const bool branch_taken_0x148b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        if (branch_taken_0x148b14) {
            ctx->pc = 0x148A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148a4c;
        }
    }
    ctx->pc = 0x148B1Cu;
label_148b1c:
    // 0x148b1c: 0x0  nop
    ctx->pc = 0x148b1cu;
    // NOP
    // 0x148b20: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x148b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x148b24: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x148b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x148b28: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x148b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x148b2c: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x148b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x148b30: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x148b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x148b34: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x148b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x148b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148b40: 0x3e00008  jr          $ra
    ctx->pc = 0x148B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B40u;
        // 0x148b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148B48u;
}
