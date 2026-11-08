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

// Function: entry_001bbfa4
// Address: 0x1bbfa4 - 0x1bbfd4
void entry_001bbfa4_0x1bbfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbfa4_0x1bbfa4");
#endif

    ctx->pc = 0x1bbfa4u;

    // 0x1bbfa4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbfa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bbfac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bbfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bbfb0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1bbfb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1bbfb4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1bbfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1bbfb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbfbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBFBCu;
    {
        const bool branch_taken_0x1bbfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfbc) {
            ctx->pc = 0x1BBFDCu;
            return;
        }
    }
    ctx->pc = 0x1BBFC4u;
    // 0x1bbfc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBFC4u;
    {
        const bool branch_taken_0x1bbfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfc4) {
            ctx->pc = 0x1BBFD4u;
            return;
        }
    }
    ctx->pc = 0x1BBFCCu;
    // 0x1bbfcc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBFCCu;
    SET_GPR_U32(ctx, 31, 0x1BBFD4u);
    ctx->pc = 0x1BBFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFCCu;
    // 0x1bbfd0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBFCCu, 0x1BBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFD4u;
}
