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

// Function: FUN_00184180
// Address: 0x184180 - 0x184334
void FUN_00184180_0x184180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184180_0x184180");
#endif

    ctx->pc = 0x184180u;

    // 0x184180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184184: 0x30b83fff  andi        $t8, $a1, 0x3FFF
    ctx->pc = 0x184184u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x184188: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18418c: 0x30c5003f  andi        $a1, $a2, 0x3F
    ctx->pc = 0x18418cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x184190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184194: 0x30e3003f  andi        $v1, $a3, 0x3F
    ctx->pc = 0x184194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x184198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18419c: 0x57bb8  dsll        $t7, $a1, 14
    ctx->pc = 0x18419cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) << 14);
    // 0x1841a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1841a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1841a4: 0x36900  sll         $t5, $v1, 4
    ctx->pc = 0x1841a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1841a8: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x1841a8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1841ac: 0x2410c000  addiu       $s0, $zero, -0x4000
    ctx->pc = 0x1841acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1841b0: 0x3105000f  andi        $a1, $t0, 0xF
    ctx->pc = 0x1841b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x1841b4: 0x3123000f  andi        $v1, $t1, 0xF
    ctx->pc = 0x1841b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x1841b8: 0x56080  sll         $t4, $a1, 2
    ctx->pc = 0x1841b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1841bc: 0x34fb8  dsll        $t1, $v1, 30
    ctx->pc = 0x1841bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 30);
    // 0x1841c0: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x1841c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1841c4: 0x31630003  andi        $v1, $t3, 0x3
    ctx->pc = 0x1841c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1841c8: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x1841c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1841cc: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x1841ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1841d0: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1841d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1841d4: 0x240bfc0f  addiu       $t3, $zero, -0x3F1
    ctx->pc = 0x1841d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1841d8: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x1841d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x1841dc: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1841dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1841e0: 0x2188825  or          $s1, $s0, $t8
    ctx->pc = 0x1841e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | GPR_U64(ctx, 24));
    // 0x1841e4: 0x346e3fff  ori         $t6, $v1, 0x3FFF
    ctx->pc = 0x1841e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x1841e8: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x1841e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1841ec: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1841ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1841f0: 0xdc980000  ld          $t8, 0x0($a0)
    ctx->pc = 0x1841f0u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1841f4: 0x3c10fff8  lui         $s0, 0xFFF8
    ctx->pc = 0x1841f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65528 << 16));
    // 0x1841f8: 0x3610001f  ori         $s0, $s0, 0x1F
    ctx->pc = 0x1841f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)31);
    // 0x1841fc: 0x240affc3  addiu       $t2, $zero, -0x3D
    ctx->pc = 0x1841fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x184200: 0x10c83c  dsll32      $t9, $s0, 0
    ctx->pc = 0x184200u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 16) << (32 + 0));
    // 0x184204: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x184204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x184208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x184208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18420c: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x18420cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184210: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x184210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x184214: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x184214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x184218: 0x3613ffff  ori         $s3, $s0, 0xFFFF
    ctx->pc = 0x184218u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x18421c: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x18421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x184220: 0x30e7024  and         $t6, $t8, $t6
    ctx->pc = 0x184220u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x184224: 0x2799825  or          $s3, $s3, $t9
    ctx->pc = 0x184224u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 25));
    // 0x184228: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x184228u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x18422c: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x18422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x184230: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x184230u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x184234: 0x2412ff87  addiu       $s2, $zero, -0x79
    ctx->pc = 0x184234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x184238: 0x948e0002  lhu         $t6, 0x2($a0)
    ctx->pc = 0x184238u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18423c: 0x2411ff7f  addiu       $s1, $zero, -0x81
    ctx->pc = 0x18423cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x184240: 0x2410ffe0  addiu       $s0, $zero, -0x20
    ctx->pc = 0x184240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x184244: 0x2419ff1f  addiu       $t9, $zero, -0xE1
    ctx->pc = 0x184244u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x184248: 0x1cb5824  and         $t3, $t6, $t3
    ctx->pc = 0x184248u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x18424c: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x18424cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x184250: 0xa48b0002  sh          $t3, 0x2($a0)
    ctx->pc = 0x184250u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x184254: 0x908b0003  lbu         $t3, 0x3($a0)
    ctx->pc = 0x184254u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x184258: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x184258u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x18425c: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x18425cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x184260: 0xa08a0003  sb          $t2, 0x3($a0)
    ctx->pc = 0x184260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x184264: 0xdc8a0000  ld          $t2, 0x0($a0)
    ctx->pc = 0x184264u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184268: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x184268u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18426c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x18426cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x184270: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x184270u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x184274: 0x90880004  lbu         $t0, 0x4($a0)
    ctx->pc = 0x184274u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184278: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x184278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x18427c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x18427cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x184280: 0xa0860004  sb          $a2, 0x4($a0)
    ctx->pc = 0x184280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x184284: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x184284u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184288: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x184288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18428c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x18428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x184290: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x184290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x184294: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x184294u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184298: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x184298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18429c: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x18429cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1842a0: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x1842a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x1842a4: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x1842a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x1842a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1842a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1842ac: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1842acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1842b0: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x1842b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1842b4: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1842b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1842b8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x1842b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1842bc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x1842bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x1842c0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1842c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1842c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1842c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1842c8: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1842c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1842cc: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x1842ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1842d0: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1842d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1842d4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1842d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1842d8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1842d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1842dc: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x1842dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1842e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1842e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1842e4: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1842e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1842e8: 0xdfa50058  ld          $a1, 0x58($sp)
    ctx->pc = 0x1842e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1842ec: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x1842ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1842f0: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1842f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1842f4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1842f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1842f8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1842f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1842fc: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x1842fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x184300: 0xdfa50060  ld          $a1, 0x60($sp)
    ctx->pc = 0x184300u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184304: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x184304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x184308: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x184308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18430c: 0x791824  and         $v1, $v1, $t9
    ctx->pc = 0x18430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 25));
    // 0x184310: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x184310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x184314: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x184314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x184318: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x184318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x18431c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18431cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18432c: 0x3e00008  jr          $ra
    ctx->pc = 0x18432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18432Cu;
        // 0x184330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184334u;
}
