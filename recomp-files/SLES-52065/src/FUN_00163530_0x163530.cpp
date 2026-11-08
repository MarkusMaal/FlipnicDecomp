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

// Function: FUN_00163530
// Address: 0x163530 - 0x1636d8
void FUN_00163530_0x163530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00163530_0x163530");
#endif

    switch (ctx->pc) {
        case 0x163588u: goto label_163588;
        case 0x1635ecu: goto label_1635ec;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636c4u: goto label_1636c4;
        default: break;
    }

    ctx->pc = 0x163530u;

    // 0x163530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163534: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x163534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x163538: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16353c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163548: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163548u;
    {
        const bool branch_taken_0x163548 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x16354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163548u;
        // 0x16354c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163548) {
            ctx->pc = 0x163560u;
            goto label_163560;
        }
    }
    ctx->pc = 0x163550u;
    // 0x163550: 0x86230218  lh          $v1, 0x218($s1)
    ctx->pc = 0x163550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x163554: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x163554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x163558: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x163558u;
    {
        const bool branch_taken_0x163558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163558u;
        // 0x16355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163558) {
            ctx->pc = 0x163580u;
            goto label_163580;
        }
    }
    ctx->pc = 0x163560u;
label_163560:
    // 0x163560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163564: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x163564u;
    {
        const bool branch_taken_0x163564 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x163568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163564u;
        // 0x163568: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163564) {
            ctx->pc = 0x163594u;
            goto label_163594;
        }
    }
    ctx->pc = 0x16356Cu;
    // 0x16356c: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x163570: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x163570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x163574: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163574u;
    {
        const bool branch_taken_0x163574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163574) {
            ctx->pc = 0x163590u;
            goto label_163590;
        }
    }
    ctx->pc = 0x16357Cu;
    // 0x16357c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163580:
    // 0x163580: 0xc055c40  jal         func_157100
    ctx->pc = 0x163580u;
    SET_GPR_U32(ctx, 31, 0x163588u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x163580u, 0x163588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163588u;
label_163588:
    // 0x163588: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x163588u;
    {
        const bool branch_taken_0x163588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163588u;
        // 0x16358c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163588) {
            ctx->pc = 0x1636B0u;
            goto label_1636b0;
        }
    }
    ctx->pc = 0x163590u;
label_163590:
    // 0x163590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163594:
    // 0x163594: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x163594u;
    {
        const bool branch_taken_0x163594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x163598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163594u;
        // 0x163598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163594) {
            ctx->pc = 0x1635CCu;
            goto label_1635cc;
        }
    }
    ctx->pc = 0x16359Cu;
    // 0x16359c: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1635a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1635a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1635a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1635A4u;
    {
        const bool branch_taken_0x1635a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1635a4) {
            ctx->pc = 0x1635C8u;
            goto label_1635c8;
        }
    }
    ctx->pc = 0x1635ACu;
    // 0x1635ac: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x1635acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1635b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1635b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1635b8: 0x0  nop
    ctx->pc = 0x1635b8u;
    // NOP
    // 0x1635bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1635bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1635c0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1635C0u;
    {
        const bool branch_taken_0x1635c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635C0u;
        // 0x1635c4: 0xe60002a0  swc1        $f0, 0x2A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635c0) {
            ctx->pc = 0x1636ACu;
            goto label_1636ac;
        }
    }
    ctx->pc = 0x1635C8u;
label_1635c8:
    // 0x1635c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1635c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1635cc:
    // 0x1635cc: 0x14c20012  bne         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1635CCu;
    {
        const bool branch_taken_0x1635cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1635D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635CCu;
        // 0x1635d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635cc) {
            ctx->pc = 0x163618u;
            goto label_163618;
        }
    }
    ctx->pc = 0x1635D4u;
    // 0x1635d4: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x1635d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1635d8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1635d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1635dc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1635DCu;
    {
        const bool branch_taken_0x1635dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1635E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635DCu;
        // 0x1635e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635dc) {
            ctx->pc = 0x163614u;
            goto label_163614;
        }
    }
    ctx->pc = 0x1635E4u;
    // 0x1635e4: 0xc055c40  jal         func_157100
    ctx->pc = 0x1635E4u;
    SET_GPR_U32(ctx, 31, 0x1635ECu);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1635E4u, 0x1635ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635ECu;
