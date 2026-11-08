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

// Function: FUN_00171880
// Address: 0x171880 - 0x171bfc
void FUN_00171880_0x171880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171880_0x171880");
#endif

    switch (ctx->pc) {
        case 0x1718b0u: goto label_1718b0;
        case 0x1718d4u: goto label_1718d4;
        case 0x171a1cu: goto label_171a1c;
        case 0x171a30u: goto label_171a30;
        case 0x171ae0u: goto label_171ae0;
        case 0x171b7cu: goto label_171b7c;
        default: break;
    }

    ctx->pc = 0x171880u;

    // 0x171880: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x171880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x171884: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x171884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x171888: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x171888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17188c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17188cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x171890: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x171890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x171894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x171898: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x171898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17189c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1718a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1718a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1718a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1718a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718a8: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1718A8u;
    {
        const bool branch_taken_0x1718a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718A8u;
        // 0x1718ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718a8) {
            ctx->pc = 0x171BC4u;
            goto label_171bc4;
        }
    }
    ctx->pc = 0x1718B0u;
label_1718b0:
    // 0x1718b0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1718b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1718b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1718b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1718bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1718c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1718c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1718c4: 0xa45821  addu        $t3, $a1, $a0
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1718c8: 0x85640004  lh          $a0, 0x4($t3)
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1718cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1718CCu;
    {
        const bool branch_taken_0x1718cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718CCu;
        // 0x1718d0: 0x2485ffff  addiu       $a1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718cc) {
            ctx->pc = 0x17192Cu;
            goto label_17192c;
        }
    }
    ctx->pc = 0x1718D4u;
label_1718d4:
    // 0x1718d4: 0x0  nop
    ctx->pc = 0x1718d4u;
    // NOP
    // 0x1718d8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1718dc: 0x8b3021  addu        $a2, $a0, $t3
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1718e0: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x1718e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1718e4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1718e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1718e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1718e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1718ec: 0x0  nop
    ctx->pc = 0x1718ecu;
    // NOP
    // 0x1718f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1718f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1718f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1718f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1718f8: 0x0  nop
    ctx->pc = 0x1718f8u;
    // NOP
    // 0x1718fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1718FCu;
    {
        const bool branch_taken_0x1718fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1718fc) {
            ctx->pc = 0x171924u;
            goto label_171924;
        }
    }
    ctx->pc = 0x171904u;
    // 0x171904: 0x84c40008  lh          $a0, 0x8($a2)
    ctx->pc = 0x171904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x171908: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x171908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17190c: 0x0  nop
    ctx->pc = 0x17190cu;
    // NOP
    // 0x171910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171914: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x171914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171918: 0x0  nop
    ctx->pc = 0x171918u;
    // NOP
    // 0x17191c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17191Cu;
    {
        const bool branch_taken_0x17191c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17191c) {
            ctx->pc = 0x17193Cu;
            goto label_17193c;
        }
    }
    ctx->pc = 0x171924u;
label_171924:
    // 0x171924: 0x0  nop
    ctx->pc = 0x171924u;
    // NOP
    // 0x171928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17192c:
    // 0x17192c: 0x0  nop
    ctx->pc = 0x17192cu;
    // NOP
    // 0x171930: 0x65202a  slt         $a0, $v1, $a1
    ctx->pc = 0x171930u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x171934: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x171934u;
    {
        const bool branch_taken_0x171934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x171934) {
            ctx->pc = 0x1718D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1718d4;
        }
    }
    ctx->pc = 0x17193Cu;
