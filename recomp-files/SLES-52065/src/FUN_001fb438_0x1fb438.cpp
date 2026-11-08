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

// Function: FUN_001fb438
// Address: 0x1fb438 - 0x1fb6e0
void FUN_001fb438_0x1fb438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb438_0x1fb438");
#endif

    switch (ctx->pc) {
        case 0x1fb518u: goto label_1fb518;
        default: break;
    }

    ctx->pc = 0x1fb438u;

    // 0x1fb438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fb43c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fb43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fb440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fb444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fb448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fb44c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb450: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fb450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb454: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb458: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x1fb458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x1fb45c: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x1fb45cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1fb460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb464: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb468: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB468u;
    {
        const bool branch_taken_0x1fb468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB468u;
        // 0x1fb46c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb468) {
            ctx->pc = 0x1FB4BCu;
            goto label_1fb4bc;
        }
    }
    ctx->pc = 0x1FB470u;
    // 0x1fb470: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB474u;
    {
        const bool branch_taken_0x1fb474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb474) {
            ctx->pc = 0x1FB488u;
            goto label_1fb488;
        }
    }
    ctx->pc = 0x1FB47Cu;
    // 0x1fb47c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1FB47Cu;
    {
        const bool branch_taken_0x1fb47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB47Cu;
        // 0x1fb480: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb47c) {
            ctx->pc = 0x1FB6CCu;
            goto label_1fb6cc;
        }
    }
    ctx->pc = 0x1FB484u;
    // 0x1fb484: 0x0  nop
    ctx->pc = 0x1fb484u;
    // NOP
label_1fb488:
    // 0x1fb488: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB488u;
    {
        const bool branch_taken_0x1fb488 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB488u;
        // 0x1fb48c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb488) {
            ctx->pc = 0x1FB4A4u;
            goto label_1fb4a4;
        }
    }
    ctx->pc = 0x1FB490u;
    // 0x1fb490: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb494: 0xc4414d74  lwc1        $f1, 0x4D74($v0)
    ctx->pc = 0x1fb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb498: 0xc4604d84  lwc1        $f0, 0x4D84($v1)
    ctx->pc = 0x1fb498u;
    { uint32_t bits = FAST_READ32(0x224D84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb49c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1FB49Cu;
    {
        const bool branch_taken_0x1fb49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB49Cu;
        // 0x1fb4a0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb49c) {
            ctx->pc = 0x1FB6CCu;
            goto label_1fb6cc;
        }
    }
    ctx->pc = 0x1FB4A4u;
label_1fb4a4:
    // 0x1fb4a4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb4a8: 0xc4404d74  lwc1        $f0, 0x4D74($v0)
    ctx->pc = 0x1fb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb4ac: 0xc4614d84  lwc1        $f1, 0x4D84($v1)
    ctx->pc = 0x1fb4acu;
    { uint32_t bits = FAST_READ32(0x224D84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb4b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fb4b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fb4b4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1FB4B4u;
    {
        const bool branch_taken_0x1fb4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4B4u;
        // 0x1fb4b8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4b4) {
            ctx->pc = 0x1FB6CCu;
            goto label_1fb6cc;
        }
    }
    ctx->pc = 0x1FB4BCu;
label_1fb4bc:
    // 0x1fb4bc: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x1fb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x1fb4c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb4c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb4c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB4C8u;
    {
        const bool branch_taken_0x1fb4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4C8u;
        // 0x1fb4cc: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4c8) {
            ctx->pc = 0x1FB510u;
            goto label_1fb510;
        }
    }
    ctx->pc = 0x1FB4D0u;
    // 0x1fb4d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb4d4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb4d8: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1FB4D8u;
    {
        const bool branch_taken_0x1fb4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D8u;
        // 0x1fb4dc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4d8) {
            ctx->pc = 0x1FB5ECu;
            goto label_1fb5ec;
        }
    }
    ctx->pc = 0x1FB4E0u;
    // 0x1fb4e0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fb4e4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fb4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fb4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb4ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb4f4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1fb4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb4f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb4fc: 0x0  nop
    ctx->pc = 0x1fb4fcu;
    // NOP
    // 0x1fb500: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x1FB500u;
    {
        const bool branch_taken_0x1fb500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb500) {
            ctx->pc = 0x1FB504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB500u;
            // 0x1fb504: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB5F0u;
            goto label_1fb5f0;
        }
    }
    ctx->pc = 0x1FB508u;
    // 0x1fb508: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1FB508u;
    {
        const bool branch_taken_0x1fb508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB508u;
        // 0x1fb50c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb508) {
            ctx->pc = 0x1FB6CCu;
            goto label_1fb6cc;
        }
    }
    ctx->pc = 0x1FB510u;
