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

// Function: FUN_001fb0f8
// Address: 0x1fb0f8 - 0x1fb38c
void FUN_001fb0f8_0x1fb0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb0f8_0x1fb0f8");
#endif

    switch (ctx->pc) {
        case 0x1fb150u: goto label_1fb150;
        default: break;
    }

    ctx->pc = 0x1fb0f8u;

    // 0x1fb0f8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fb0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb0fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb100: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fb100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb104: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fb104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb108: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb10c: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x1fb110: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1fb110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1fb114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb118: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1fb118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb11c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FB11Cu;
    {
        const bool branch_taken_0x1fb11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB11Cu;
        // 0x1fb120: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb11c) {
            ctx->pc = 0x1FB19Cu;
            goto label_1fb19c;
        }
    }
    ctx->pc = 0x1FB124u;
    // 0x1fb124: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb128: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb12c: 0x0  nop
    ctx->pc = 0x1fb12cu;
    // NOP
    // 0x1fb130: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB130u;
    {
        const bool branch_taken_0x1fb130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB130u;
        // 0x1fb134: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb130) {
            ctx->pc = 0x1FB1A0u;
            goto label_1fb1a0;
        }
    }
    ctx->pc = 0x1FB138u;
    // 0x1fb138: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fb138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb13c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1fb13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1fb140: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FB140u;
    {
        const bool branch_taken_0x1fb140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB140u;
        // 0x1fb144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb140) {
            ctx->pc = 0x1FB170u;
            goto label_1fb170;
        }
    }
    ctx->pc = 0x1FB148u;
    // 0x1fb148: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1FB148u;
    SET_GPR_U32(ctx, 31, 0x1FB150u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1FB148u, 0x1FB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB150u;
label_1fb150:
    // 0x1fb150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb154: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb158: 0x0  nop
    ctx->pc = 0x1fb158u;
    // NOP
    // 0x1fb15c: 0x0  nop
    ctx->pc = 0x1fb15cu;
    // NOP
    // 0x1fb160: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fb160u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fb164: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1FB164u;
    {
        const bool branch_taken_0x1fb164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB164u;
        // 0x1fb168: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb164) {
            ctx->pc = 0x1FB384u;
            goto label_1fb384;
        }
    }
    ctx->pc = 0x1FB16Cu;
    // 0x1fb16c: 0x0  nop
    ctx->pc = 0x1fb16cu;
    // NOP
label_1fb170:
    // 0x1fb170: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB170u;
    {
        const bool branch_taken_0x1fb170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB170u;
        // 0x1fb174: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb170) {
            ctx->pc = 0x1FB194u;
            goto label_1fb194;
        }
    }
    ctx->pc = 0x1FB178u;
    // 0x1fb178: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fb178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb17c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb180: 0x0  nop
    ctx->pc = 0x1fb180u;
    // NOP
    // 0x1fb184: 0x0  nop
    ctx->pc = 0x1fb184u;
    // NOP
    // 0x1fb188: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1fb188u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1fb18c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1FB18Cu;
    {
        const bool branch_taken_0x1fb18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb18c) {
            ctx->pc = 0x1FB384u;
            goto label_1fb384;
        }
    }
    ctx->pc = 0x1FB194u;
label_1fb194:
    // 0x1fb194: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1FB194u;
    {
        const bool branch_taken_0x1fb194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB194u;
        // 0x1fb198: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb194) {
            ctx->pc = 0x1FB380u;
            goto label_1fb380;
        }
    }
    ctx->pc = 0x1FB19Cu;
