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

// Function: entry_0015dde8
// Address: 0x15dde8 - 0x15df60
void entry_0015dde8_0x15dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dde8_0x15dde8");
#endif

    ctx->pc = 0x15dde8u;

label_15dde8:
    // 0x15dde8: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x15ddec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ddf0: 0x25ac0001  addiu       $t4, $t5, 0x1
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x15ddf4: 0x2a2c021  addu        $t8, $s5, $v0
    ctx->pc = 0x15ddf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15ddf8: 0x25aa0002  addiu       $t2, $t5, 0x2
    ctx->pc = 0x15ddf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x15ddfc: 0x8f042cd8  lw          $a0, 0x2CD8($t8)
    ctx->pc = 0x15ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
    // 0x15de00: 0x28a1021  addu        $v0, $s4, $t2
    ctx->pc = 0x15de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x15de04: 0x28c1821  addu        $v1, $s4, $t4
    ctx->pc = 0x15de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x15de08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15de0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15de10: 0x22e7821  addu        $t7, $s1, $t6
    ctx->pc = 0x15de10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x15de14: 0x24eb021  addu        $s6, $s2, $t6
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x15de18: 0x26eb821  addu        $s7, $s3, $t6
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x15de1c: 0x2a24821  addu        $t1, $s5, $v0
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15de20: 0x25a80003  addiu       $t0, $t5, 0x3
    ctx->pc = 0x15de20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x15de24: 0x2a35821  addu        $t3, $s5, $v1
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15de28: 0x2881021  addu        $v0, $s4, $t0
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x15de2c: 0xc4800200  lwc1        $f0, 0x200($a0)
    ctx->pc = 0x15de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15de30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15de34: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x15de38: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15de3c: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x15de40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15de44: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x15de44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15de48: 0x25a20006  addiu       $v0, $t5, 0x6
    ctx->pc = 0x15de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x15de4c: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x15de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x15de50: 0x282c821  addu        $t9, $s4, $v0
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15de54: 0xaecd0000  sw          $t5, 0x0($s6)
    ctx->pc = 0x15de54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 13));
    // 0x15de58: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x15de5c: 0x8f182cd8  lw          $t8, 0x2CD8($t8)
    ctx->pc = 0x15de5cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
    // 0x15de60: 0x25a40005  addiu       $a0, $t5, 0x5
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
    // 0x15de64: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15de68: 0x2b9f021  addu        $fp, $s5, $t9
    ctx->pc = 0x15de68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 25)));
    // 0x15de6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15de70: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x15de74: 0x7fb800e0  sq          $t8, 0xE0($sp)
    ctx->pc = 0x15de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 24));
    // 0x15de78: 0x25b80007  addiu       $t8, $t5, 0x7
    ctx->pc = 0x15de78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
    // 0x15de7c: 0x7fb800a0  sq          $t8, 0xA0($sp)
    ctx->pc = 0x15de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 24));
    // 0x15de80: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x15de84: 0x298c021  addu        $t8, $s4, $t8
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x15de88: 0x18c880  sll         $t9, $t8, 2
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x15de8c: 0x8fb80150  lw          $t8, 0x150($sp)
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15de90: 0x2b9c821  addu        $t9, $s5, $t9
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 25)));
    // 0x15de94: 0x1b8c02a  slt         $t8, $t5, $t8
    ctx->pc = 0x15de94u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x15de98: 0x7fb800c0  sq          $t8, 0xC0($sp)
    ctx->pc = 0x15de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 24));
    // 0x15de9c: 0x7bb800e0  lq          $t8, 0xE0($sp)
    ctx->pc = 0x15de9cu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15dea0: 0xaef80000  sw          $t8, 0x0($s7)
    ctx->pc = 0x15dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 24));
    // 0x15dea4: 0x8d782cd8  lw          $t8, 0x2CD8($t3)
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15dea8: 0x7fb800d0  sq          $t8, 0xD0($sp)
    ctx->pc = 0x15dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 24));
    // 0x15deac: 0xc7000200  lwc1        $f0, 0x200($t8)
    ctx->pc = 0x15deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15deb0: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x15deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x15deb4: 0xaecc0004  sw          $t4, 0x4($s6)
    ctx->pc = 0x15deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 12));
    // 0x15deb8: 0x8d6b2cd8  lw          $t3, 0x2CD8($t3)
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11480)));
    // 0x15debc: 0xaeeb0004  sw          $t3, 0x4($s7)
    ctx->pc = 0x15debcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 11));
    // 0x15dec0: 0x8d2b2cd8  lw          $t3, 0x2CD8($t1)
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15dec4: 0xc5600200  lwc1        $f0, 0x200($t3)
    ctx->pc = 0x15dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dec8: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x15dec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x15decc: 0xaeca0008  sw          $t2, 0x8($s6)
    ctx->pc = 0x15deccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 10));
    // 0x15ded0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x15ded4: 0xaee90008  sw          $t1, 0x8($s7)
    ctx->pc = 0x15ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 9));
    // 0x15ded8: 0x8ce92cd8  lw          $t1, 0x2CD8($a3)
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15dedc: 0xc5200200  lwc1        $f0, 0x200($t1)
    ctx->pc = 0x15dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dee0: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x15dee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x15dee4: 0xaec8000c  sw          $t0, 0xC($s6)
    ctx->pc = 0x15dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 8));
    // 0x15dee8: 0x8ce72cd8  lw          $a3, 0x2CD8($a3)
    ctx->pc = 0x15dee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11480)));
    // 0x15deec: 0xaee7000c  sw          $a3, 0xC($s7)
    ctx->pc = 0x15deecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 7));
    // 0x15def0: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15def4: 0xc4e00200  lwc1        $f0, 0x200($a3)
    ctx->pc = 0x15def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15def8: 0xe5e00010  swc1        $f0, 0x10($t7)
    ctx->pc = 0x15def8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 16), bits); }
    // 0x15defc: 0xaec60010  sw          $a2, 0x10($s6)
    ctx->pc = 0x15defcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 6));
    // 0x15df00: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x15df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x15df04: 0xaee50010  sw          $a1, 0x10($s7)
    ctx->pc = 0x15df04u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 5));
    // 0x15df08: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15df0c: 0xc4a00200  lwc1        $f0, 0x200($a1)
    ctx->pc = 0x15df0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df10: 0xe5e00014  swc1        $f0, 0x14($t7)
    ctx->pc = 0x15df10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 20), bits); }
    // 0x15df14: 0xaec40014  sw          $a0, 0x14($s6)
    ctx->pc = 0x15df14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 4));
    // 0x15df18: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x15df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x15df1c: 0xaee30014  sw          $v1, 0x14($s7)
    ctx->pc = 0x15df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 3));
    // 0x15df20: 0x8fc32cd8  lw          $v1, 0x2CD8($fp)
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15df24: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x15df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df28: 0xe5e00018  swc1        $f0, 0x18($t7)
    ctx->pc = 0x15df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 24), bits); }
    // 0x15df2c: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x15df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
    // 0x15df30: 0x8fc22cd8  lw          $v0, 0x2CD8($fp)
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11480)));
    // 0x15df34: 0xaee20018  sw          $v0, 0x18($s7)
    ctx->pc = 0x15df34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 2));
    // 0x15df38: 0x8f222cd8  lw          $v0, 0x2CD8($t9)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 11480)));
    // 0x15df3c: 0xc4400200  lwc1        $f0, 0x200($v0)
    ctx->pc = 0x15df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15df40: 0xe5e0001c  swc1        $f0, 0x1C($t7)
    ctx->pc = 0x15df40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 28), bits); }
    // 0x15df44: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x15df44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15df48: 0xaec2001c  sw          $v0, 0x1C($s6)
    ctx->pc = 0x15df48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
    // 0x15df4c: 0x8f222cd8  lw          $v0, 0x2CD8($t9)
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 11480)));
    // 0x15df50: 0xaee2001c  sw          $v0, 0x1C($s7)
    ctx->pc = 0x15df50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 2));
    // 0x15df54: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x15df54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15df58: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x15DF58u;
    {
        const bool branch_taken_0x15df58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF58u;
        // 0x15df5c: 0x25ce0020  addiu       $t6, $t6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df58) {
            ctx->pc = 0x15DDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dde8;
        }
    }
    ctx->pc = 0x15DF60u;
}
