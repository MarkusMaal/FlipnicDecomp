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

// Function: FUN_001e1450
// Address: 0x1e1450 - 0x1e14cc
void FUN_001e1450_0x1e1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1450_0x1e1450");
#endif

    switch (ctx->pc) {
        case 0x1e1488u: goto label_1e1488;
        case 0x1e14b4u: goto label_1e14b4;
        default: break;
    }

    ctx->pc = 0x1e1450u;

    // 0x1e1450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e145c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1464: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E1464u;
    {
        const bool branch_taken_0x1e1464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1464u;
        // 0x1e1468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1464) {
            ctx->pc = 0x1E14B4u;
            goto label_1e14b4;
        }
    }
    ctx->pc = 0x1E146Cu;
    // 0x1e146c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1470: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1e1470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e1474: 0x2442c0b0  addiu       $v0, $v0, -0x3F50
    ctx->pc = 0x1e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951088));
    // 0x1e1478: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1478u;
    {
        const bool branch_taken_0x1e1478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1478u;
        // 0x1e147c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1478) {
            ctx->pc = 0x1E1488u;
            goto label_1e1488;
        }
    }
    ctx->pc = 0x1E1480u;
    // 0x1e1480: 0xc0785c0  jal         func_1E1700
    ctx->pc = 0x1E1480u;
    SET_GPR_U32(ctx, 31, 0x1E1488u);
    ctx->pc = 0x1E1484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1480u;
    // 0x1e1484: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1700u, 0x1E1480u, 0x1E1488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1488u;
label_1e1488:
    // 0x1e1488: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1488u;
    {
        const bool branch_taken_0x1e1488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1488u;
        // 0x1e148c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1488) {
            ctx->pc = 0x1E14A0u;
            goto label_1e14a0;
        }
    }
    ctx->pc = 0x1E1490u;
    // 0x1e1490: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1494: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e1498: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e149c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e14a0:
    // 0x1e14a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e14a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e14a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E14A4u;
    {
        const bool branch_taken_0x1e14a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14A4u;
        // 0x1e14a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14a4) {
            ctx->pc = 0x1E14B8u;
            goto label_1e14b8;
        }
    }
    ctx->pc = 0x1E14ACu;
    // 0x1e14ac: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E14ACu;
    SET_GPR_U32(ctx, 31, 0x1E14B4u);
    ctx->pc = 0x1E14B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14ACu;
    // 0x1e14b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E14ACu, 0x1E14B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14B4u;
label_1e14b4:
    // 0x1e14b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e14b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e14b8:
    // 0x1e14b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e14b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e14bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e14bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e14c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e14c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e14c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E14C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C4u;
        // 0x1e14c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E14C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E14CCu;
}
