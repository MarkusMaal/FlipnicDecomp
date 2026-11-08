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

// Function: FUN_001212a0
// Address: 0x1212a0 - 0x121304
void FUN_001212a0_0x1212a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001212a0_0x1212a0");
#endif

    switch (ctx->pc) {
        case 0x1212d0u: goto label_1212d0;
        case 0x1212f8u: goto label_1212f8;
        default: break;
    }

    ctx->pc = 0x1212a0u;

    // 0x1212a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1212a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1212a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1212a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1212ac: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1212b0: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x1212b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1212b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1212B4u;
    {
        const bool branch_taken_0x1212b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212B4u;
        // 0x1212b8: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212b4) {
            ctx->pc = 0x1212D8u;
            goto label_1212d8;
        }
    }
    ctx->pc = 0x1212BCu;
    // 0x1212bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1212bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1212c0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1212c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1212c4: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1212c8: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x1212C8u;
    SET_GPR_U32(ctx, 31, 0x1212D0u);
    ctx->pc = 0x1212CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212C8u;
    // 0x1212cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x1212C8u, 0x1212D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212D0u;
label_1212d0:
    // 0x1212d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1212D0u;
    {
        const bool branch_taken_0x1212d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212D0u;
        // 0x1212d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212d0) {
            ctx->pc = 0x1212FCu;
            goto label_1212fc;
        }
    }
    ctx->pc = 0x1212D8u;
label_1212d8:
    // 0x1212d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1212D8u;
    {
        const bool branch_taken_0x1212d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212d8) {
            ctx->pc = 0x1212F8u;
            goto label_1212f8;
        }
    }
    ctx->pc = 0x1212E0u;
    // 0x1212e0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1212e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1212e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1212e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1212e8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1212e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1212ec: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1212ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1212f0: 0xc0484c4  jal         func_121310
    ctx->pc = 0x1212F0u;
    SET_GPR_U32(ctx, 31, 0x1212F8u);
    ctx->pc = 0x1212F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212F0u;
    // 0x1212f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121310u, 0x1212F0u, 0x1212F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212F8u;
label_1212f8:
    // 0x1212f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1212f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1212fc:
    // 0x1212fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1212FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212FCu;
        // 0x121300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1212FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121304u;
}
