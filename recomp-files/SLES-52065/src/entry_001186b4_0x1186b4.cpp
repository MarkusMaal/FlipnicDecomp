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

// Function: entry_001186b4
// Address: 0x1186b4 - 0x1186e4
void entry_001186b4_0x1186b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186b4_0x1186b4");
#endif

    ctx->pc = 0x1186b4u;

    // 0x1186b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1186b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1186b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1186b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1186bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1186bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1186c0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1186c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1186c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1186c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1186c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1186cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1186CCu;
    {
        const bool branch_taken_0x1186cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1186cc) {
            ctx->pc = 0x1186ECu;
            return;
        }
    }
    ctx->pc = 0x1186D4u;
    // 0x1186d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1186D4u;
    {
        const bool branch_taken_0x1186d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1186d4) {
            ctx->pc = 0x1186E4u;
            return;
        }
    }
    ctx->pc = 0x1186DCu;
    // 0x1186dc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1186DCu;
    SET_GPR_U32(ctx, 31, 0x1186E4u);
    ctx->pc = 0x1186E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186DCu;
    // 0x1186e0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1186DCu, 0x1186E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186E4u;
}
