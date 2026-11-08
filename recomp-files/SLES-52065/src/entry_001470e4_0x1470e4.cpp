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

// Function: entry_001470e4
// Address: 0x1470e4 - 0x147118
void entry_001470e4_0x1470e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001470e4_0x1470e4");
#endif

    switch (ctx->pc) {
        case 0x147110u: goto label_147110;
        default: break;
    }

    ctx->pc = 0x1470e4u;

    // 0x1470e4: 0x8e8202b4  lw          $v0, 0x2B4($s4)
    ctx->pc = 0x1470e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x1470e8: 0x104001d1  beqz        $v0, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1470E8u;
    {
        const bool branch_taken_0x1470e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470e8) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x1470F0u;
    // 0x1470f0: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1470f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1470f8: 0x34463880  ori         $a2, $v0, 0x3880
    ctx->pc = 0x1470f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    // 0x1470fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1470fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147100: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x147100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x147104: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x147108: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x147108u;
    SET_GPR_U32(ctx, 31, 0x147110u);
    ctx->pc = 0x14710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147108u;
    // 0x14710c: 0x8e8503c4  lw          $a1, 0x3C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x147108u, 0x147110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147110u;
label_147110:
    // 0x147110: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x147110u;
    {
        const bool branch_taken_0x147110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147110) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x147118u;
}
