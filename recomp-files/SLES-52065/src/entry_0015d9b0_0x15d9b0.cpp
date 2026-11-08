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

// Function: entry_0015d9b0
// Address: 0x15d9b0 - 0x15db28
void entry_0015d9b0_0x15d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d9b0_0x15d9b0");
#endif

    ctx->pc = 0x15d9b0u;

label_15d9b0:
    // 0x15d9b0: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15d9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9b8: 0x25ac0001  addiu       $t4, $t5, 0x1
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15d9bc: 0x2a2b021  addu        $s6, $s5, $v0
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15d9c0: 0x25aa0002  addiu       $t2, $t5, 0x2
    ctx->pc = 0x15d9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x15d9c4: 0x8ec42cd8  lw          $a0, 0x2CD8($s6)
    ctx->pc = 0x15d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11480)));
    // 0x15d9c8: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x15d9cc: 0x28c1821  addu        $v1, $s4, $t4
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x15d9d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d9d8: 0x22e7821  addu        $t7, $s1, $t6
    ctx->pc = 0x15d9d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x15d9dc: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x15d9dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x15d9e0: 0x26ec821  addu        $t9, $s3, $t6
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15d9e4: 0x2a24821  addu        $t1, $s5, $v0
    ctx->pc = 0x15d9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15d9e8: 0x25a80003  addiu       $t0, $t5, 0x3
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x15d9ec: 0x2a35821  addu        $t3, $s5, $v1
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15d9f0: 0x2881021  addu        $v0, $s4, $t0
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x15d9f4: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x15d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d9f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9fc: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x15d9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x15da00: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15da00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15da04: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x15da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x15da08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15da0c: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x15da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15da10: 0x25a20006  addiu       $v0, $t5, 0x6
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x15da14: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x15da14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x15da18: 0x282b821  addu        $s7, $s4, $v0
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15da1c: 0xaf0d0000  sw          $t5, 0x0($t8)
    ctx->pc = 0x15da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 13));
    // 0x15da20: 0x17b880  sll         $s7, $s7, 2
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x15da24: 0x8ed62cd8  lw          $s6, 0x2CD8($s6)
    ctx->pc = 0x15da24u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11480)));
    // 0x15da28: 0x25a40005  addiu       $a0, $t5, 0x5
    ctx->pc = 0x15da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
    // 0x15da2c: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x15da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15da30: 0x2b7f021  addu        $fp, $s5, $s7
    ctx->pc = 0x15da30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x15da34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15da38: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15da3c: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x15da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x15da40: 0x25b60007  addiu       $s6, $t5, 0x7
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
    // 0x15da44: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x15da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x15da48: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x15da4c: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x15da50: 0x16b880  sll         $s7, $s6, 2
    ctx->pc = 0x15da50u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x15da54: 0x8fb60160  lw          $s6, 0x160($sp)
    ctx->pc = 0x15da54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15da58: 0x2b7b821  addu        $s7, $s5, $s7
    ctx->pc = 0x15da58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x15da5c: 0x1b6b02a  slt         $s6, $t5, $s6
    ctx->pc = 0x15da5cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15da60: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x15da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x15da64: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x15da64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15da68: 0xaf360000  sw          $s6, 0x0($t9)
    ctx->pc = 0x15da68u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 22));
    // 0x15da6c: 0x8d762cd8  lw          $s6, 0x2CD8($t3)
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15da70: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x15da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x15da74: 0xc6c00200  lwc1        $f0, 0x200($s6)
    ctx->pc = 0x15da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da78: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x15da78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x15da7c: 0xaf0c0004  sw          $t4, 0x4($t8)
    ctx->pc = 0x15da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 12));
    // 0x15da80: 0x8d6b2cd8  lw          $t3, 0x2CD8($t3)
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15da84: 0xaf2b0004  sw          $t3, 0x4($t9)
    ctx->pc = 0x15da84u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 11));
    // 0x15da88: 0x8d2b2cd8  lw          $t3, 0x2CD8($t1)
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15da8c: 0xc5600200  lwc1        $f0, 0x200($t3)
    ctx->pc = 0x15da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da90: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x15da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x15da94: 0xaf0a0008  sw          $t2, 0x8($t8)
    ctx->pc = 0x15da94u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 10));
    // 0x15da98: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x15da98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15da9c: 0xaf290008  sw          $t1, 0x8($t9)
    ctx->pc = 0x15da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 9));
    // 0x15daa0: 0x8ce92cd8  lw          $t1, 0x2CD8($a3)
    ctx->pc = 0x15daa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15daa4: 0xc5200200  lwc1        $f0, 0x200($t1)
    ctx->pc = 0x15daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15daa8: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x15daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x15daac: 0xaf08000c  sw          $t0, 0xC($t8)
    ctx->pc = 0x15daacu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 8));
    // 0x15dab0: 0x8ce72cd8  lw          $a3, 0x2CD8($a3)
    ctx->pc = 0x15dab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15dab4: 0xaf27000c  sw          $a3, 0xC($t9)
    ctx->pc = 0x15dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 7));
    // 0x15dab8: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15dabc: 0xc4e00200  lwc1        $f0, 0x200($a3)
    ctx->pc = 0x15dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dac0: 0xe5e00010  swc1        $f0, 0x10($t7)
    ctx->pc = 0x15dac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 16), bits); }
    // 0x15dac4: 0xaf060010  sw          $a2, 0x10($t8)
    ctx->pc = 0x15dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 6));
    // 0x15dac8: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15dacc: 0xaf250010  sw          $a1, 0x10($t9)
    ctx->pc = 0x15daccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 5));
    // 0x15dad0: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x15dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15dad4: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dad8: 0xe5e00014  swc1        $f0, 0x14($t7)
    ctx->pc = 0x15dad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 20), bits); }
    // 0x15dadc: 0xaf040014  sw          $a0, 0x14($t8)
    ctx->pc = 0x15dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 4));
    // 0x15dae0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15dae4: 0xaf230014  sw          $v1, 0x14($t9)
    ctx->pc = 0x15dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 20), GPR_U32(ctx, 3));
    // 0x15dae8: 0x8fc32cd8  lw          $v1, 0x2CD8($fp)
    ctx->pc = 0x15dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15daec: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x15daecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15daf0: 0xe5e00018  swc1        $f0, 0x18($t7)
    ctx->pc = 0x15daf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x15daf4: 0xaf020018  sw          $v0, 0x18($t8)
    ctx->pc = 0x15daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 2));
    // 0x15daf8: 0x8fc22cd8  lw          $v0, 0x2CD8($fp)
    ctx->pc = 0x15daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15dafc: 0xaf220018  sw          $v0, 0x18($t9)
    ctx->pc = 0x15dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 24), GPR_U32(ctx, 2));
    // 0x15db00: 0x8ee22cd8  lw          $v0, 0x2CD8($s7)
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11480)));
    // 0x15db04: 0xc4400200  lwc1        $f0, 0x200($v0)
    ctx->pc = 0x15db04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db08: 0xe5e0001c  swc1        $f0, 0x1C($t7)
    ctx->pc = 0x15db08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 28), bits); }
    // 0x15db0c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x15db0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15db10: 0xaf02001c  sw          $v0, 0x1C($t8)
    ctx->pc = 0x15db10u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 2));
    // 0x15db14: 0x8ee22cd8  lw          $v0, 0x2CD8($s7)
    ctx->pc = 0x15db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11480)));
    // 0x15db18: 0xaf22001c  sw          $v0, 0x1C($t9)
    ctx->pc = 0x15db18u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 28), GPR_U32(ctx, 2));
    // 0x15db1c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x15db1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15db20: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x15DB20u;
    {
        const bool branch_taken_0x15db20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB20u;
        // 0x15db24: 0x25ce0020  addiu       $t6, $t6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db20) {
            ctx->pc = 0x15D9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d9b0;
        }
    }
    ctx->pc = 0x15DB28u;
}
