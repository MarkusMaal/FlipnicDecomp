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

// Function: entry_001cf9c0
// Address: 0x1cf9c0 - 0x1cf9f0
void entry_001cf9c0_0x1cf9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf9c0_0x1cf9c0");
#endif

    switch (ctx->pc) {
        case 0x1cf9ecu: goto label_1cf9ec;
        default: break;
    }

    ctx->pc = 0x1cf9c0u;

    // 0x1cf9c0: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1cf9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cf9c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf9c8: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x1cf9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
    // 0x1cf9cc: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1cf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cf9d0: 0x28630a00  slti        $v1, $v1, 0xA00
    ctx->pc = 0x1cf9d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2560) ? 1 : 0);
    // 0x1cf9d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF9D4u;
    {
        const bool branch_taken_0x1cf9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9D4u;
        // 0x1cf9d8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9d4) {
            ctx->pc = 0x1CF9F0u;
            return;
        }
    }
    ctx->pc = 0x1CF9DCu;
    // 0x1cf9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9e0: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x1cf9e4: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF9E4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ECu);
    ctx->pc = 0x1CF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9E4u;
    // 0x1cf9e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF9E4u, 0x1CF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9ECu;
label_1cf9ec:
    // 0x1cf9ec: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1cf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    ctx->pc = 0x1cf9f0u;
}
