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

// Function: entry_00196b04
// Address: 0x196b04 - 0x196b38
void entry_00196b04_0x196b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196b04_0x196b04");
#endif

    switch (ctx->pc) {
        case 0x196b34u: goto label_196b34;
        default: break;
    }

    ctx->pc = 0x196b04u;

    // 0x196b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196b08: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x196b08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
    // 0x196b0c: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x196b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x196b10: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x196b14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x196B14u;
    {
        const bool branch_taken_0x196b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B14u;
        // 0x196b18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b14) {
            ctx->pc = 0x196B38u;
            return;
        }
    }
    ctx->pc = 0x196B1Cu;
    // 0x196b1c: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x196b20: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x196b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x196b24: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x196B24u;
    {
        const bool branch_taken_0x196b24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196b24) {
            ctx->pc = 0x196B38u;
            return;
        }
    }
    ctx->pc = 0x196B2Cu;
    // 0x196b2c: 0xc057ff8  jal         func_15FFE0
    ctx->pc = 0x196B2Cu;
    SET_GPR_U32(ctx, 31, 0x196B34u);
    ctx->pc = 0x196B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B2Cu;
    // 0x196b30: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FFE0u, 0x196B2Cu, 0x196B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B34u;
label_196b34:
    // 0x196b34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x196b38u;
}
