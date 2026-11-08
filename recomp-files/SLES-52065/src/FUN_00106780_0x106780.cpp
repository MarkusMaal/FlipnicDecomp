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

// Function: FUN_00106780
// Address: 0x106780 - 0x1067f0
void FUN_00106780_0x106780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106780_0x106780");
#endif

    switch (ctx->pc) {
        case 0x1067dcu: goto label_1067dc;
        default: break;
    }

    ctx->pc = 0x106780u;

    // 0x106780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10678c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10678cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106790: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x106790u;
    {
        const bool branch_taken_0x106790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106790u;
        // 0x106794: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106790) {
            ctx->pc = 0x1067E0u;
            goto label_1067e0;
        }
    }
    ctx->pc = 0x106798u;
    // 0x106798: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10679c: 0x24427b10  addiu       $v0, $v0, 0x7B10
    ctx->pc = 0x10679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31504));
    // 0x1067a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1067A0u;
    {
        const bool branch_taken_0x1067a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067A0u;
        // 0x1067a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067a0) {
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x1067A8u;
    // 0x1067a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1067a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1067ac: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x1067acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x1067b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1067B0u;
    {
        const bool branch_taken_0x1067b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067B0u;
        // 0x1067b4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067b0) {
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x1067B8u;
    // 0x1067b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1067b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1067bc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1067bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1067c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1067c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1067c4:
    // 0x1067c4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1067c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1067c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1067cc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1067CCu;
    {
        const bool branch_taken_0x1067cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067CCu;
        // 0x1067d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067cc) {
            ctx->pc = 0x1067DCu;
            goto label_1067dc;
        }
    }
    ctx->pc = 0x1067D4u;
    // 0x1067d4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1067D4u;
    SET_GPR_U32(ctx, 31, 0x1067DCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1067D4u, 0x1067DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067DCu;
label_1067dc:
    // 0x1067dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1067dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1067e0:
    // 0x1067e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1067e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1067e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1067e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1067e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1067E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067E8u;
        // 0x1067ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1067E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1067F0u;
}
