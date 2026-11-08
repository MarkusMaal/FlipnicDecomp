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

// Function: FUN_001655a0
// Address: 0x1655a0 - 0x1657dc
void FUN_001655a0_0x1655a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001655a0_0x1655a0");
#endif

    switch (ctx->pc) {
        case 0x1656c4u: goto label_1656c4;
        case 0x1657a4u: goto label_1657a4;
        case 0x1657bcu: goto label_1657bc;
        default: break;
    }

    ctx->pc = 0x1655a0u;

label_1655a0:
    // 0x1655a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1655a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1655a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1655a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1655a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1655a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1655ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1655acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1655b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1655b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1655b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1655b8: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x1655b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1655bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1655bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1655c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1655c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1655c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1655c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1655c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655cc: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1655ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1655d0: 0x1420007a  bnez        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x1655D0u;
    {
        const bool branch_taken_0x1655d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1655D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D0u;
        // 0x1655d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655d0) {
            ctx->pc = 0x1657BCu;
            goto label_1657bc;
        }
    }
    ctx->pc = 0x1655D8u;
    // 0x1655d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1655d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1655dc: 0x16830021  bne         $s4, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1655DCu;
    {
        const bool branch_taken_0x1655dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1655E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655DCu;
        // 0x1655e0: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655dc) {
            ctx->pc = 0x165664u;
            goto label_165664;
        }
    }
    ctx->pc = 0x1655E4u;
    // 0x1655e4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1655e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1655e8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1655e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1655ec: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1655f0: 0x2672821  addu        $a1, $s3, $a3
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1655f4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1655f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1655f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1655f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1655fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1655fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165600: 0x0  nop
    ctx->pc = 0x165600u;
    // NOP
    // 0x165604: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165604u;
    {
        const bool branch_taken_0x165604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165604) {
            ctx->pc = 0x165614u;
            goto label_165614;
        }
    }
    ctx->pc = 0x16560Cu;
    // 0x16560c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16560Cu;
    {
        const bool branch_taken_0x16560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16560Cu;
        // 0x165610: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16560c) {
            ctx->pc = 0x165630u;
            goto label_165630;
        }
    }
    ctx->pc = 0x165614u;
label_165614:
    // 0x165614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x165614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165618: 0x0  nop
    ctx->pc = 0x165618u;
    // NOP
    // 0x16561c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16561Cu;
    {
        const bool branch_taken_0x16561c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16561Cu;
        // 0x165620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16561c) {
            ctx->pc = 0x165630u;
            goto label_165630;
        }
    }
    ctx->pc = 0x165624u;
    // 0x165624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165624u;
    {
        const bool branch_taken_0x165624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165624u;
        // 0x165628: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165624) {
            ctx->pc = 0x165630u;
            goto label_165630;
        }
    }
    ctx->pc = 0x16562Cu;
    // 0x16562c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16562cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165630:
    // 0x165630: 0x18600062  blez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x165630u;
    {
        const bool branch_taken_0x165630 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x165630) {
            ctx->pc = 0x1657BCu;
            goto label_1657bc;
        }
    }
    ctx->pc = 0x165638u;
    // 0x165638: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x165638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x16563c: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x165640: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x165640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x165644: 0x2472821  addu        $a1, $s2, $a3
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x165648: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x165648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16564c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165650: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x165650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x165654: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x165654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x165658: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x165658u;
    {
        const bool branch_taken_0x165658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165658u;
        // 0x16565c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165658) {
            ctx->pc = 0x1657C0u;
            goto label_1657c0;
        }
    }
    ctx->pc = 0x165660u;
    // 0x165660: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x165660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_165664:
    // 0x165664: 0x2634821  addu        $t1, $s3, $v1
    ctx->pc = 0x165664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x165668: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x165668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16566c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x16566Cu;
    {
        const bool branch_taken_0x16566c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x165670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16566Cu;
        // 0x165670: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16566c) {
            ctx->pc = 0x16567Cu;
            goto label_16567c;
        }
    }
    ctx->pc = 0x165674u;
    // 0x165674: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x165678: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_16567c:
    // 0x16567c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x165680: 0x2435021  addu        $t2, $s2, $v1
    ctx->pc = 0x165680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x165684: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x165684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165688: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x165688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16568c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x165690: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x165694: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x165694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165698: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x165698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16569c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1656a0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1656a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1656a4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1656a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1656a8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1656ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1656acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1656b0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1656b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1656b4: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1656B4u;
    {
        const bool branch_taken_0x1656b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656B4u;
        // 0x1656b8: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656b4) {
            ctx->pc = 0x16575Cu;
            goto label_16575c;
        }
    }
    ctx->pc = 0x1656BCu;
    // 0x1656bc: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1656c0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1656c4:
    // 0x1656c4: 0x2662821  addu        $a1, $s3, $a2
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1656c8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1656c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1656cc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1656ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1656d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1656d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1656d4: 0x0  nop
    ctx->pc = 0x1656d4u;
    // NOP
    // 0x1656d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1656D8u;
    {
        const bool branch_taken_0x1656d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1656d8) {
            ctx->pc = 0x1656E8u;
            goto label_1656e8;
        }
    }
    ctx->pc = 0x1656E0u;
    // 0x1656e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1656E0u;
    {
        const bool branch_taken_0x1656e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656E0u;
        // 0x1656e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656e0) {
            ctx->pc = 0x165704u;
            goto label_165704;
        }
    }
    ctx->pc = 0x1656E8u;
