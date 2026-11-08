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

// Function: FUN_001960d0
// Address: 0x1960d0 - 0x19620c
void FUN_001960d0_0x1960d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001960d0_0x1960d0");
#endif

    switch (ctx->pc) {
        case 0x196110u: goto label_196110;
        case 0x196154u: goto label_196154;
        case 0x196170u: goto label_196170;
        case 0x196184u: goto label_196184;
        case 0x1961a4u: goto label_1961a4;
        case 0x1961b8u: goto label_1961b8;
        case 0x1961d8u: goto label_1961d8;
        case 0x1961ecu: goto label_1961ec;
        default: break;
    }

    ctx->pc = 0x1960d0u;

    // 0x1960d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1960d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1960d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1960d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1960d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1960dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1960dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1960e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1960e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1960e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1960e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1960e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1960ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1960f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1960f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1960f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1960f8: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x1960F8u;
    {
        const bool branch_taken_0x1960f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960F8u;
        // 0x1960fc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960f8) {
            ctx->pc = 0x1961ECu;
            goto label_1961ec;
        }
    }
    ctx->pc = 0x196100u;
    // 0x196100: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196104: 0x8c450450  lw          $a1, 0x450($v0)
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196108: 0xc062204  jal         func_188810
    ctx->pc = 0x196108u;
    SET_GPR_U32(ctx, 31, 0x196110u);
    ctx->pc = 0x19610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196108u;
    // 0x19610c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188810u, 0x196108u, 0x196110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196110u;
label_196110:
    // 0x196110: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x196110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196114: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x196118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x196118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19611c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196120: 0x12450022  beq         $s2, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x196120u;
    {
        const bool branch_taken_0x196120 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x196124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196120u;
        // 0x196124: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x196120) {
            ctx->pc = 0x1961ACu;
            goto label_1961ac;
        }
    }
    ctx->pc = 0x196128u;
    // 0x196128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19612c: 0x12450012  beq         $s2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19612Cu;
    {
        const bool branch_taken_0x19612c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x19612c) {
            ctx->pc = 0x196178u;
            goto label_196178;
        }
    }
    ctx->pc = 0x196134u;
    // 0x196134: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x196134u;
    {
        const bool branch_taken_0x196134 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x196134) {
            ctx->pc = 0x196144u;
            goto label_196144;
        }
    }
    ctx->pc = 0x19613Cu;
    // 0x19613c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19613Cu;
    {
        const bool branch_taken_0x19613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19613Cu;
        // 0x196140: 0x8f828704  lw          $v0, -0x78FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19613c) {
            ctx->pc = 0x1961DCu;
            goto label_1961dc;
        }
    }
    ctx->pc = 0x196144u;
label_196144:
    // 0x196144: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196148: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x19614c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19614Cu;
    SET_GPR_U32(ctx, 31, 0x196154u);
    ctx->pc = 0x196150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19614Cu;
    // 0x196150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19614Cu, 0x196154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196154u;
label_196154:
    // 0x196154: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196158: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x196158u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19615c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19615cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196160: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196164: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x196168: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x196168u;
    SET_GPR_U32(ctx, 31, 0x196170u);
    ctx->pc = 0x19616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196168u;
    // 0x19616c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x196168u, 0x196170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196170u;
label_196170:
    // 0x196170: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196170u;
    {
        const bool branch_taken_0x196170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196170) {
            ctx->pc = 0x1961D8u;
            goto label_1961d8;
        }
    }
    ctx->pc = 0x196178u;
label_196178:
    // 0x196178: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19617c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19617Cu;
    SET_GPR_U32(ctx, 31, 0x196184u);
    ctx->pc = 0x196180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19617Cu;
    // 0x196180: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19617Cu, 0x196184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196184u;
label_196184:
    // 0x196184: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x196184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x196188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19618c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19618cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196190: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196194: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196198: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x19619c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x19619Cu;
    SET_GPR_U32(ctx, 31, 0x1961A4u);
    ctx->pc = 0x1961A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19619Cu;
    // 0x1961a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x19619Cu, 0x1961A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961A4u;
label_1961a4:
    // 0x1961a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1961A4u;
    {
        const bool branch_taken_0x1961a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961a4) {
            ctx->pc = 0x1961D8u;
            goto label_1961d8;
        }
    }
    ctx->pc = 0x1961ACu;
label_1961ac:
    // 0x1961ac: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x1961b0: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1961B0u;
    SET_GPR_U32(ctx, 31, 0x1961B8u);
    ctx->pc = 0x1961B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961B0u;
    // 0x1961b4: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1961B0u, 0x1961B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961B8u;
label_1961b8:
    // 0x1961b8: 0x26220200  addiu       $v0, $s1, 0x200
    ctx->pc = 0x1961b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x1961bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1961bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1961c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1961c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1961c4: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x1961c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1961c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1961cc: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x1961d0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1961D0u;
    SET_GPR_U32(ctx, 31, 0x1961D8u);
    ctx->pc = 0x1961D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961D0u;
    // 0x1961d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1961D0u, 0x1961D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961D8u;
label_1961d8:
    // 0x1961d8: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_1961dc:
    // 0x1961dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1961dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961e0: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x1961e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x1961e4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1961E4u;
    SET_GPR_U32(ctx, 31, 0x1961ECu);
    ctx->pc = 0x1961E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961E4u;
    // 0x1961e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1961E4u, 0x1961ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961ECu;
label_1961ec:
    // 0x1961ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1961ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1961f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1961f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1961f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1961f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1961f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1961f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1961fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1961fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196204: 0x3e00008  jr          $ra
    ctx->pc = 0x196204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196204u;
        // 0x196208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19620Cu;
}