label_1fb510:
    // 0x1fb510: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1FB510u;
    SET_GPR_U32(ctx, 31, 0x1FB518u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1FB510u, 0x1FB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB518u;
label_1fb518:
    // 0x1fb518: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x1fb518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x1fb51c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb520: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb524: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB524u;
    {
        const bool branch_taken_0x1fb524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB524u;
        // 0x1fb528: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb524) {
            ctx->pc = 0x1FB594u;
            goto label_1fb594;
        }
    }
    ctx->pc = 0x1FB52Cu;
    // 0x1fb52c: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x1fb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x1fb530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb534: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb538: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB538u;
    {
        const bool branch_taken_0x1fb538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB538u;
        // 0x1fb53c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb538) {
            ctx->pc = 0x1FB570u;
            goto label_1fb570;
        }
    }
    ctx->pc = 0x1FB540u;
    // 0x1fb540: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x1fb540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1fb544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb548: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb54c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1fb54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1fb550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb554: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fb554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fb558: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x1fb558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1fb55c: 0x0  nop
    ctx->pc = 0x1fb55cu;
    // NOP
    // 0x1fb560: 0x0  nop
    ctx->pc = 0x1fb560u;
    // NOP
    // 0x1fb564: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1fb564u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb568: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB568u;
    {
        const bool branch_taken_0x1fb568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB568u;
        // 0x1fb56c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb568) {
            ctx->pc = 0x1FB5F0u;
            goto label_1fb5f0;
        }
    }
    ctx->pc = 0x1FB570u;
label_1fb570:
    // 0x1fb570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb578: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x1fb578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb57c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1fb57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fb580: 0x0  nop
    ctx->pc = 0x1fb580u;
    // NOP
    // 0x1fb584: 0x0  nop
    ctx->pc = 0x1fb584u;
    // NOP
    // 0x1fb588: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1fb588u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb58c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FB58Cu;
    {
        const bool branch_taken_0x1fb58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB58Cu;
        // 0x1fb590: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb58c) {
            ctx->pc = 0x1FB5ECu;
            goto label_1fb5ec;
        }
    }
    ctx->pc = 0x1FB594u;
label_1fb594:
    // 0x1fb594: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x1fb594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x1fb598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb59c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb5a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB5A0u;
    {
        const bool branch_taken_0x1fb5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5A0u;
        // 0x1fb5a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5a0) {
            ctx->pc = 0x1FB5D8u;
            goto label_1fb5d8;
        }
    }
    ctx->pc = 0x1FB5A8u;
    // 0x1fb5a8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1fb5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1fb5ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb5b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb5b8: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x1fb5b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1fb5bc: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1fb5bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fb5c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fb5c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fb5c4: 0x0  nop
    ctx->pc = 0x1fb5c4u;
    // NOP
    // 0x1fb5c8: 0x0  nop
    ctx->pc = 0x1fb5c8u;
    // NOP
    // 0x1fb5cc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1fb5ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb5d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB5D0u;
    {
        const bool branch_taken_0x1fb5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5D0u;
        // 0x1fb5d4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5d0) {
            ctx->pc = 0x1FB5ECu;
            goto label_1fb5ec;
        }
    }
    ctx->pc = 0x1FB5D8u;
