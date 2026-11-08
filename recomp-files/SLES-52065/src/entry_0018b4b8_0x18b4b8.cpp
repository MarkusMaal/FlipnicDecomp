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

// Function: entry_0018b4b8
// Address: 0x18b4b8 - 0x18b4e8
void entry_0018b4b8_0x18b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b4b8_0x18b4b8");
#endif

    switch (ctx->pc) {
        case 0x18b4ccu: goto label_18b4cc;
        default: break;
    }

    ctx->pc = 0x18b4b8u;

    // 0x18b4b8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x18b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x18b4bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b4c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18b4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4c4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x18B4C4u;
    SET_GPR_U32(ctx, 31, 0x18B4CCu);
    ctx->pc = 0x18B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4C4u;
    // 0x18b4c8: 0x24440acc  addiu       $a0, $v0, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x18B4C4u, 0x18B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B4CCu;
label_18b4cc:
    // 0x18b4cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B4CCu;
    {
        const bool branch_taken_0x18b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4CCu;
        // 0x18b4d0: 0x101940  sll         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4cc) {
            ctx->pc = 0x18B4E8u;
            return;
        }
    }
    ctx->pc = 0x18B4D4u;
    // 0x18b4d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18b4d8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x18b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x18b4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b4e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B4E0u;
    {
        const bool branch_taken_0x18b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4E0u;
        // 0x18b4e4: 0x8c422acc  lw          $v0, 0x2ACC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4e0) {
            ctx->pc = 0x18B50Cu;
            return;
        }
    }
    ctx->pc = 0x18B4E8u;
}
