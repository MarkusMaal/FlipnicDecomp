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

// Function: FUN_001cb830
// Address: 0x1cb830 - 0x1cb8e8
void FUN_001cb830_0x1cb830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb830_0x1cb830");
#endif

    switch (ctx->pc) {
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8d8u: goto label_1cb8d8;
        default: break;
    }

    ctx->pc = 0x1cb830u;

    // 0x1cb830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb840: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1CB840u;
    SET_GPR_U32(ctx, 31, 0x1CB848u);
    ctx->pc = 0x1CB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB840u;
    // 0x1cb844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1CB840u, 0x1CB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB848u;
label_1cb848:
    // 0x1cb848: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB848u;
    {
        const bool branch_taken_0x1cb848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb848) {
            ctx->pc = 0x1CB8D8u;
            goto label_1cb8d8;
        }
    }
    ctx->pc = 0x1CB850u;
    // 0x1cb850: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CB850u;
    SET_GPR_U32(ctx, 31, 0x1CB858u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CB850u, 0x1CB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB858u;
label_1cb858:
    // 0x1cb858: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB858u;
    {
        const bool branch_taken_0x1cb858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB858u;
        // 0x1cb85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb858) {
            ctx->pc = 0x1CB89Cu;
            goto label_1cb89c;
        }
    }
    ctx->pc = 0x1CB860u;
    // 0x1cb860: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CB860u;
    SET_GPR_U32(ctx, 31, 0x1CB868u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CB860u, 0x1CB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB868u;
label_1cb868:
    // 0x1cb868: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1CB868u;
    SET_GPR_U32(ctx, 31, 0x1CB870u);
    ctx->pc = 0x1CB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB868u;
    // 0x1cb86c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1CB868u, 0x1CB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB870u;
label_1cb870:
    // 0x1cb870: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb878: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CB878u;
    SET_GPR_U32(ctx, 31, 0x1CB880u);
    ctx->pc = 0x1CB87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB878u;
    // 0x1cb87c: 0x24a58040  addiu       $a1, $a1, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CB878u, 0x1CB880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB880u;
label_1cb880:
    // 0x1cb880: 0xc06d8c4  jal         func_1B6310
    ctx->pc = 0x1CB880u;
    SET_GPR_U32(ctx, 31, 0x1CB888u);
    ctx->pc = 0x1CB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB880u;
    // 0x1cb884: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6310u, 0x1CB880u, 0x1CB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB888u;
label_1cb888:
    // 0x1cb888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88c: 0xc06ddbc  jal         func_1B76F0
    ctx->pc = 0x1CB88Cu;
    SET_GPR_U32(ctx, 31, 0x1CB894u);
    ctx->pc = 0x1CB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88Cu;
    // 0x1cb890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76F0u, 0x1CB88Cu, 0x1CB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB894u;
label_1cb894:
    // 0x1cb894: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB894u;
    {
        const bool branch_taken_0x1cb894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB894u;
        // 0x1cb898: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb894) {
            ctx->pc = 0x1CB8DCu;
            goto label_1cb8dc;
        }
    }
    ctx->pc = 0x1CB89Cu;
label_1cb89c:
    // 0x1cb89c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CB89Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8A4u);
    ctx->pc = 0x1CB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB89Cu;
    // 0x1cb8a0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CB89Cu, 0x1CB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8A4u;
label_1cb8a4:
    // 0x1cb8a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB8A4u;
    {
        const bool branch_taken_0x1cb8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A4u;
        // 0x1cb8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a4) {
            ctx->pc = 0x1CB8BCu;
            goto label_1cb8bc;
        }
    }
    ctx->pc = 0x1CB8ACu;
    // 0x1cb8ac: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CB8ACu;
    SET_GPR_U32(ctx, 31, 0x1CB8B4u);
    ctx->pc = 0x1CB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8ACu;
    // 0x1cb8b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CB8ACu, 0x1CB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B4u;
label_1cb8b4:
    // 0x1cb8b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB8B4u;
    {
        const bool branch_taken_0x1cb8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb8b4) {
            ctx->pc = 0x1CB8D8u;
            goto label_1cb8d8;
        }
    }
    ctx->pc = 0x1CB8BCu;
label_1cb8bc:
    // 0x1cb8bc: 0xc060014  jal         func_180050
    ctx->pc = 0x1CB8BCu;
    SET_GPR_U32(ctx, 31, 0x1CB8C4u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1CB8BCu, 0x1CB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C4u;
label_1cb8c4:
    // 0x1cb8c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb8c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8cc: 0x24a58040  addiu       $a1, $a1, -0x7FC0
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    // 0x1cb8d0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB8D0u;
    SET_GPR_U32(ctx, 31, 0x1CB8D8u);
    ctx->pc = 0x1CB8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8D0u;
    // 0x1cb8d4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB8D0u, 0x1CB8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8D8u;
label_1cb8d8:
    // 0x1cb8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb8dc:
    // 0x1cb8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8E0u;
        // 0x1cb8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8E8u;
}
