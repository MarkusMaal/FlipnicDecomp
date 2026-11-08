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

// Function: entry_001b44fc
// Address: 0x1b44fc - 0x1b452c
void entry_001b44fc_0x1b44fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44fc_0x1b44fc");
#endif

    ctx->pc = 0x1b44fcu;

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
