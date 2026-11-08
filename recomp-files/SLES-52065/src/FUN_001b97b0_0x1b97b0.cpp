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

// Function: FUN_001b97b0
// Address: 0x1b97b0 - 0x1b9cd8
void FUN_001b97b0_0x1b97b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b97b0_0x1b97b0");
#endif

    switch (ctx->pc) {
        case 0x1b97f4u: goto label_1b97f4;
        case 0x1b9808u: goto label_1b9808;
        case 0x1b98b4u: goto label_1b98b4;
        case 0x1b9920u: goto label_1b9920;
        case 0x1b99acu: goto label_1b99ac;
        case 0x1b9a38u: goto label_1b9a38;
        case 0x1b9a74u: goto label_1b9a74;
        case 0x1b9ae0u: goto label_1b9ae0;
        case 0x1b9b78u: goto label_1b9b78;
        case 0x1b9bb8u: goto label_1b9bb8;
        case 0x1b9c90u: goto label_1b9c90;
        case 0x1b9cc8u: goto label_1b9cc8;
        default: break;
    }

    ctx->pc = 0x1b97b0u;

    // 0x1b97b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b97b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b97b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b97bc: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1b97c0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B97C0u;
    {
        const bool branch_taken_0x1b97c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97C0u;
        // 0x1b97c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97c0) {
            ctx->pc = 0x1B9810u;
            goto label_1b9810;
        }
    }
    ctx->pc = 0x1B97C8u;
    // 0x1b97c8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1b97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1b97cc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B97CCu;
    {
        const bool branch_taken_0x1b97cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b97cc) {
            ctx->pc = 0x1B9818u;
            goto label_1b9818;
        }
    }
    ctx->pc = 0x1B97D4u;
    // 0x1b97d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b97d8: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1b97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1b97dc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1b97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1b97e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B97E0u;
    {
        const bool branch_taken_0x1b97e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97E0u;
        // 0x1b97e4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97e0) {
            ctx->pc = 0x1B97FCu;
            goto label_1b97fc;
        }
    }
    ctx->pc = 0x1B97E8u;
    // 0x1b97e8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1b97ec: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B97ECu;
    SET_GPR_U32(ctx, 31, 0x1B97F4u);
    ctx->pc = 0x1B97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B97ECu;
    // 0x1b97f0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B97ECu, 0x1B97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97F4u;
label_1b97f4:
    // 0x1b97f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B97F4u;
    {
        const bool branch_taken_0x1b97f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97F4u;
        // 0x1b97f8: 0x8e030078  lw          $v1, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97f4) {
            ctx->pc = 0x1B981Cu;
            goto label_1b981c;
        }
    }
    ctx->pc = 0x1B97FCu;
label_1b97fc:
    // 0x1b97fc: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1b9800: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1B9800u;
    SET_GPR_U32(ctx, 31, 0x1B9808u);
    ctx->pc = 0x1B9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9800u;
    // 0x1b9804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B9800u, 0x1B9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9808u;
label_1b9808:
    // 0x1b9808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9808u;
    {
        const bool branch_taken_0x1b9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9808) {
            ctx->pc = 0x1B9818u;
            goto label_1b9818;
        }
    }
    ctx->pc = 0x1B9810u;
