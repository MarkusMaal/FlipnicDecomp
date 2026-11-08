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

// Function: FUN_001bc3f0
// Address: 0x1bc3f0 - 0x1bc504
void FUN_001bc3f0_0x1bc3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc3f0_0x1bc3f0");
#endif

    switch (ctx->pc) {
        case 0x1bc45cu: goto label_1bc45c;
        case 0x1bc46cu: goto label_1bc46c;
        case 0x1bc47cu: goto label_1bc47c;
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc4a8u: goto label_1bc4a8;
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4d4u: goto label_1bc4d4;
        case 0x1bc4e8u: goto label_1bc4e8;
        case 0x1bc4f4u: goto label_1bc4f4;
        default: break;
    }

    ctx->pc = 0x1bc3f0u;

    // 0x1bc3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc3f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bc3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bc3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc400: 0x8022f4d0  lb          $v0, -0xB30($at)
    ctx->pc = 0x1bc400u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F4D0u));
    // 0x1bc404: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC404u;
    {
        const bool branch_taken_0x1bc404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC404u;
        // 0x1bc408: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc404) {
            ctx->pc = 0x1BC420u;
            goto label_1bc420;
        }
    }
    ctx->pc = 0x1BC40Cu;
    // 0x1bc40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc410: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bc414: 0xa022f4c8  sb          $v0, -0xB38($at)
    ctx->pc = 0x1bc414u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4C8u, _value); } while (0);
    // 0x1bc418: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bc418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bc41c: 0xa022f4d0  sb          $v0, -0xB30($at)
    ctx->pc = 0x1bc41cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4D0u, _value); } while (0);
label_1bc420:
    // 0x1bc420: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1bc420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1bc424: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1bc428: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BC428u;
    {
        const bool branch_taken_0x1bc428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC428u;
        // 0x1bc42c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc428) {
            ctx->pc = 0x1BC4DCu;
            goto label_1bc4dc;
        }
    }
    ctx->pc = 0x1BC430u;
    // 0x1bc430: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BC430u;
    {
        const bool branch_taken_0x1bc430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC430u;
        // 0x1bc434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc430) {
            ctx->pc = 0x1BC4B0u;
            goto label_1bc4b0;
        }
    }
    ctx->pc = 0x1BC438u;
    // 0x1bc438: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc43c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC43Cu;
    {
        const bool branch_taken_0x1bc43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC43Cu;
        // 0x1bc440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc43c) {
            ctx->pc = 0x1BC484u;
            goto label_1bc484;
        }
    }
    ctx->pc = 0x1BC444u;
    // 0x1bc444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC444u;
    {
        const bool branch_taken_0x1bc444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC444u;
        // 0x1bc448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc444) {
            ctx->pc = 0x1BC454u;
            goto label_1bc454;
        }
    }
    ctx->pc = 0x1BC44Cu;
    // 0x1bc44c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1BC44Cu;
    {
        const bool branch_taken_0x1bc44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC44Cu;
        // 0x1bc450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc44c) {
            ctx->pc = 0x1BC4ECu;
            goto label_1bc4ec;
        }
    }
    ctx->pc = 0x1BC454u;
label_1bc454:
    // 0x1bc454: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BC454u;
    SET_GPR_U32(ctx, 31, 0x1BC45Cu);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BC454u, 0x1BC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC45Cu;
label_1bc45c:
    // 0x1bc45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc464: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BC464u;
    SET_GPR_U32(ctx, 31, 0x1BC46Cu);
    ctx->pc = 0x1BC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC464u;
    // 0x1bc468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BC464u, 0x1BC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC46Cu;
label_1bc46c:
    // 0x1bc46c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc474: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BC474u;
    SET_GPR_U32(ctx, 31, 0x1BC47Cu);
    ctx->pc = 0x1BC478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC474u;
    // 0x1bc478: 0x24a53030  addiu       $a1, $a1, 0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BC474u, 0x1BC47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC47Cu;
label_1bc47c:
    // 0x1bc47c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BC47Cu;
    {
        const bool branch_taken_0x1bc47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc47c) {
            ctx->pc = 0x1BC4E8u;
            goto label_1bc4e8;
        }
    }
    ctx->pc = 0x1BC484u;
label_1bc484:
    // 0x1bc484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc488: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BC488u;
    SET_GPR_U32(ctx, 31, 0x1BC490u);
    ctx->pc = 0x1BC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC488u;
    // 0x1bc48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BC488u, 0x1BC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC490u;
label_1bc490:
    // 0x1bc490: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc498: 0x24a53020  addiu       $a1, $a1, 0x3020
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12320));
    // 0x1bc49c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bc49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bc4a0: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1BC4A0u;
    SET_GPR_U32(ctx, 31, 0x1BC4A8u);
    ctx->pc = 0x1BC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4A0u;
    // 0x1bc4a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1BC4A0u, 0x1BC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4A8u;
label_1bc4a8:
    // 0x1bc4a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BC4A8u;
    {
        const bool branch_taken_0x1bc4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4a8) {
            ctx->pc = 0x1BC4E8u;
            goto label_1bc4e8;
        }
    }
    ctx->pc = 0x1BC4B0u;
label_1bc4b0:
    // 0x1bc4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BC4B4u;
    SET_GPR_U32(ctx, 31, 0x1BC4BCu);
    ctx->pc = 0x1BC4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4B4u;
    // 0x1bc4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BC4B4u, 0x1BC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4BCu;
label_1bc4bc:
    // 0x1bc4bc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc4c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4c4: 0x24a53030  addiu       $a1, $a1, 0x3030
    ctx->pc = 0x1bc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12336));
    // 0x1bc4c8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bc4cc: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1BC4CCu;
    SET_GPR_U32(ctx, 31, 0x1BC4D4u);
    ctx->pc = 0x1BC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4CCu;
    // 0x1bc4d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1BC4CCu, 0x1BC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4D4u;
label_1bc4d4:
    // 0x1bc4d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC4D4u;
    {
        const bool branch_taken_0x1bc4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4d4) {
            ctx->pc = 0x1BC4E8u;
            goto label_1bc4e8;
        }
    }
    ctx->pc = 0x1BC4DCu;
label_1bc4dc:
    // 0x1bc4dc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1bc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1bc4e0: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1BC4E0u;
    SET_GPR_U32(ctx, 31, 0x1BC4E8u);
    ctx->pc = 0x1BC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4E0u;
    // 0x1bc4e4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1BC4E0u, 0x1BC4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4E8u;
label_1bc4e8:
    // 0x1bc4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc4ec:
    // 0x1bc4ec: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BC4ECu;
    SET_GPR_U32(ctx, 31, 0x1BC4F4u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BC4ECu, 0x1BC4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4F4u;
label_1bc4f4:
    // 0x1bc4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4FCu;
        // 0x1bc500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC504u;
}
