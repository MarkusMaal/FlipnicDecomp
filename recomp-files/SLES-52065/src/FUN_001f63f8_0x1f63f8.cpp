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

// Function: FUN_001f63f8
// Address: 0x1f63f8 - 0x1f6530
void FUN_001f63f8_0x1f63f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f63f8_0x1f63f8");
#endif

    switch (ctx->pc) {
        case 0x1f6444u: goto label_1f6444;
        default: break;
    }

    ctx->pc = 0x1f63f8u;

    // 0x1f63f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f63f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63fc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f6400: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f6404: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1f6404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f6408: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f6408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f640c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f640cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6410: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6414: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f6418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f641c: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f6420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6424: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f6424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6428: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f6428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f642c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f6430: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f6430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6434: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F6434u;
    {
        const bool branch_taken_0x1f6434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6434u;
        // 0x1f6438: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6434) {
            ctx->pc = 0x1F6518u;
            goto label_1f6518;
        }
    }
    ctx->pc = 0x1F643Cu;
    // 0x1f643c: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F643Cu;
    SET_GPR_U32(ctx, 31, 0x1F6444u);
    ctx->pc = 0x1F6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F643Cu;
    // 0x1f6440: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F643Cu, 0x1F6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6444u;
label_1f6444:
    // 0x1f6444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6448: 0x90830072  lbu         $v1, 0x72($a0)
    ctx->pc = 0x1f6448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x1f644c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6450: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F6450u;
    {
        const bool branch_taken_0x1f6450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6450u;
        // 0x1f6454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6450) {
            ctx->pc = 0x1F651Cu;
            goto label_1f651c;
        }
    }
    ctx->pc = 0x1F6458u;
    // 0x1f6458: 0x90820071  lbu         $v0, 0x71($a0)
    ctx->pc = 0x1f6458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
    // 0x1f645c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6460: 0x1045002e  beq         $v0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F6460u;
    {
        const bool branch_taken_0x1f6460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6460u;
        // 0x1f6464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6460) {
            ctx->pc = 0x1F651Cu;
            goto label_1f651c;
        }
    }
    ctx->pc = 0x1F6468u;
    // 0x1f6468: 0x12050013  beq         $s0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F6468u;
    {
        const bool branch_taken_0x1f6468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6468u;
        // 0x1f646c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6468) {
            ctx->pc = 0x1F64B8u;
            goto label_1f64b8;
        }
    }
    ctx->pc = 0x1F6470u;
    // 0x1f6470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6470u;
    {
        const bool branch_taken_0x1f6470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6470u;
        // 0x1f6474: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6470) {
            ctx->pc = 0x1F6488u;
            goto label_1f6488;
        }
    }
    ctx->pc = 0x1F6478u;
    // 0x1f6478: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6478u;
    {
        const bool branch_taken_0x1f6478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6478u;
        // 0x1f647c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6478) {
            ctx->pc = 0x1F64A0u;
            goto label_1f64a0;
        }
    }
    ctx->pc = 0x1F6480u;
    // 0x1f6480: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F6480u;
    {
        const bool branch_taken_0x1f6480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6480u;
        // 0x1f6484: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6480) {
            ctx->pc = 0x1F6520u;
            goto label_1f6520;
        }
    }
    ctx->pc = 0x1F6488u;
label_1f6488:
    // 0x1f6488: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6488u;
    {
        const bool branch_taken_0x1f6488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6488u;
        // 0x1f648c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6488) {
            ctx->pc = 0x1F64D0u;
            goto label_1f64d0;
        }
    }
    ctx->pc = 0x1F6490u;
    // 0x1f6490: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F6490u;
    {
        const bool branch_taken_0x1f6490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6490u;
        // 0x1f6494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6490) {
            ctx->pc = 0x1F64E4u;
            goto label_1f64e4;
        }
    }
    ctx->pc = 0x1F6498u;
    // 0x1f6498: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F6498u;
    {
        const bool branch_taken_0x1f6498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6498u;
        // 0x1f649c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6498) {
            ctx->pc = 0x1F6520u;
            goto label_1f6520;
        }
    }
    ctx->pc = 0x1F64A0u;
