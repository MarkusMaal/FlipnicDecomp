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

// Function: entry_001371d4
// Address: 0x1371d4 - 0x1373c4
void entry_001371d4_0x1371d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001371d4_0x1371d4");
#endif

    ctx->pc = 0x1371d4u;

label_1371d4:
    // 0x1371d4: 0x8f9085b0  lw          $s0, -0x7A50($gp)
    ctx->pc = 0x1371d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371d8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1371d8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1371dc: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x1371dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1371e0: 0x256d0002  addiu       $t5, $t3, 0x2
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1371e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1371e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1371e8: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1371e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1371ec: 0x256e0003  addiu       $t6, $t3, 0x3
    ctx->pc = 0x1371ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1371f0: 0x256f0004  addiu       $t7, $t3, 0x4
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1371f4: 0x25710005  addiu       $s1, $t3, 0x5
    ctx->pc = 0x1371f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x1371f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1371fc: 0x11c100  sll         $t8, $s1, 4
    ctx->pc = 0x1371fcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x137200: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x137200u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x137204: 0x20c8021  addu        $s0, $s0, $t4
    ctx->pc = 0x137204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x137208: 0x25710006  addiu       $s1, $t3, 0x6
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x13720c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x137210: 0x11c900  sll         $t9, $s1, 4
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x137214: 0x8f9385b0  lw          $s3, -0x7A50($gp)
    ctx->pc = 0x137214u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137218: 0x25700007  addiu       $s0, $t3, 0x7
    ctx->pc = 0x137218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x13721c: 0x25710008  addiu       $s1, $t3, 0x8
    ctx->pc = 0x13721cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x137220: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x137220u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x137224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137228: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x13722c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x13722cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x137230: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x137230u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x137234: 0x29520008  slti        $s2, $t2, 0x8
    ctx->pc = 0x137234u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x137238: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x137238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x13723c: 0x26c9821  addu        $s3, $s3, $t4
    ctx->pc = 0x13723cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x137240: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x137240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x137244: 0x8f9385b0  lw          $s3, -0x7A50($gp)
    ctx->pc = 0x137244u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137248: 0x26c9821  addu        $s3, $s3, $t4
    ctx->pc = 0x137248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x13724c: 0xae680008  sw          $t0, 0x8($s3)
    ctx->pc = 0x13724cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 8));
    // 0x137250: 0x8f9385b0  lw          $s3, -0x7A50($gp)
    ctx->pc = 0x137250u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137254: 0x26c6021  addu        $t4, $s3, $t4
    ctx->pc = 0x137254u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x137258: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137258u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13725c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137260: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x137260u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x137264: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x137264u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x137268: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137268u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13726c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x137270: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137274: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137278: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x13727c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13727cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137280: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137280u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137284: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x137284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x137288: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137288u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13728c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13728cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137290: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x137290u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x137294: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x137294u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x137298: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137298u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13729c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x13729cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1372a0: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x1372a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x1372a4: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372a8: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1372a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1372ac: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x1372acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x1372b0: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372b4: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1372b8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1372b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x1372bc: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372c0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372c4: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x1372c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x1372c8: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372cc: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372d0: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x1372d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x1372d4: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372d8: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372dc: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x1372dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x1372e0: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372e4: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372e8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1372e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x1372ec: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372f0: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x1372f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x1372f4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x1372f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x1372f8: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372fc: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x1372fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x137300: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137304: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137308: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x13730c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13730cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137310: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137310u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137314: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x137314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x137318: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137318u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13731c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13731cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137320: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x137324: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x137324u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x137328: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13732c: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x137330: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137334: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137334u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137338: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x137338u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x13733c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13733cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137340: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137340u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137344: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x137344u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x137348: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137348u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13734c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137350: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x137354: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x137354u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x137358: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13735c: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x137360: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137364: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137364u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137368: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x137368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x13736c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13736cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137370: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137374: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x137374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x137378: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137378u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13737c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13737cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137380: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x137380u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x137384: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x137384u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x137388: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13738c: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x137390: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137394: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137398: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x137398u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x13739c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13739cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x1373a0: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1373a4: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x1373a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1373a8: 0x1640ff8a  bnez        $s2, . + 4 + (-0x76 << 2)
    ctx->pc = 0x1373A8u;
    {
        const bool branch_taken_0x1373a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1373ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373A8u;
        // 0x1373ac: 0xad80000c  sw          $zero, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373a8) {
            ctx->pc = 0x1371D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1371d4;
        }
    }
    ctx->pc = 0x1373B0u;
    // 0x1373b0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1373b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1373b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373b8: 0x24426da0  addiu       $v0, $v0, 0x6DA0
    ctx->pc = 0x1373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28064));
    // 0x1373bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1373bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373c0: 0xaf8285c0  sw          $v0, -0x7A40($gp)
    ctx->pc = 0x1373c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 2));
    ctx->pc = 0x1373c4u;
}