label_1b9810:
    // 0x1b9810: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b9814: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1b9814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_1b9818:
    // 0x1b9818: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1b9818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1b981c:
    // 0x1b981c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1b981cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1b9820: 0x10200104  beqz        $at, . + 4 + (0x104 << 2)
    ctx->pc = 0x1B9820u;
    {
        const bool branch_taken_0x1b9820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9820u;
        // 0x1b9824: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9820) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9828u;
    // 0x1b9828: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b9828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b982c: 0x24841020  addiu       $a0, $a0, 0x1020
    ctx->pc = 0x1b982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x1b9830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b9830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b9834: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b9834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9838: 0x600008  jr          $v1
    ctx->pc = 0x1B9838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9840u: goto label_1b9840;
            case 0x1B9858u: goto label_1b9858;
            case 0x1B98BCu: goto label_1b98bc;
            case 0x1B9948u: goto label_1b9948;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9C04u: goto label_1b9c04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9838u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B9840u;
label_1b9840:
    // 0x1b9840: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9844: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1b9844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x1b9848: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x1b9848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x1b984c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x1b984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x1b9850: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1B9850u;
    {
        const bool branch_taken_0x1b9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9850u;
        // 0x1b9854: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9850) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9858u;
label_1b9858:
    // 0x1b9858: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b985c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1b985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9864: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9868: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b986c: 0x0  nop
    ctx->pc = 0x1b986cu;
    // NOP
    // 0x1b9870: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b9870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b9874: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1b9874u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9878: 0x0  nop
    ctx->pc = 0x1b9878u;
    // NOP
    // 0x1b987c: 0x0  nop
    ctx->pc = 0x1b987cu;
    // NOP
    // 0x1b9880: 0x1810  mfhi        $v1
    ctx->pc = 0x1b9880u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b9884: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9888: 0x0  nop
    ctx->pc = 0x1b9888u;
    // NOP
    // 0x1b988c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b988cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9890: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1b9890u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1b9894: 0x0  nop
    ctx->pc = 0x1b9894u;
    // NOP
    // 0x1b9898: 0x0  nop
    ctx->pc = 0x1b9898u;
    // NOP
    // 0x1b989c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b989cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b98a0: 0x0  nop
    ctx->pc = 0x1b98a0u;
    // NOP
    // 0x1b98a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B98A4u;
    {
        const bool branch_taken_0x1b98a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98A4u;
        // 0x1b98a8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98a4) {
            ctx->pc = 0x1B98B4u;
            goto label_1b98b4;
        }
    }
    ctx->pc = 0x1B98ACu;
    // 0x1b98ac: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1B98ACu;
    {
        const bool branch_taken_0x1b98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98ACu;
        // 0x1b98b0: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98ac) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B98B4u;
label_1b98b4:
    // 0x1b98b4: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1B98B4u;
    {
        const bool branch_taken_0x1b98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B4u;
        // 0x1b98b8: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b4) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B98BCu;
label_1b98bc:
    // 0x1b98bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b98c0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b98c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b98c4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b98c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b98c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b98cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b98ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b98d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b98d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b98d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b98d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b98d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b98dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b98e0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b98e4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b98e8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b98ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b98ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b98f0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b98f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b98f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b98f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b98f8: 0x0  nop
    ctx->pc = 0x1b98f8u;
    // NOP
    // 0x1b98fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b98fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9900: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9904: 0x0  nop
    ctx->pc = 0x1b9904u;
    // NOP
    // 0x1b9908: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b990c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1b990cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1b9910: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1b9910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1b9914: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1b9914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b9918: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9918u;
    SET_GPR_U32(ctx, 31, 0x1B9920u);
    ctx->pc = 0x1B991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9918u;
    // 0x1b991c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9918u, 0x1B9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9920u;
label_1b9920:
    // 0x1b9920: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9924: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9928: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b9928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b992c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b992cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9930: 0x0  nop
    ctx->pc = 0x1b9930u;
    // NOP
    // 0x1b9934: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9934u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9938: 0x0  nop
    ctx->pc = 0x1b9938u;
    // NOP
    // 0x1b993c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b993cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9940: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1B9940u;
    {
        const bool branch_taken_0x1b9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9940u;
        // 0x1b9944: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9940) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9948u;
label_1b9948:
    // 0x1b9948: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b994c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9950: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9954: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b995c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9968: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b996c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b996cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b9970: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9974: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9978: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b997c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b997cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9980: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9984: 0x0  nop
    ctx->pc = 0x1b9984u;
    // NOP
    // 0x1b9988: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9988u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b998c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9990: 0x0  nop
    ctx->pc = 0x1b9990u;
    // NOP
    // 0x1b9994: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9998: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9998u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b999c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1b999cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1b99a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b99a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b99a4: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B99A4u;
    SET_GPR_U32(ctx, 31, 0x1B99ACu);
    ctx->pc = 0x1B99A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99A4u;
    // 0x1b99a8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B99A4u, 0x1B99ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99ACu;
label_1b99ac:
    // 0x1b99ac: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1b99acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1b99b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b99b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b99b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b99b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b99b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b99bc: 0x0  nop
    ctx->pc = 0x1b99bcu;
    // NOP
    // 0x1b99c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b99c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b99c4: 0x0  nop
    ctx->pc = 0x1b99c4u;
    // NOP
    // 0x1b99c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b99c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b99cc: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1B99CCu;
    {
        const bool branch_taken_0x1b99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99CCu;
        // 0x1b99d0: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99cc) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B99D4u;
label_1b99d4:
    // 0x1b99d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b99d8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b99dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b99dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b99e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b99e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b99e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b99e8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b99ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b99ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b99f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b99f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b99f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b99f8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b99fc: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9a00: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9a04: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b9a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9a08: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9a08u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9a0c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9a10: 0x0  nop
    ctx->pc = 0x1b9a10u;
    // NOP
    // 0x1b9a14: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9a14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9a18: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9a1c: 0x0  nop
    ctx->pc = 0x1b9a1cu;
    // NOP
    // 0x1b9a20: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b9a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b9a24: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1b9a24u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1b9a28: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b9a28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b9a2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9a30: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9A30u;
    SET_GPR_U32(ctx, 31, 0x1B9A38u);
    ctx->pc = 0x1B9A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A30u;
    // 0x1b9a34: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9A30u, 0x1B9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A38u;
label_1b9a38:
    // 0x1b9a38: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1b9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1b9a3c: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x1b9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
    // 0x1b9a40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9a44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9a48: 0x0  nop
    ctx->pc = 0x1b9a48u;
    // NOP
    // 0x1b9a4c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9a4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9a50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9a58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9a5c: 0x0  nop
    ctx->pc = 0x1b9a5cu;
    // NOP
    // 0x1b9a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9a64: 0x0  nop
    ctx->pc = 0x1b9a64u;
    // NOP
    // 0x1b9a68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9A68u;
    {
        const bool branch_taken_0x1b9a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9a68) {
            ctx->pc = 0x1B9A74u;
            goto label_1b9a74;
        }
    }
    ctx->pc = 0x1B9A70u;
    // 0x1b9a70: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1b9a70u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1b9a74:
    // 0x1b9a74: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A74u;
        // 0x1b9a78: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9A7Cu;
label_1b9a7c:
    // 0x1b9a7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9a80: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9a84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9a88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9a90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9a94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9a9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9aa0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b9aa4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9aa8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9aac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9ab0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9ab0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9ab4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9ab8: 0x0  nop
    ctx->pc = 0x1b9ab8u;
    // NOP
    // 0x1b9abc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9abcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9ac0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b9ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9ac4: 0x0  nop
    ctx->pc = 0x1b9ac4u;
    // NOP
    // 0x1b9ac8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9acc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9accu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9ad0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1b9ad0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1b9ad4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9ad8: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9AD8u;
    SET_GPR_U32(ctx, 31, 0x1B9AE0u);
    ctx->pc = 0x1B9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AD8u;
    // 0x1b9adc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9AD8u, 0x1B9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AE0u;
label_1b9ae0:
    // 0x1b9ae0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1b9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1b9ae4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9ae8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9aec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9aecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9af0: 0x0  nop
    ctx->pc = 0x1b9af0u;
    // NOP
    // 0x1b9af4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9af4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9af8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9afc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9b00: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1b9b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1b9b04: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1b9b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1b9b08: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1b9b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1b9b0c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1B9B0Cu;
    {
        const bool branch_taken_0x1b9b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B0Cu;
        // 0x1b9b10: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b0c) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9B14u;
label_1b9b14:
    // 0x1b9b14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9b18: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9b1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9b24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9b2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9b38: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b9b3c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9b40: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9b44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b9b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9b48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9b48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9b4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9b50: 0x0  nop
    ctx->pc = 0x1b9b50u;
    // NOP
    // 0x1b9b54: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9b54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9b58: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9b5c: 0x0  nop
    ctx->pc = 0x1b9b5cu;
    // NOP
    // 0x1b9b60: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b9b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b9b64: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1b9b64u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1b9b68: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b9b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b9b6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9b70: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9B70u;
    SET_GPR_U32(ctx, 31, 0x1B9B78u);
    ctx->pc = 0x1B9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B70u;
    // 0x1b9b74: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9B70u, 0x1B9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B78u;
label_1b9b78:
    // 0x1b9b78: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x1b9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x1b9b7c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1b9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1b9b80: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b9b80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b84: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b9b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9b88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b8c: 0x0  nop
    ctx->pc = 0x1b9b8cu;
    // NOP
    // 0x1b9b90: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9b90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9b94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9ba0: 0x0  nop
    ctx->pc = 0x1b9ba0u;
    // NOP
    // 0x1b9ba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9ba8: 0x0  nop
    ctx->pc = 0x1b9ba8u;
    // NOP
    // 0x1b9bac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9BACu;
    {
        const bool branch_taken_0x1b9bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9bac) {
            ctx->pc = 0x1B9BB8u;
            goto label_1b9bb8;
        }
    }
    ctx->pc = 0x1B9BB4u;
    // 0x1b9bb4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1b9bb4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1b9bb8:
    // 0x1b9bb8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1b9bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1b9bbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9bc0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1b9bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1b9bc4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1b9bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1b9bc8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B9BC8u;
    {
        const bool branch_taken_0x1b9bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BC8u;
        // 0x1b9bcc: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bc8) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9BD0u;
label_1b9bd0:
    // 0x1b9bd0: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x1b9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9bd4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1b9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1b9bd8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b9bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9bdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b9bdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9be0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9be4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9be8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9bec: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b9becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9bf0: 0x0  nop
    ctx->pc = 0x1b9bf0u;
    // NOP
    // 0x1b9bf4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1B9BF4u;
    {
        const bool branch_taken_0x1b9bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BF4u;
        // 0x1b9bf8: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bf4) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9BFCu;
    // 0x1b9bfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B9BFCu;
    {
        const bool branch_taken_0x1b9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BFCu;
        // 0x1b9c00: 0xe602009c  swc1        $f2, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bfc) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9C04u;
label_1b9c04:
    // 0x1b9c04: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x1b9c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c08: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1b9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1b9c0c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b9c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9c10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b9c10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9c18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9c1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9c20: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b9c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c24: 0x0  nop
    ctx->pc = 0x1b9c24u;
    // NOP
    // 0x1b9c28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9C28u;
    {
        const bool branch_taken_0x1b9c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C28u;
        // 0x1b9c2c: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c28) {
            ctx->pc = 0x1B9C34u;
            goto label_1b9c34;
        }
    }
    ctx->pc = 0x1B9C30u;
    // 0x1b9c30: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x1b9c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_1b9c34:
    // 0x1b9c34: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x1b9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9c38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c3c: 0x0  nop
    ctx->pc = 0x1b9c3cu;
    // NOP
    // 0x1b9c40: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b9c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c44: 0x0  nop
    ctx->pc = 0x1b9c44u;
    // NOP
    // 0x1b9c48: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x1B9C48u;
    {
        const bool branch_taken_0x1b9c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9c48) {
            ctx->pc = 0x1B9CC8u;
            goto label_1b9cc8;
        }
    }
    ctx->pc = 0x1B9C50u;
    // 0x1b9c50: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x1b9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9c58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c60: 0x0  nop
    ctx->pc = 0x1b9c60u;
    // NOP
    // 0x1b9c64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b9c64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b9c68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c6c: 0x0  nop
    ctx->pc = 0x1b9c6cu;
    // NOP
    // 0x1b9c70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9C70u;
    {
        const bool branch_taken_0x1b9c70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C70u;
        // 0x1b9c74: 0xe60100a4  swc1        $f1, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c70) {
            ctx->pc = 0x1B9C90u;
            goto label_1b9c90;
        }
    }
    ctx->pc = 0x1B9C78u;
    // 0x1b9c78: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9c7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c84: 0x0  nop
    ctx->pc = 0x1b9c84u;
    // NOP
    // 0x1b9c88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9c88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9c8c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1b9c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_1b9c90:
    // 0x1b9c90: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x1b9c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c94: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1b9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1b9c98: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ca0: 0x0  nop
    ctx->pc = 0x1b9ca0u;
    // NOP
    // 0x1b9ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9ca8: 0x0  nop
    ctx->pc = 0x1b9ca8u;
    // NOP
    // 0x1b9cac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9CACu;
    {
        const bool branch_taken_0x1b9cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CACu;
        // 0x1b9cb0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cac) {
            ctx->pc = 0x1B9CC8u;
            goto label_1b9cc8;
        }
    }
    ctx->pc = 0x1B9CB4u;
    // 0x1b9cb4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9cbc: 0x0  nop
    ctx->pc = 0x1b9cbcu;
    // NOP
    // 0x1b9cc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9cc4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1b9cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_1b9cc8:
    // 0x1b9cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD0u;
        // 0x1b9cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9CD8u;
}