label_1656e8:
    // 0x1656e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1656e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1656ec: 0x0  nop
    ctx->pc = 0x1656ecu;
    // NOP
    // 0x1656f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1656F0u;
    {
        const bool branch_taken_0x1656f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1656f0) {
            ctx->pc = 0x165700u;
            goto label_165700;
        }
    }
    ctx->pc = 0x1656F8u;
    // 0x1656f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1656F8u;
    {
        const bool branch_taken_0x1656f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656F8u;
        // 0x1656fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656f8) {
            ctx->pc = 0x165704u;
            goto label_165704;
        }
    }
    ctx->pc = 0x165700u;
label_165700:
    // 0x165700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165704:
    // 0x165704: 0x0  nop
    ctx->pc = 0x165704u;
    // NOP
    // 0x165708: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x165708u;
    {
        const bool branch_taken_0x165708 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x165708) {
            ctx->pc = 0x165748u;
            goto label_165748;
        }
    }
    ctx->pc = 0x165710u;
    // 0x165710: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x165714: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165718: 0x1090000b  beq         $a0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x165718u;
    {
        const bool branch_taken_0x165718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x16571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165718u;
        // 0x16571c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165718) {
            ctx->pc = 0x165748u;
            goto label_165748;
        }
    }
    ctx->pc = 0x165720u;
    // 0x165720: 0x2681021  addu        $v0, $s3, $t0
    ctx->pc = 0x165720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x165724: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x165724u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x165728: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x165728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16572c: 0x2486021  addu        $t4, $s2, $t0
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x165730: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x165730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x165734: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x165734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x165738: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x16573c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x16573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x165740: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x165740u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x165744: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x165744u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
label_165748:
    // 0x165748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16574c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x16574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x165750: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x165754: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x165754u;
    {
        const bool branch_taken_0x165754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165754u;
        // 0x165758: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165754) {
            ctx->pc = 0x1656C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1656c4;
        }
    }
    ctx->pc = 0x16575Cu;
label_16575c:
    // 0x16575c: 0x0  nop
    ctx->pc = 0x16575cu;
    // NOP
    // 0x165760: 0x1207000d  beq         $s0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x165760u;
    {
        const bool branch_taken_0x165760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x165764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165760u;
        // 0x165764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165760) {
            ctx->pc = 0x165798u;
            goto label_165798;
        }
    }
    ctx->pc = 0x165768u;
    // 0x165768: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16576c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x165770: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x165774: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x165774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x165778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16577c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x16577cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x165780: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x165780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x165784: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x165784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x165788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x165788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16578c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x16578cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x165790: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x165790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x165794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165798:
    // 0x165798: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x165798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16579c: 0xc059568  jal         func_1655A0
    ctx->pc = 0x16579Cu;
    SET_GPR_U32(ctx, 31, 0x1657A4u);
    ctx->pc = 0x1657A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16579Cu;
    // 0x1657a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    goto label_1655a0;
    ctx->pc = 0x1657A4u;
label_1657a4:
    // 0x1657a4: 0x2911023  subu        $v0, $s4, $s1
    ctx->pc = 0x1657a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1657a8: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x1657a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1657ac: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1657b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1657b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b4: 0xc059568  jal         func_1655A0
    ctx->pc = 0x1657B4u;
    SET_GPR_U32(ctx, 31, 0x1657BCu);
    ctx->pc = 0x1657B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657B4u;
    // 0x1657b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    goto label_1655a0;
    ctx->pc = 0x1657BCu;
label_1657bc:
    // 0x1657bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1657bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1657c0:
    // 0x1657c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1657c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1657c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1657c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1657c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1657c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1657cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1657ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1657d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1657d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1657d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1657D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D4u;
        // 0x1657d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1657DCu;
}