label_1f64a0:
    // 0x1f64a0: 0x90830065  lbu         $v1, 0x65($a0)
    ctx->pc = 0x1f64a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
    // 0x1f64a4: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1f64a8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F64A8u;
    {
        const bool branch_taken_0x1f64a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64A8u;
        // 0x1f64ac: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64a8) {
            ctx->pc = 0x1F6518u;
            goto label_1f6518;
        }
    }
    ctx->pc = 0x1F64B0u;
    // 0x1f64b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F64B0u;
    {
        const bool branch_taken_0x1f64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64B0u;
        // 0x1f64b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64b0) {
            ctx->pc = 0x1F6520u;
            goto label_1f6520;
        }
    }
    ctx->pc = 0x1F64B8u;
label_1f64b8:
    // 0x1f64b8: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1f64b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f64bc: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F64BCu;
    {
        const bool branch_taken_0x1f64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64BCu;
        // 0x1f64c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64bc) {
            ctx->pc = 0x1F651Cu;
            goto label_1f651c;
        }
    }
    ctx->pc = 0x1F64C4u;
    // 0x1f64c4: 0x90830069  lbu         $v1, 0x69($a0)
    ctx->pc = 0x1f64c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
    // 0x1f64c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F64C8u;
    {
        const bool branch_taken_0x1f64c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64C8u;
        // 0x1f64cc: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64c8) {
            ctx->pc = 0x1F650Cu;
            goto label_1f650c;
        }
    }
    ctx->pc = 0x1F64D0u;
label_1f64d0:
    // 0x1f64d0: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1f64d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f64d4: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F64D4u;
    {
        const bool branch_taken_0x1f64d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64D4u;
        // 0x1f64d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64d4) {
            ctx->pc = 0x1F651Cu;
            goto label_1f651c;
        }
    }
    ctx->pc = 0x1F64DCu;
    // 0x1f64dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F64DCu;
    {
        const bool branch_taken_0x1f64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64DCu;
        // 0x1f64e0: 0x90820069  lbu         $v0, 0x69($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64dc) {
            ctx->pc = 0x1F651Cu;
            goto label_1f651c;
        }
    }
    ctx->pc = 0x1F64E4u;
label_1f64e4:
    // 0x1f64e4: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1f64e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f64e8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F64E8u;
    {
        const bool branch_taken_0x1f64e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64E8u;
        // 0x1f64ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64e8) {
            ctx->pc = 0x1F6518u;
            goto label_1f6518;
        }
    }
    ctx->pc = 0x1F64F0u;
    // 0x1f64f0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F64F0u;
    {
        const bool branch_taken_0x1f64f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64F0u;
        // 0x1f64f4: 0x90820068  lbu         $v0, 0x68($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64f0) {
            ctx->pc = 0x1F6500u;
            goto label_1f6500;
        }
    }
    ctx->pc = 0x1F64F8u;
    // 0x1f64f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F64F8u;
    {
        const bool branch_taken_0x1f64f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64F8u;
        // 0x1f64fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64f8) {
            ctx->pc = 0x1F6520u;
            goto label_1f6520;
        }
    }
    ctx->pc = 0x1F6500u;
label_1f6500:
    // 0x1f6500: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f6500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6504u;
    {
        const bool branch_taken_0x1f6504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6504u;
        // 0x1f6508: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6504) {
            ctx->pc = 0x1F6518u;
            goto label_1f6518;
        }
    }
    ctx->pc = 0x1F650Cu;
label_1f650c:
    // 0x1f650c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6510u;
    {
        const bool branch_taken_0x1f6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6510u;
        // 0x1f6514: 0x94620050  lhu         $v0, 0x50($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6510) {
            ctx->pc = 0x1F651Cu;
            goto label_1f651c;
        }
    }
    ctx->pc = 0x1F6518u;
label_1f6518:
    // 0x1f6518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f651c:
    // 0x1f651c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f651cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6520:
    // 0x1f6520: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6528: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6528u;
        // 0x1f652c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6530u;
}
