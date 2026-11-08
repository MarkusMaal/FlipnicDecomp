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

// Function: FUN_001058b0
// Address: 0x1058b0 - 0x105930
void FUN_001058b0_0x1058b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001058b0_0x1058b0");
#endif

    switch (ctx->pc) {
        case 0x10591cu: goto label_10591c;
        default: break;
    }

    ctx->pc = 0x1058b0u;

    // 0x1058b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1058b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1058b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1058b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1058b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1058bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1058bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058c0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1058C0u;
    {
        const bool branch_taken_0x1058c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058C0u;
        // 0x1058c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058c0) {
            ctx->pc = 0x105920u;
            goto label_105920;
        }
    }
    ctx->pc = 0x1058C8u;
    // 0x1058c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1058c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1058cc: 0x2442a7f0  addiu       $v0, $v0, -0x5810
    ctx->pc = 0x1058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
    // 0x1058d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1058D0u;
    {
        const bool branch_taken_0x1058d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058D0u;
        // 0x1058d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058d0) {
            ctx->pc = 0x105904u;
            goto label_105904;
        }
    }
    ctx->pc = 0x1058D8u;
    // 0x1058d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1058d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1058dc: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x1058dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x1058e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1058E0u;
    {
        const bool branch_taken_0x1058e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058E0u;
        // 0x1058e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058e0) {
            ctx->pc = 0x105904u;
            goto label_105904;
        }
    }
    ctx->pc = 0x1058E8u;
    // 0x1058e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1058e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1058ec: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1058ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1058f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1058F0u;
    {
        const bool branch_taken_0x1058f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058F0u;
        // 0x1058f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058f0) {
            ctx->pc = 0x105904u;
            goto label_105904;
        }
    }
    ctx->pc = 0x1058F8u;
    // 0x1058f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1058f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1058fc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1058fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105900: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105904:
    // 0x105904: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10590c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10590Cu;
    {
        const bool branch_taken_0x10590c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10590Cu;
        // 0x105910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10590c) {
            ctx->pc = 0x10591Cu;
            goto label_10591c;
        }
    }
    ctx->pc = 0x105914u;
    // 0x105914: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105914u;
    SET_GPR_U32(ctx, 31, 0x10591Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105914u, 0x10591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10591Cu;
label_10591c:
    // 0x10591c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10591cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105920:
    // 0x105920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105928: 0x3e00008  jr          $ra
    ctx->pc = 0x105928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105928u;
        // 0x10592c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105930u;
}
