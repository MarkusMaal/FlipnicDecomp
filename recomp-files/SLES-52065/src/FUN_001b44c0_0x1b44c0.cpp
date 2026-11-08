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

// Function: FUN_001b44c0
// Address: 0x1b44c0 - 0x1b452c
void FUN_001b44c0_0x1b44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b44c0_0x1b44c0");
#endif

    ctx->pc = 0x1b44c0u;

    // 0x1b44c0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x1b44c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b44c4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1b44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b44c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B44C8u;
    {
        const bool branch_taken_0x1b44c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44C8u;
        // 0x1b44cc: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44c8) {
            ctx->pc = 0x1B44D4u;
            goto label_1b44d4;
        }
    }
    ctx->pc = 0x1B44D0u;
    // 0x1b44d0: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x1b44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
label_1b44d4:
    // 0x1b44d4: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x1b44d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b44d8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B44D8u;
    {
        const bool branch_taken_0x1b44d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44D8u;
        // 0x1b44dc: 0x5197c  dsll32      $v1, $a1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44d8) {
            ctx->pc = 0x1B44FCu;
            goto label_1b44fc;
        }
    }
    ctx->pc = 0x1B44E0u;
    // 0x1b44e0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b44e4: 0x7317c  dsll32      $a2, $a3, 5
    ctx->pc = 0x1b44e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x1b44e8: 0x6317e  dsrl32      $a2, $a2, 5
    ctx->pc = 0x1b44e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 5));
    // 0x1b44ec: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1b44ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1b44f0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b44f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b44f4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1b44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1b44f8: 0x5197c  dsll32      $v1, $a1, 5
    ctx->pc = 0x1b44f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 5));
label_1b44fc:
    // 0x1b44fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b44fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b4500: 0x3197e  dsrl32      $v1, $v1, 5
    ctx->pc = 0x1b4500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 5));
    // 0x1b4504: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1b4504u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x1b4508: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1b4508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1b450c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1b450cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1b4510: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1b4510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1b4514: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x1b4514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1b4518: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1b4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b451c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4520: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b4524: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4524u;
        // 0x1b4528: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B452Cu;
}
