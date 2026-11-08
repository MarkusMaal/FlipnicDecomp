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

// Function: FUN_001861a0
// Address: 0x1861a0 - 0x186390
void FUN_001861a0_0x1861a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001861a0_0x1861a0");
#endif

    switch (ctx->pc) {
        case 0x1861c4u: goto label_1861c4;
        case 0x18630cu: goto label_18630c;
        case 0x186330u: goto label_186330;
        case 0x18634cu: goto label_18634c;
        case 0x186360u: goto label_186360;
        default: break;
    }

    ctx->pc = 0x1861a0u;

    // 0x1861a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1861a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1861a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1861a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1861a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1861ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1861acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1861b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1861b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1861b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1861b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1861b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1861bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1861c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1861c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1861c4:
    // 0x1861c4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1861c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1861c8: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x1861c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x1861cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1861ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1861d0: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1861d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1861d4: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
    ctx->pc = 0x1861D4u;
    {
        const bool branch_taken_0x1861d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861d4) {
            ctx->pc = 0x186360u;
            goto label_186360;
        }
    }
    ctx->pc = 0x1861DCu;
    // 0x1861dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1861e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1861e4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1861e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1861e8: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x1861E8u;
    {
        const bool branch_taken_0x1861e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861e8) {
            ctx->pc = 0x186338u;
            goto label_186338;
        }
    }
    ctx->pc = 0x1861F0u;
    // 0x1861f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1861f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1861f4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1861f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1861f8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1861f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1861fc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1861FCu;
    {
        const bool branch_taken_0x1861fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861fc) {
            ctx->pc = 0x186268u;
            goto label_186268;
        }
    }
    ctx->pc = 0x186204u;
    // 0x186204: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x186208: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x186208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18620c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x186210: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186214: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x186214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186218: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x186218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18621c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18621Cu;
    {
        const bool branch_taken_0x18621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18621c) {
            ctx->pc = 0x18624Cu;
            goto label_18624c;
        }
    }
    ctx->pc = 0x186224u;
    // 0x186224: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x186224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18622c: 0x0  nop
    ctx->pc = 0x18622cu;
    // NOP
    // 0x186230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186234: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x186234u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x186238: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186238u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18623c: 0x0  nop
    ctx->pc = 0x18623cu;
    // NOP
    // 0x186240: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x186240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x186244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186244u;
    {
        const bool branch_taken_0x186244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186244u;
        // 0x186248: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186244) {
            ctx->pc = 0x186260u;
            goto label_186260;
        }
    }
    ctx->pc = 0x18624Cu;
label_18624c:
    // 0x18624c: 0x0  nop
    ctx->pc = 0x18624cu;
    // NOP
    // 0x186250: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x186250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x186254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x186254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x186258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18625c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18625cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_186260:
    // 0x186260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186260u;
    {
        const bool branch_taken_0x186260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186260u;
        // 0x186264: 0xc4740010  lwc1        $f20, 0x10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186260) {
            ctx->pc = 0x18627Cu;
            goto label_18627c;
        }
    }
    ctx->pc = 0x186268u;
label_186268:
    // 0x186268: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18626c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18626cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x186274: 0xc454fff4  lwc1        $f20, -0xC($v0)
    ctx->pc = 0x186274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186278: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x186278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_18627c:
    // 0x18627c: 0x0  nop
    ctx->pc = 0x18627cu;
    // NOP
    // 0x186280: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186284: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x186284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x186288: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x186288u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18628c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x18628Cu;
    {
        const bool branch_taken_0x18628c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18628c) {
            ctx->pc = 0x1862CCu;
            goto label_1862cc;
        }
    }
    ctx->pc = 0x186294u;
    // 0x186294: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x186298: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18629c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1862a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1862a4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1862a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1862a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1862a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1862ac: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1862acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1862b0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1862B0u;
    {
        const bool branch_taken_0x1862b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1862B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862B0u;
        // 0x1862b4: 0xc4600014  lwc1        $f0, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862b0) {
            ctx->pc = 0x1862E4u;
            goto label_1862e4;
        }
    }
    ctx->pc = 0x1862B8u;
    // 0x1862b8: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x1862b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1862bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1862c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1862c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1862c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1862C4u;
    {
        const bool branch_taken_0x1862c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C4u;
        // 0x1862c8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862c4) {
            ctx->pc = 0x1862E4u;
            goto label_1862e4;
        }
    }
    ctx->pc = 0x1862CCu;
label_1862cc:
    // 0x1862cc: 0x0  nop
    ctx->pc = 0x1862ccu;
    // NOP
    // 0x1862d0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1862d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1862d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1862d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1862dc: 0xc440fff4  lwc1        $f0, -0xC($v0)
    ctx->pc = 0x1862dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1862e0: 0x0  nop
    ctx->pc = 0x1862e0u;
    // NOP
label_1862e4:
    // 0x1862e4: 0x0  nop
    ctx->pc = 0x1862e4u;
    // NOP
    // 0x1862e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1862e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1862ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1862ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1862f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1862f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1862f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1862f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1862f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1862fc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1862fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x186300: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x186304: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186304u;
    SET_GPR_U32(ctx, 31, 0x18630Cu);
    ctx->pc = 0x186308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186304u;
    // 0x186308: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186304u, 0x18630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18630Cu;
label_18630c:
    // 0x18630c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x18630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x186310: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x186314: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18631c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18631cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x186320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186324: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x186324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x186328: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186328u;
    SET_GPR_U32(ctx, 31, 0x186330u);
    ctx->pc = 0x18632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186328u;
    // 0x18632c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186328u, 0x186330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186330u;
label_186330:
    // 0x186330: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x186330u;
    {
        const bool branch_taken_0x186330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186330) {
            ctx->pc = 0x186360u;
            goto label_186360;
        }
    }
    ctx->pc = 0x186338u;
label_186338:
    // 0x186338: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x18633c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186344: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186344u;
    SET_GPR_U32(ctx, 31, 0x18634Cu);
    ctx->pc = 0x186348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186344u;
    // 0x186348: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186344u, 0x18634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18634Cu;
label_18634c:
    // 0x18634c: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x18634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x186350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186358: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186358u;
    SET_GPR_U32(ctx, 31, 0x186360u);
    ctx->pc = 0x18635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186358u;
    // 0x18635c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186358u, 0x186360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186360u;
label_186360:
    // 0x186360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186364: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x186364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x186368: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x18636c: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18636Cu;
        // 0x186370: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18636c) {
            ctx->pc = 0x1861C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1861c4;
        }
    }
    ctx->pc = 0x186374u;
    // 0x186374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18637c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18637cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186388: 0x3e00008  jr          $ra
    ctx->pc = 0x186388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186388u;
        // 0x18638c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186390u;
}