label_17193c:
    // 0x17193c: 0x0  nop
    ctx->pc = 0x17193cu;
    // NOP
    // 0x171940: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171944: 0x12b2821  addu        $a1, $t1, $t3
    ctx->pc = 0x171944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x171948: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17194c: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x171950: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x171950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171954: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x171958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17195c: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x171960: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x171964: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x171964u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171968: 0x2468821  addu        $s1, $s2, $a2
    ctx->pc = 0x171968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x17196c: 0x1073023  subu        $a2, $t0, $a3
    ctx->pc = 0x17196cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x171970: 0x85650002  lh          $a1, 0x2($t3)
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x171974: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171978: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x17197c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x171980: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
    // 0x171984: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x171984u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171988: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17198c: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x17198cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x171990: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x171990u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x171994: 0x0  nop
    ctx->pc = 0x171994u;
    // NOP
    // 0x171998: 0x0  nop
    ctx->pc = 0x171998u;
    // NOP
    // 0x17199c: 0x10a40026  beq         $a1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17199Cu;
    {
        const bool branch_taken_0x17199c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x17199c) {
            ctx->pc = 0x171A38u;
            goto label_171a38;
        }
    }
    ctx->pc = 0x1719A4u;
    // 0x1719a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1719A4u;
    {
        const bool branch_taken_0x1719a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1719a4) {
            ctx->pc = 0x1719B4u;
            goto label_1719b4;
        }
    }
    ctx->pc = 0x1719ACu;
    // 0x1719ac: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1719ACu;
    {
        const bool branch_taken_0x1719ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1719ac) {
            ctx->pc = 0x171BBCu;
            goto label_171bbc;
        }
    }
    ctx->pc = 0x1719B4u;
label_1719b4:
    // 0x1719b4: 0x0  nop
    ctx->pc = 0x1719b4u;
    // NOP
    // 0x1719b8: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1719bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1719bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1719c0: 0x25450003  addiu       $a1, $t2, 0x3
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x1719c4: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1719c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1719c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1719c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1719cc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1719ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1719d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1719d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1719d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1719d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1719d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1719d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719dc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1719dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1719e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1719e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1719e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1719e8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1719e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719ec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1719ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1719f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1719f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719f4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1719f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1719f8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1719f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1719fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1719fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a00: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x171a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x171a04: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x171a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a08: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x171a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x171a0c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x171a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a10: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x171a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x171a14: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171A14u;
    SET_GPR_U32(ctx, 31, 0x171A1Cu);
    ctx->pc = 0x171A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A14u;
    // 0x171a18: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171A14u, 0x171A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A1Cu;
label_171a1c:
    // 0x171a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x171a28: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171A28u;
    SET_GPR_U32(ctx, 31, 0x171A30u);
    ctx->pc = 0x171A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A28u;
    // 0x171a2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171A28u, 0x171A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A30u;
label_171a30:
    // 0x171a30: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x171A30u;
    {
        const bool branch_taken_0x171a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a30) {
            ctx->pc = 0x171BBCu;
            goto label_171bbc;
        }
    }
    ctx->pc = 0x171A38u;
label_171a38:
    // 0x171a38: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x171a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x171a3c: 0x25440007  addiu       $a0, $t2, 0x7
    ctx->pc = 0x171a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x171a40: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x171a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x171a44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x171a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x171a48: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x171a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x171a4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171a50: 0x782516c0  lq          $a1, 0x16C0($at)
    ctx->pc = 0x171a50u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2116C0u));
    // 0x171a54: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171a58: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171a5c: 0x70044588  pextlh      $t0, $zero, $a0
    ctx->pc = 0x171a5cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x171a60: 0x71054709  pmulth      $t0, $t0, $a1
    ctx->pc = 0x171a60u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x171a64: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x171a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x171a68: 0x4be1093e  vitof12.xyzw $vf1, $vf1
    ctx->pc = 0x171a68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171a6c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x171a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171a70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171a74: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x171a74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171a78: 0x70024588  pextlh      $t0, $zero, $v0
    ctx->pc = 0x171a78u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x171a7c: 0x71054709  pmulth      $t0, $t0, $a1
    ctx->pc = 0x171a7cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x171a80: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x171a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x171a84: 0x4be1093e  vitof12.xyzw $vf1, $vf1
    ctx->pc = 0x171a84u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171a88: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x171a88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171a8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171a8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171a90: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x171a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171a94: 0x4be4296a  vmul.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x171a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171a98: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171a98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171a9c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171aa0: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171aa4: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x171aa4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x171aa8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x171aa8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171ab0: 0x0  nop
    ctx->pc = 0x171ab0u;
    // NOP
    // 0x171ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171ab8: 0x0  nop
    ctx->pc = 0x171ab8u;
    // NOP
    // 0x171abc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171ABCu;
    {
        const bool branch_taken_0x171abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171abc) {
            ctx->pc = 0x171AD0u;
            goto label_171ad0;
        }
    }
    ctx->pc = 0x171AC4u;
    // 0x171ac4: 0x4be1086c  vsub.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x171ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171ac8: 0x4be4092c  vsub.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x171ac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171acc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171accu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_171ad0:
    // 0x171ad0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171ad4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x171ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171ad8: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171AD8u;
    SET_GPR_U32(ctx, 31, 0x171AE0u);
    ctx->pc = 0x171ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AD8u;
    // 0x171adc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171AD8u, 0x171AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171AE0u;
