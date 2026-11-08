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

// Function: entry_001fe9a4
// Address: 0x1fe9a4 - 0x1fe9dc
void entry_001fe9a4_0x1fe9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe9a4_0x1fe9a4");
#endif

    switch (ctx->pc) {
        case 0x1fe9b0u: goto label_1fe9b0;
        default: break;
    }

    ctx->pc = 0x1fe9a4u;

    // 0x1fe9a4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe9a8: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FE9A8u;
    SET_GPR_U32(ctx, 31, 0x1FE9B0u);
    ctx->pc = 0x1FE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9A8u;
    // 0x1fe9ac: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FE9A8u, 0x1FE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9B0u;
label_1fe9b0:
    // 0x1fe9b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9b4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE9B4u;
    {
        const bool branch_taken_0x1fe9b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B4u;
        // 0x1fe9b8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9b4) {
            ctx->pc = 0x1FE9DCu;
            return;
        }
    }
    ctx->pc = 0x1FE9BCu;
    // 0x1fe9bc: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x1fe9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1fe9c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe9c4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1fe9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1fe9c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fe9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fe9cc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1fe9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1fe9d0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fe9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe9d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE9D4u;
    {
        const bool branch_taken_0x1fe9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D4u;
        // 0x1fe9d8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d4) {
            ctx->pc = 0x1FEA20u;
            return;
        }
    }
    ctx->pc = 0x1FE9DCu;
}
