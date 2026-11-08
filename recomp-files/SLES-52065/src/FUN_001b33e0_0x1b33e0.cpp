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

// Function: FUN_001b33e0
// Address: 0x1b33e0 - 0x1b34a0
void FUN_001b33e0_0x1b33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b33e0_0x1b33e0");
#endif

    ctx->pc = 0x1b33e0u;

    // 0x1b33e0: 0x9503c  dsll32      $t2, $t1, 0
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1b33e4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x1b33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x1b33e8: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b33ec: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x1b33ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b33f0: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1b33f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1b33f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b33f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b33f8: 0x34088001  ori         $t0, $zero, 0x8001
    ctx->pc = 0x1b33f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1b33fc: 0x24035150  addiu       $v1, $zero, 0x5150
    ctx->pc = 0x1b33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20816));
    // 0x1b3400: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x1b3400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x1b3404: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1b3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1b3408: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x1b3408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x1b340c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b3410: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1b3410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3414: 0x346d0003  ori         $t5, $v1, 0x3
    ctx->pc = 0x1b3414u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1b3418: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1b3418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1b341c: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x1b341cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b3420: 0x346c0003  ori         $t4, $v1, 0x3
    ctx->pc = 0x1b3420u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1b3424: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x1b3424u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x1b3428: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b3428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b342c: 0xfd0d0000  sd          $t5, 0x0($t0)
    ctx->pc = 0x1b342cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 13));
    // 0x1b3430: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1b3430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3434: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1b3434u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1b3438: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1b3438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b343c: 0xad0c000c  sw          $t4, 0xC($t0)
    ctx->pc = 0x1b343cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 12));
    // 0x1b3440: 0x7bac0000  lq          $t4, 0x0($sp)
    ctx->pc = 0x1b3440u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3444: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1b3444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3448: 0x7d0c0010  sq          $t4, 0x10($t0)
    ctx->pc = 0x1b3448u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 12));
    // 0x1b344c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1b344cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3450: 0xfd0b0020  sd          $t3, 0x20($t0)
    ctx->pc = 0x1b3450u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 11));
    // 0x1b3454: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3458: 0xa5050028  sh          $a1, 0x28($t0)
    ctx->pc = 0x1b3458u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b345c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b345cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3460: 0xa4a6002a  sh          $a2, 0x2A($a1)
    ctx->pc = 0x1b3460u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b3464: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b3464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3468: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1b3468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1b346c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b346cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3470: 0xfcaa0030  sd          $t2, 0x30($a1)
    ctx->pc = 0x1b3470u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 10));
    // 0x1b3474: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b3474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3478: 0xa4a90038  sh          $t1, 0x38($a1)
    ctx->pc = 0x1b3478u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 9));
    // 0x1b347c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3480: 0xa4a7003a  sh          $a3, 0x3A($a1)
    ctx->pc = 0x1b3480u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 7));
    // 0x1b3484: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b3484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3488: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x1b3488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x1b348c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3490: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b3494: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b3494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b3498: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3498u;
        // 0x1b349c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B34A0u;
}
