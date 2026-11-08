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

// Function: FUN_0020a7b0
// Address: 0x20a7b0 - 0x20a898
void FUN_0020a7b0_0x20a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a7b0_0x20a7b0");
#endif

    switch (ctx->pc) {
        case 0x20a7e8u: goto label_20a7e8;
        case 0x20a85cu: goto label_20a85c;
        default: break;
    }

    ctx->pc = 0x20a7b0u;

    // 0x20a7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a7b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a7bc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x20a7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x20a7c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20a7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x20a7c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20a7cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A7CCu;
    {
        const bool branch_taken_0x20a7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7CCu;
        // 0x20a7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7cc) {
            ctx->pc = 0x20A804u;
            goto label_20a804;
        }
    }
    ctx->pc = 0x20A7D4u;
    // 0x20a7d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a7d8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x20a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x20a7dc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x20a7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x20a7e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20a7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7e4: 0x0  nop
    ctx->pc = 0x20a7e4u;
    // NOP
label_20a7e8:
    // 0x20a7e8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x20a7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20a7ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20A7ECu;
    {
        const bool branch_taken_0x20a7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7ECu;
        // 0x20a7f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7ec) {
            ctx->pc = 0x20A850u;
            goto label_20a850;
        }
    }
    ctx->pc = 0x20A7F4u;
    // 0x20a7f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a7f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20a7fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20A7FCu;
    {
        const bool branch_taken_0x20a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7FCu;
        // 0x20a800: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7fc) {
            ctx->pc = 0x20A7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a7e8;
        }
    }
    ctx->pc = 0x20A804u;
label_20a804:
    // 0x20a804: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x20a804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20a808: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a80c: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x20a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x20a810: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x20a814: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x20a814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x20a818: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x20a818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x20a81c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20a820: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20a820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20a824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a828: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20a828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20a82c: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A82Cu;
    {
        const bool branch_taken_0x20a82c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A82Cu;
        // 0x20a830: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a82c) {
            ctx->pc = 0x20A864u;
            goto label_20a864;
        }
    }
    ctx->pc = 0x20A834u;
    // 0x20a834: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20a83c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x20a840: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x20a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x20a844: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x20a844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x20a848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20A848u;
    {
        const bool branch_taken_0x20a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A848u;
        // 0x20a84c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a848) {
            ctx->pc = 0x20A874u;
            goto label_20a874;
        }
    }
    ctx->pc = 0x20A850u;
label_20a850:
    // 0x20a850: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20a854: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20A854u;
    SET_GPR_U32(ctx, 31, 0x20A85Cu);
    ctx->pc = 0x20A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A854u;
    // 0x20a858: 0x24845cb8  addiu       $a0, $a0, 0x5CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20A854u, 0x20A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A85Cu;
label_20a85c:
    // 0x20a85c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20A85Cu;
    {
        const bool branch_taken_0x20a85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A85Cu;
        // 0x20a860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a85c) {
            ctx->pc = 0x20A88Cu;
            goto label_20a88c;
        }
    }
    ctx->pc = 0x20A864u;
label_20a864:
    // 0x20a864: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a868: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20a868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20a86c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x20a86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x20a870: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x20a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_20a874:
    // 0x20a874: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20a874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20a878: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20a878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20a87c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x20a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x20a880: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x20a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x20a884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20a884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a888: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x20a888u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
label_20a88c:
    // 0x20a88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a890: 0x3e00008  jr          $ra
    ctx->pc = 0x20A890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A890u;
        // 0x20a894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A898u;
}