label_1fb5d8:
    // 0x1fb5d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fb5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb5e0: 0x0  nop
    ctx->pc = 0x1fb5e0u;
    // NOP
    // 0x1fb5e4: 0x0  nop
    ctx->pc = 0x1fb5e4u;
    // NOP
    // 0x1fb5e8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1fb5e8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_1fb5ec:
    // 0x1fb5ec: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x1fb5ecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1fb5f0:
    // 0x1fb5f0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb5f4: 0x24624d88  addiu       $v0, $v1, 0x4D88
    ctx->pc = 0x1fb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19848));
    // 0x1fb5f8: 0xc4694d88  lwc1        $f9, 0x4D88($v1)
    ctx->pc = 0x1fb5f8u;
    { uint32_t bits = FAST_READ32(0x224D88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1fb5fc: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x1fb5fcu;
    { uint32_t bits = FAST_READ32(0x224DB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fb600: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x1fb600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1fb604: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x1fb604u;
    { uint32_t bits = FAST_READ32(0x224DA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1fb608: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x1fb608u;
    { uint32_t bits = FAST_READ32(0x224DACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb60c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1fb60cu;
    { uint32_t bits = FAST_READ32(0x224DA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb610: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1fb610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fb614: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1fb614u;
    { uint32_t bits = FAST_READ32(0x224DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1fb618: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x1fb618u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fb61c: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1fb61cu;
    { uint32_t bits = FAST_READ32(0x224D9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb620: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x1fb620u;
    { uint32_t bits = FAST_READ32(0x224D98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1fb624: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1fb624u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1fb628: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x1fb628u;
    { uint32_t bits = FAST_READ32(0x224D90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1fb62c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1fb62cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1fb630: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1fb630u;
    { uint32_t bits = FAST_READ32(0x224D94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fb634: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1fb634u;
    { uint32_t bits = FAST_READ32(0x224D8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1fb638: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x1fb638u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1fb63c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1fb63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb640: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x1fb640u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1fb644: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1fb644u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1fb648: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1fb648u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1fb64c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1fb64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1fb650: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x1fb650u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x1fb654: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1fb654u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1fb658: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1fb658u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1fb65c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1fb65cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1fb660: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x1fb660u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x1fb664: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1fb664u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1fb668: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x1fb668u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1fb66c: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x1fb66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fb670: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x1fb670u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x1fb674: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB674u;
    {
        const bool branch_taken_0x1fb674 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB674u;
        // 0x1fb678: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb674) {
            ctx->pc = 0x1FB68Cu;
            goto label_1fb68c;
        }
    }
    ctx->pc = 0x1FB67Cu;
    // 0x1fb67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb680: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1fb680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1fb684: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB684u;
    {
        const bool branch_taken_0x1fb684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB684u;
        // 0x1fb688: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb684) {
            ctx->pc = 0x1FB6CCu;
            goto label_1fb6cc;
        }
    }
    ctx->pc = 0x1FB68Cu;
label_1fb68c:
    // 0x1fb68c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb690: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fb690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fb694: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fb694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fb698: 0x24424d78  addiu       $v0, $v0, 0x4D78
    ctx->pc = 0x1fb698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19832));
    // 0x1fb69c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb6a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fb6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fb6a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1fb6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1fb6a8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1fb6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb6ac: 0x24634d68  addiu       $v1, $v1, 0x4D68
    ctx->pc = 0x1fb6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19816));
    // 0x1fb6b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb6b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fb6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fb6b8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1fb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb6bc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1fb6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1fb6c0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB6C0u;
    {
        const bool branch_taken_0x1fb6c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1FB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C0u;
        // 0x1fb6c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6c0) {
            ctx->pc = 0x1FB6CCu;
            goto label_1fb6cc;
        }
    }
    ctx->pc = 0x1FB6C8u;
    // 0x1fb6c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fb6c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fb6cc:
    // 0x1fb6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb6d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fb6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6D8u;
        // 0x1fb6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB6E0u;
}