label_171ae0:
    // 0x171ae0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171ae4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171ae8: 0x4be4216a  vmul.xyzw   $vf5, $vf4, $vf4
    ctx->pc = 0x171ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171aec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171af0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171af4: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171af8: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x171af8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x171afc: 0x4a0003bf  vwaitq
    ctx->pc = 0x171afcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b00: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x171b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b04: 0x4a0002ff  vnop
    ctx->pc = 0x171b04u;
    // NOP operation, no action needed for VU0
    // 0x171b08: 0x4a0002ff  vnop
    ctx->pc = 0x171b08u;
    // NOP operation, no action needed for VU0
    // 0x171b0c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x171b0cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x171b10: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x171b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171b14: 0x4a0003bf  vwaitq
    ctx->pc = 0x171b14u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b18: 0x4be0219c  vmulq.xyzw  $vf6, $vf4, $Q
    ctx->pc = 0x171b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171b1c: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x171b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x171b20: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x171b24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b28: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x171b28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171b2c: 0x4be4296a  vmul.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x171b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b30: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b34: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b38: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b3c: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x171b3cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x171b40: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x171b40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171b48: 0x0  nop
    ctx->pc = 0x171b48u;
    // NOP
    // 0x171b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171b50: 0x0  nop
    ctx->pc = 0x171b50u;
    // NOP
    // 0x171b54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171B54u;
    {
        const bool branch_taken_0x171b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171b54) {
            ctx->pc = 0x171B68u;
            goto label_171b68;
        }
    }
    ctx->pc = 0x171B5Cu;
    // 0x171b5c: 0x4be1086c  vsub.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x171b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x171b60: 0x4be4092c  vsub.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x171b60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171b64: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171b64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_171b68:
    // 0x171b68: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x171b6c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171b70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x171b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b74: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171B74u;
    SET_GPR_U32(ctx, 31, 0x171B7Cu);
    ctx->pc = 0x171B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B74u;
    // 0x171b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171B74u, 0x171B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B7Cu;
label_171b7c:
    // 0x171b7c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x171b80: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x171b80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171b84: 0x4be4216a  vmul.xyzw   $vf5, $vf4, $vf4
    ctx->pc = 0x171b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b88: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x171b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b8c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x171b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b90: 0x4b052943  vaddw.x     $vf5, $vf5, $vf5w
    ctx->pc = 0x171b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171b94: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x171b94u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x171b98: 0x4a0003bf  vwaitq
    ctx->pc = 0x171b98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171b9c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x171b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x171ba0: 0x4a0002ff  vnop
    ctx->pc = 0x171ba0u;
    // NOP operation, no action needed for VU0
    // 0x171ba4: 0x4a0002ff  vnop
    ctx->pc = 0x171ba4u;
    // NOP operation, no action needed for VU0
    // 0x171ba8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x171ba8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x171bac: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x171bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171bb0: 0x4a0003bf  vwaitq
    ctx->pc = 0x171bb0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x171bb4: 0x4be0219c  vmulq.xyzw  $vf6, $vf4, $Q
    ctx->pc = 0x171bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x171bb8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x171bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_171bbc:
    // 0x171bbc: 0x0  nop
    ctx->pc = 0x171bbcu;
    // NOP
    // 0x171bc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_171bc4:
    // 0x171bc4: 0x0  nop
    ctx->pc = 0x171bc4u;
    // NOP
    // 0x171bc8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x171bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x171bcc: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x171bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x171bd0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x171bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171bd4: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x171BD4u;
    {
        const bool branch_taken_0x171bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171bd4) {
            ctx->pc = 0x1718B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1718b0;
        }
    }
    ctx->pc = 0x171BDCu;
    // 0x171bdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x171bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171be0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171be4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x171be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171be8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x171be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171bec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171bf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x171BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BF4u;
        // 0x171bf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171BFCu;
}
