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

// Function: FUN_001ec4d0
// Address: 0x1ec4d0 - 0x1ec564
void FUN_001ec4d0_0x1ec4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec4d0_0x1ec4d0");
#endif

    switch (ctx->pc) {
        case 0x1ec4e4u: goto label_1ec4e4;
        case 0x1ec4f8u: goto label_1ec4f8;
        case 0x1ec550u: goto label_1ec550;
        default: break;
    }

    ctx->pc = 0x1ec4d0u;

    // 0x1ec4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec4d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec4dc: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x1ec4e0: 0xc  syscall     0
    ctx->pc = 0x1ec4e0u;
    ctx->pc = 0x1EC4E4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ec4e4:
    // 0x1ec4e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4e8: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC4E8u;
    {
        const bool branch_taken_0x1ec4e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4E8u;
        // 0x1ec4ec: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4e8) {
            ctx->pc = 0x1EC500u;
            goto label_1ec500;
        }
    }
    ctx->pc = 0x1EC4F0u;
    // 0x1ec4f0: 0xc07ad58  jal         func_1EB560
    ctx->pc = 0x1EC4F0u;
    SET_GPR_U32(ctx, 31, 0x1EC4F8u);
    ctx->pc = 0x1EB560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB560u, 0x1EC4F0u, 0x1EC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4F8u;
label_1ec4f8:
    // 0x1ec4f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EC4F8u;
    {
        const bool branch_taken_0x1ec4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4F8u;
        // 0x1ec4fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4f8) {
            ctx->pc = 0x1EC558u;
            goto label_1ec558;
        }
    }
    ctx->pc = 0x1EC500u;
label_1ec500:
    // 0x1ec500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC500u;
    {
        const bool branch_taken_0x1ec500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC500u;
        // 0x1ec504: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec500) {
            ctx->pc = 0x1EC514u;
            goto label_1ec514;
        }
    }
    ctx->pc = 0x1EC508u;
    // 0x1ec508: 0x8c43a3b8  lw          $v1, -0x5C48($v0)
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943672)));
    // 0x1ec50c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC50Cu;
    {
        const bool branch_taken_0x1ec50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC50Cu;
        // 0x1ec510: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec50c) {
            ctx->pc = 0x1EC51Cu;
            goto label_1ec51c;
        }
    }
    ctx->pc = 0x1EC514u;
label_1ec514:
    // 0x1ec514: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EC514u;
    {
        const bool branch_taken_0x1ec514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC514u;
        // 0x1ec518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec514) {
            ctx->pc = 0x1EC554u;
            goto label_1ec554;
        }
    }
    ctx->pc = 0x1EC51Cu;
label_1ec51c:
    // 0x1ec51c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ec520: 0x2463be58  addiu       $v1, $v1, -0x41A8
    ctx->pc = 0x1ec520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950488));
    // 0x1ec524: 0x8ca4be50  lw          $a0, -0x41B0($a1)
    ctx->pc = 0x1ec524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38BE50u));
    // 0x1ec528: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ec528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ec52c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1ec52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1ec530: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1ec530u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec538: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec53c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ec53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ec540: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ec540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec544: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1ec544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec548: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EC548u;
    SET_GPR_U32(ctx, 31, 0x1EC550u);
    ctx->pc = 0x1EC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC548u;
    // 0x1ec54c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EC548u, 0x1EC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC550u;
label_1ec550:
    // 0x1ec550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec554:
    // 0x1ec554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec558:
    // 0x1ec558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec55c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC55Cu;
        // 0x1ec560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC564u;
}
