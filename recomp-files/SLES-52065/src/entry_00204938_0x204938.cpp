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

// Function: entry_00204938
// Address: 0x204938 - 0x204980
void entry_00204938_0x204938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204938_0x204938");
#endif

    switch (ctx->pc) {
        case 0x204978u: goto label_204978;
        default: break;
    }

    ctx->pc = 0x204938u;

    // 0x204938: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20493c: 0x26c45190  addiu       $a0, $s6, 0x5190
    ctx->pc = 0x20493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x204940: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x204940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x204944: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204948: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20494c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204950: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204954: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x204958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20495c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x20495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204960: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204960u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204964: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204964u;
    {
        const bool branch_taken_0x204964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204964u;
        // 0x204968: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204964) {
            ctx->pc = 0x204980u;
            return;
        }
    }
    ctx->pc = 0x20496Cu;
    // 0x20496c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204970: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204970u;
    SET_GPR_U32(ctx, 31, 0x204978u);
    ctx->pc = 0x204974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204970u;
    // 0x204974: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204970u, 0x204978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204978u;
label_204978:
    // 0x204978: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x204978u;
    {
        const bool branch_taken_0x204978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204978u;
        // 0x20497c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204978) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204980u;
}
