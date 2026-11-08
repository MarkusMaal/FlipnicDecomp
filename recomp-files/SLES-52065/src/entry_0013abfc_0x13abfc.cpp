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

// Function: entry_0013abfc
// Address: 0x13abfc - 0x13ac2c
void entry_0013abfc_0x13abfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013abfc_0x13abfc");
#endif

    ctx->pc = 0x13abfcu;

    // 0x13abfc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13ABFCu;
    {
        const bool branch_taken_0x13abfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abfc) {
            ctx->pc = 0x13AC2Cu;
            return;
        }
    }
    ctx->pc = 0x13AC04u;
    // 0x13ac04: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13ac08: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13ac0c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x13ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ac10: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13ac14: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13ac18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ac1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13ac20: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13ac24: 0xc04ec24  jal         func_13B090
    ctx->pc = 0x13AC24u;
    SET_GPR_U32(ctx, 31, 0x13AC2Cu);
    ctx->pc = 0x13AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC24u;
    // 0x13ac28: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B090u, 0x13AC24u, 0x13AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC2Cu;
}
