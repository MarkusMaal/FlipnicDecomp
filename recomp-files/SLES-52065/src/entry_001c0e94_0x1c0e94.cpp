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

// Function: entry_001c0e94
// Address: 0x1c0e94 - 0x1c0ebc
void entry_001c0e94_0x1c0e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0e94_0x1c0e94");
#endif

    switch (ctx->pc) {
        case 0x1c0ea4u: goto label_1c0ea4;
        default: break;
    }

    ctx->pc = 0x1c0e94u;

    // 0x1c0e94: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e9c: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0EA4u);
    ctx->pc = 0x1C0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E9Cu;
    // 0x1c0ea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0E9Cu, 0x1C0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EA4u;
label_1c0ea4:
    // 0x1c0ea4: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x1c0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1c0ea8: 0x3c3082a  slt         $at, $fp, $v1
    ctx->pc = 0x1c0ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c0eac: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C0EACu;
    {
        const bool branch_taken_0x1c0eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EACu;
        // 0x1c0eb0: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0eac) {
            ctx->pc = 0x1C10C0u;
            return;
        }
    }
    ctx->pc = 0x1C0EB4u;
    // 0x1c0eb4: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x1c0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1c0eb8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1c0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->pc = 0x1c0ebcu;
}
