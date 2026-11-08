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

// Function: entry_0016c8b4
// Address: 0x16c8b4 - 0x16c9a8
void entry_0016c8b4_0x16c8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c8b4_0x16c8b4");
#endif

    switch (ctx->pc) {
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8d4u: goto label_16c8d4;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c910u: goto label_16c910;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c938u: goto label_16c938;
        case 0x16c964u: goto label_16c964;
        default: break;
    }

    ctx->pc = 0x16c8b4u;

label_16c8b4:
    // 0x16c8b4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c8b8:
    // 0x16c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c8bc:
    // 0x16c8bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c8c0:
    // 0x16c8c0: 0x320f809  jalr        $t9
label_16c8c4:
    if (ctx->pc == 0x16C8C4u) {
        ctx->pc = 0x16C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8C0u;
        // 0x16c8c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8C8u;
        goto label_16c8c8;
    }
    ctx->pc = 0x16C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C8C8u);
        ctx->pc = 0x16C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8C0u;
        // 0x16c8c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8C0u, 0x16C8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C8C8u;
label_16c8c8:
    // 0x16c8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c8cc:
    // 0x16c8cc: 0xc042118  jal         func_108460
label_16c8d0:
    if (ctx->pc == 0x16C8D0u) {
        ctx->pc = 0x16C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8CCu;
        // 0x16c8d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8D4u;
        goto label_16c8d4;
    }
    ctx->pc = 0x16C8CCu;
    SET_GPR_U32(ctx, 31, 0x16C8D4u);
    ctx->pc = 0x16C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8CCu;
    // 0x16c8d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16C8CCu, 0x16C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8D4u;
label_16c8d4:
    // 0x16c8d4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c8d8:
    // 0x16c8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c8dc:
    // 0x16c8dc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16c8e0:
    // 0x16c8e0: 0x320f809  jalr        $t9
label_16c8e4:
    if (ctx->pc == 0x16C8E4u) {
        ctx->pc = 0x16C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E0u;
        // 0x16c8e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8E8u;
        goto label_16c8e8;
    }
    ctx->pc = 0x16C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C8E8u);
        ctx->pc = 0x16C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E0u;
        // 0x16c8e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C8E0u, 0x16C8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C8E8u;
label_16c8e8:
    // 0x16c8e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c8ec:
    // 0x16c8ec: 0xc4550054  lwc1        $f21, 0x54($v0)
    ctx->pc = 0x16c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16c8f0:
    // 0x16c8f0: 0xc055c40  jal         func_157100
label_16c8f4:
    if (ctx->pc == 0x16C8F4u) {
        ctx->pc = 0x16C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8F0u;
        // 0x16c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8F8u;
        goto label_16c8f8;
    }
    ctx->pc = 0x16C8F0u;
    SET_GPR_U32(ctx, 31, 0x16C8F8u);
    ctx->pc = 0x16C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8F0u;
    // 0x16c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16C8F0u, 0x16C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8F8u;
label_16c8f8:
    // 0x16c8f8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x16c8f8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c8fc:
    // 0x16c8fc: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c900:
    // 0x16c900: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16c904:
    // 0x16c904: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16c904u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c908:
    // 0x16c908: 0xc0548a8  jal         func_1522A0
label_16c90c:
    if (ctx->pc == 0x16C90Cu) {
        ctx->pc = 0x16C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C908u;
        // 0x16c90c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C910u;
        goto label_16c910;
    }
    ctx->pc = 0x16C908u;
    SET_GPR_U32(ctx, 31, 0x16C910u);
    ctx->pc = 0x16C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C908u;
    // 0x16c90c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16C908u, 0x16C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C910u;
label_16c910:
    // 0x16c910: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16c910u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16c914:
    // 0x16c914: 0xc07edc4  jal         func_1FB710
label_16c918:
    if (ctx->pc == 0x16C918u) {
        ctx->pc = 0x16C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C914u;
        // 0x16c918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C91Cu;
        goto label_16c91c;
    }
    ctx->pc = 0x16C914u;
    SET_GPR_U32(ctx, 31, 0x16C91Cu);
    ctx->pc = 0x16C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C914u;
    // 0x16c918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16C914u, 0x16C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C91Cu;
label_16c91c:
    // 0x16c91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c920:
    // 0x16c920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c924:
    // 0x16c924: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16c924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16c928:
    // 0x16c928: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c92c:
    // 0x16c92c: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x16c92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_16c930:
    // 0x16c930: 0xc07eea2  jal         func_1FBA88
label_16c934:
    if (ctx->pc == 0x16C934u) {
        ctx->pc = 0x16C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C930u;
        // 0x16c934: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C938u;
        goto label_16c938;
    }
    ctx->pc = 0x16C930u;
    SET_GPR_U32(ctx, 31, 0x16C938u);
    ctx->pc = 0x16C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C930u;
    // 0x16c934: 0xae000294  sw          $zero, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16C930u, 0x16C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C938u;
label_16c938:
    // 0x16c938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c93c:
    // 0x16c93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c940:
    // 0x16c940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16c944:
    // 0x16c944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c948:
    // 0x16c948: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c94c:
    // 0x16c94c: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x16c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
label_16c950:
    // 0x16c950: 0xe61502a0  swc1        $f21, 0x2A0($s0)
    ctx->pc = 0x16c950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
label_16c954:
    // 0x16c954: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c958:
    // 0x16c958: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16c958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16c95c:
    // 0x16c95c: 0x320f809  jalr        $t9
label_16c960:
    if (ctx->pc == 0x16C960u) {
        ctx->pc = 0x16C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C95Cu;
        // 0x16c960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C964u;
        goto label_16c964;
    }
    ctx->pc = 0x16C95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C964u);
        ctx->pc = 0x16C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C95Cu;
        // 0x16c960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C95Cu, 0x16C964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C964u;
label_16c964:
    // 0x16c964: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16c968:
    // 0x16c968: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x16c968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_16c96c:
    // 0x16c96c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_16c970:
    if (ctx->pc == 0x16C970u) {
        ctx->pc = 0x16C974u;
        goto label_16c974;
    }
    ctx->pc = 0x16C96Cu;
    {
        const bool branch_taken_0x16c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c96c) {
            ctx->pc = 0x16C9DCu;
            return;
        }
    }
    ctx->pc = 0x16C974u;
label_16c974:
    // 0x16c974: 0xc621022c  lwc1        $f1, 0x22C($s1)
    ctx->pc = 0x16c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c978:
    // 0x16c978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c97c:
    // 0x16c97c: 0x0  nop
    ctx->pc = 0x16c97cu;
    // NOP
label_16c980:
    // 0x16c980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16c984:
    // 0x16c984: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c984u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c988:
    // 0x16c988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c98c:
    // 0x16c98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c990:
    // 0x16c990: 0x0  nop
    ctx->pc = 0x16c990u;
    // NOP
label_16c994:
    // 0x16c994: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c998:
    // 0x16c998: 0x0  nop
    ctx->pc = 0x16c998u;
    // NOP
label_16c99c:
    // 0x16c99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c9a0:
    if (ctx->pc == 0x16C9A0u) {
        ctx->pc = 0x16C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C99Cu;
        // 0x16c9a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9A4u;
        goto label_16c9a4;
    }
    ctx->pc = 0x16C99Cu;
    {
        const bool branch_taken_0x16c99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C99Cu;
        // 0x16c9a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c99c) {
            ctx->pc = 0x16C9A8u;
            return;
        }
    }
    ctx->pc = 0x16C9A4u;
label_16c9a4:
    // 0x16c9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16c9a8u;
}