label_1fb19c:
    // 0x1fb19c: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_1fb1a0:
    // 0x1fb1a0: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x1fb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x1fb1a4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1fb1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb1a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB1A8u;
    {
        const bool branch_taken_0x1fb1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1a8) {
            ctx->pc = 0x1FB1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB1A8u;
            // 0x1fb1ac: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB1ECu;
            goto label_1fb1ec;
        }
    }
    ctx->pc = 0x1FB1B0u;
    // 0x1fb1b0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB1B0u;
    {
        const bool branch_taken_0x1fb1b0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fb1b0) {
            ctx->pc = 0x1FB1C0u;
            goto label_1fb1c0;
        }
    }
    ctx->pc = 0x1FB1B8u;
    // 0x1fb1b8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1fb1b8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1fb1bc: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1fb1bcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_1fb1c0:
    // 0x1fb1c0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1fb1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1fb1c4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1fb1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1fb1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb1cc: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x1fb1d0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1fb1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1fb1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb1d8: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x1fb1d8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1fb1dc: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x1fb1dcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1fb1e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fb1e4: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x1fb1e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x1fb1e8: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x1fb1e8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1fb1ec:
    // 0x1fb1ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb1f0: 0x24624d20  addiu       $v0, $v1, 0x4D20
    ctx->pc = 0x1fb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
    // 0x1fb1f4: 0xc4694d20  lwc1        $f9, 0x4D20($v1)
    ctx->pc = 0x1fb1f4u;
    { uint32_t bits = FAST_READ32(0x224D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1fb1f8: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1fb1f8u;
    { uint32_t bits = FAST_READ32(0x224D50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb1fc: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x1fb200: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x1fb200u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x1fb204: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1fb204u;
    { uint32_t bits = FAST_READ32(0x224D4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fb208: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1fb208u;
    { uint32_t bits = FAST_READ32(0x224D48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fb20c: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x1fb20cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x1fb210: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1fb210u;
    { uint32_t bits = FAST_READ32(0x224D44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb214: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x1fb214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x1fb218: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1fb218u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1fb21c: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1fb21cu;
    { uint32_t bits = FAST_READ32(0x224D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fb220: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1fb220u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x1fb224: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1fb224u;
    { uint32_t bits = FAST_READ32(0x224D3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb228: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x1fb228u;
    { uint32_t bits = FAST_READ32(0x224D38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1fb22c: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x1fb22cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x1fb230: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1fb230u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1fb234: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1fb234u;
    { uint32_t bits = FAST_READ32(0x224D34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb238: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1fb238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1fb23c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x1fb23cu;
    { uint32_t bits = FAST_READ32(0x224D30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb240: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x1fb240u;
    { uint32_t bits = FAST_READ32(0x224D2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fb244: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1fb244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb248: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x1fb248u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x1fb24c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x1fb24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1fb250: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x1fb250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x1fb254: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x1fb254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1fb258: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1fb258u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1fb25c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fb25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fb260: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x1fb260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x1fb264: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x1fb264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x1fb268: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x1fb268u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1fb26c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fb26cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fb270: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x1fb270u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x1fb274: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x1fb274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x1fb278: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1fb278u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1fb27c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1fb27cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1fb280: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1fb280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1fb284: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1fb284u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x1fb288: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x1fb288u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x1fb28c: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x1fb28cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x1fb290: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x1fb290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x1fb294: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x1fb294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1fb298: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x1fb298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1fb29c: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x1fb29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1fb2a0: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1fb2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1fb2a4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x1fb2a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1fb2a8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x1fb2a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x1fb2ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB2ACu;
    {
        const bool branch_taken_0x1fb2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2ACu;
        // 0x1fb2b0: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2ac) {
            ctx->pc = 0x1FB300u;
            goto label_1fb300;
        }
    }
    ctx->pc = 0x1FB2B4u;
    // 0x1fb2b4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1fb2b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fb2b8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1fb2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1fb2bc: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x1fb2bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x1fb2c0: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x1fb2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x1fb2c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fb2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fb2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb2cc: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x1fb2ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x1fb2d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb2d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fb2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb2d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fb2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fb2dc: 0x0  nop
    ctx->pc = 0x1fb2dcu;
    // NOP
    // 0x1fb2e0: 0x0  nop
    ctx->pc = 0x1fb2e0u;
    // NOP
    // 0x1fb2e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fb2e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb2e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fb2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fb2ec: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1fb2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fb2f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fb2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1fb2f4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1fb2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1fb2f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB2F8u;
    {
        const bool branch_taken_0x1fb2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2F8u;
        // 0x1fb2fc: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2f8) {
            ctx->pc = 0x1FB380u;
            goto label_1fb380;
        }
    }
    ctx->pc = 0x1FB300u;
label_1fb300:
    // 0x1fb300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb304: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FB304u;
    {
        const bool branch_taken_0x1fb304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB304u;
        // 0x1fb308: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb304) {
            ctx->pc = 0x1FB380u;
            goto label_1fb380;
        }
    }
    ctx->pc = 0x1FB30Cu;
    // 0x1fb30c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x1fb30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fb310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb314: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fb318: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1fb318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1fb31c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fb320: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1fb320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1fb324: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x1fb324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1fb328: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb32c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb330: 0x0  nop
    ctx->pc = 0x1fb330u;
    // NOP
    // 0x1fb334: 0x0  nop
    ctx->pc = 0x1fb334u;
    // NOP
    // 0x1fb338: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x1fb338u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1fb33c: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x1fb33cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1fb340: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1fb340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1fb344: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fb344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb348: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fb34c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb350: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x1fb350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1fb354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb35c: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x1fb35cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fb360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb364: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1fb364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1fb368: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1fb368u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb36c: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x1fb36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1fb370: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fb370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fb374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb378: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fb37c: 0x0  nop
    ctx->pc = 0x1fb37cu;
    // NOP
label_1fb380:
    // 0x1fb380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb384:
    // 0x1fb384: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB384u;
        // 0x1fb388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB38Cu;
}
