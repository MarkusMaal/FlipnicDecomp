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

// Function: FUN_0016f480
// Address: 0x16f480 - 0x16f678
void FUN_0016f480_0x16f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f480_0x16f480");
#endif

    ctx->pc = 0x16f480u;

    // 0x16f480: 0x24a2fffa  addiu       $v0, $a1, -0x6
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x16f484: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x16f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16f488: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f48c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16f490: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16f494: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x16f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f498: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x16f498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16f49c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x16f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f4a0: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x16f4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16f4a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f4a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f4a8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f4a8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f4ac: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f4b0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f4b8: 0x0  nop
    ctx->pc = 0x16f4b8u;
    // NOP
    // 0x16f4bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f4c0: 0x0  nop
    ctx->pc = 0x16f4c0u;
    // NOP
    // 0x16f4c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F4C4u;
    {
        const bool branch_taken_0x16f4c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4C4u;
        // 0x16f4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4c4) {
            ctx->pc = 0x16F4D0u;
            goto label_16f4d0;
        }
    }
    ctx->pc = 0x16F4CCu;
    // 0x16f4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f4d0:
    // 0x16f4d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f4d4: 0x14440027  bne         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16F4D4u;
    {
        const bool branch_taken_0x16f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x16f4d4) {
            ctx->pc = 0x16F574u;
            goto label_16f574;
        }
    }
    ctx->pc = 0x16F4DCu;
    // 0x16f4dc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x16f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f4e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x16f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f4e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f4e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f4e8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f4e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f4ec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f4f0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f4f8: 0x0  nop
    ctx->pc = 0x16f4f8u;
    // NOP
    // 0x16f4fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f500: 0x0  nop
    ctx->pc = 0x16f500u;
    // NOP
    // 0x16f504: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F504u;
    {
        const bool branch_taken_0x16f504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f504) {
            ctx->pc = 0x16F514u;
            goto label_16f514;
        }
    }
    ctx->pc = 0x16F50Cu;
    // 0x16f50c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F50Cu;
    {
        const bool branch_taken_0x16f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F50Cu;
        // 0x16f510: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f50c) {
            ctx->pc = 0x16F51Cu;
            goto label_16f51c;
        }
    }
    ctx->pc = 0x16F514u;
label_16f514:
    // 0x16f514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f518: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f51c:
    // 0x16f51c: 0x14880016  bne         $a0, $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16F51Cu;
    {
        const bool branch_taken_0x16f51c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x16F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F51Cu;
        // 0x16f520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f51c) {
            ctx->pc = 0x16F578u;
            goto label_16f578;
        }
    }
    ctx->pc = 0x16F524u;
    // 0x16f524: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x16f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f528: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x16f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f52c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f530: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f530u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f534: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f538: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f540: 0x0  nop
    ctx->pc = 0x16f540u;
    // NOP
    // 0x16f544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f548: 0x0  nop
    ctx->pc = 0x16f548u;
    // NOP
    // 0x16f54c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F54Cu;
    {
        const bool branch_taken_0x16f54c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f54c) {
            ctx->pc = 0x16F55Cu;
            goto label_16f55c;
        }
    }
    ctx->pc = 0x16F554u;
    // 0x16f554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F554u;
    {
        const bool branch_taken_0x16f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F554u;
        // 0x16f558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f554) {
            ctx->pc = 0x16F564u;
            goto label_16f564;
        }
    }
    ctx->pc = 0x16F55Cu;
label_16f55c:
    // 0x16f55c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16f55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f564:
    // 0x16f564: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F564u;
    {
        const bool branch_taken_0x16f564 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f564) {
            ctx->pc = 0x16F574u;
            goto label_16f574;
        }
    }
    ctx->pc = 0x16F56Cu;
    // 0x16f56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F56Cu;
    {
        const bool branch_taken_0x16f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f56c) {
            ctx->pc = 0x16F578u;
            goto label_16f578;
        }
    }
    ctx->pc = 0x16F574u;