label_1635ec:
    // 0x1635ec: 0xc601026c  lwc1        $f1, 0x26C($s0)
    ctx->pc = 0x1635ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635f0: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x1635f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x1635f4: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x1635f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x1635f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1635f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1635fc: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x1635fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163600: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x163600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x163604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163608: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x163608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x16360c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16360Cu;
    {
        const bool branch_taken_0x16360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16360Cu;
        // 0x163610: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16360c) {
            ctx->pc = 0x1636ACu;
            goto label_1636ac;
        }
    }
    ctx->pc = 0x163614u;
label_163614:
    // 0x163614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163618:
    // 0x163618: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x163618u;
    {
        const bool branch_taken_0x163618 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x16361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163618u;
        // 0x16361c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163618) {
            ctx->pc = 0x16365Cu;
            goto label_16365c;
        }
    }
    ctx->pc = 0x163620u;
    // 0x163620: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x163624: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x163628: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x163628u;
    {
        const bool branch_taken_0x163628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163628) {
            ctx->pc = 0x163658u;
            goto label_163658;
        }
    }
    ctx->pc = 0x163630u;
    // 0x163630: 0xc601026c  lwc1        $f1, 0x26C($s0)
    ctx->pc = 0x163630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163634: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x163634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x163638: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x163638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x16363c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16363cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163640: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x163640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163644: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x163644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x163648: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16364c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x16364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x163650: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x163650u;
    {
        const bool branch_taken_0x163650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163650u;
        // 0x163654: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163650) {
            ctx->pc = 0x1636ACu;
            goto label_1636ac;
        }
    }
    ctx->pc = 0x163658u;
label_163658:
    // 0x163658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16365c:
    // 0x16365c: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16365Cu;
    {
        const bool branch_taken_0x16365c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16365c) {
            ctx->pc = 0x1636ACu;
            goto label_1636ac;
        }
    }
    ctx->pc = 0x163664u;
    // 0x163664: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x163668: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x16366c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16366Cu;
    {
        const bool branch_taken_0x16366c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16366c) {
            ctx->pc = 0x1636ACu;
            goto label_1636ac;
        }
    }
    ctx->pc = 0x163674u;
    // 0x163674: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x163674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163678: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16367c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163680: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x163680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x163684: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x163684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x163688: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16368c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16368cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x163690: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x163690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x163694: 0xc601026c  lwc1        $f1, 0x26C($s0)
    ctx->pc = 0x163694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163698: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x163698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16369c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16369cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1636a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1636a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1636a4: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x1636a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1636a8: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1636a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_1636ac:
    // 0x1636ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1636acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1636b0:
    // 0x1636b0: 0xc042118  jal         func_108460
    ctx->pc = 0x1636B0u;
    SET_GPR_U32(ctx, 31, 0x1636B8u);
    ctx->pc = 0x1636B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636B0u;
    // 0x1636b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1636B0u, 0x1636B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636B8u;
label_1636b8:
    // 0x1636b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1636b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636bc: 0xc0561e4  jal         func_158790
    ctx->pc = 0x1636BCu;
    SET_GPR_U32(ctx, 31, 0x1636C4u);
    ctx->pc = 0x1636C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636BCu;
    // 0x1636c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158790u, 0x1636BCu, 0x1636C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636C4u;
label_1636c4:
    // 0x1636c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1636c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1636c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1636c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1636cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1636ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1636d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1636D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1636D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D0u;
        // 0x1636d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1636D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1636D8u;
}