label_16f574:
    // 0x16f574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f578:
    // 0x16f578: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x16F578u;
    {
        const bool branch_taken_0x16f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f578) {
            ctx->pc = 0x16F66Cu;
            goto label_16f66c;
        }
    }
    ctx->pc = 0x16F580u;
    // 0x16f580: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x16f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f584: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f588: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f58c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f58cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f590: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f594: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f59c: 0x0  nop
    ctx->pc = 0x16f59cu;
    // NOP
    // 0x16f5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f5a4: 0x0  nop
    ctx->pc = 0x16f5a4u;
    // NOP
    // 0x16f5a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F5A8u;
    {
        const bool branch_taken_0x16f5a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A8u;
        // 0x16f5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5a8) {
            ctx->pc = 0x16F5B4u;
            goto label_16f5b4;
        }
    }
    ctx->pc = 0x16F5B0u;
    // 0x16f5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f5b4:
    // 0x16f5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5b8: 0x14440027  bne         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16F5B8u;
    {
        const bool branch_taken_0x16f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x16f5b8) {
            ctx->pc = 0x16F658u;
            goto label_16f658;
        }
    }
    ctx->pc = 0x16F5C0u;
    // 0x16f5c0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x16f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f5c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16f5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f5c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f5cc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f5ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f5d0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f5d4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f5dc: 0x0  nop
    ctx->pc = 0x16f5dcu;
    // NOP
    // 0x16f5e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f5e4: 0x0  nop
    ctx->pc = 0x16f5e4u;
    // NOP
    // 0x16f5e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F5E8u;
    {
        const bool branch_taken_0x16f5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f5e8) {
            ctx->pc = 0x16F5F8u;
            goto label_16f5f8;
        }
    }
    ctx->pc = 0x16F5F0u;
    // 0x16f5f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F5F0u;
    {
        const bool branch_taken_0x16f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5F0u;
        // 0x16f5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5f0) {
            ctx->pc = 0x16F600u;
            goto label_16f600;
        }
    }
    ctx->pc = 0x16F5F8u;
label_16f5f8:
    // 0x16f5f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f600:
    // 0x16f600: 0x14850016  bne         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x16F600u;
    {
        const bool branch_taken_0x16f600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F600u;
        // 0x16f604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f600) {
            ctx->pc = 0x16F65Cu;
            goto label_16f65c;
        }
    }
    ctx->pc = 0x16F608u;
    // 0x16f608: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x16f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f60c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f614: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f614u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f618: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f61c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f624: 0x0  nop
    ctx->pc = 0x16f624u;
    // NOP
    // 0x16f628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f62c: 0x0  nop
    ctx->pc = 0x16f62cu;
    // NOP
    // 0x16f630: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F630u;
    {
        const bool branch_taken_0x16f630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f630) {
            ctx->pc = 0x16F640u;
            goto label_16f640;
        }
    }
    ctx->pc = 0x16F638u;
    // 0x16f638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F638u;
    {
        const bool branch_taken_0x16f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F638u;
        // 0x16f63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f638) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F640u;
label_16f640:
    // 0x16f640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f648:
    // 0x16f648: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F648u;
    {
        const bool branch_taken_0x16f648 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f648) {
            ctx->pc = 0x16F658u;
            goto label_16f658;
        }
    }
    ctx->pc = 0x16F650u;
    // 0x16f650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F650u;
    {
        const bool branch_taken_0x16f650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f650) {
            ctx->pc = 0x16F65Cu;
            goto label_16f65c;
        }
    }
    ctx->pc = 0x16F658u;
label_16f658:
    // 0x16f658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f65c:
    // 0x16f65c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F65Cu;
    {
        const bool branch_taken_0x16f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f65c) {
            ctx->pc = 0x16F66Cu;
            goto label_16f66c;
        }
    }
    ctx->pc = 0x16F664u;
    // 0x16f664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F664u;
    {
        const bool branch_taken_0x16f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F664u;
        // 0x16f668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f664) {
            ctx->pc = 0x16F670u;
            goto label_16f670;
        }
    }
    ctx->pc = 0x16F66Cu;
label_16f66c:
    // 0x16f66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f670:
    // 0x16f670: 0x3e00008  jr          $ra
    ctx->pc = 0x16F670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F678u;
}
