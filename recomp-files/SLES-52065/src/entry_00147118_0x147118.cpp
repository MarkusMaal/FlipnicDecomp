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

// Function: entry_00147118
// Address: 0x147118 - 0x14714c
void entry_00147118_0x147118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147118_0x147118");
#endif

    switch (ctx->pc) {
        case 0x147144u: goto label_147144;
        default: break;
    }

    ctx->pc = 0x147118u;

    // 0x147118: 0x8e8202b8  lw          $v0, 0x2B8($s4)
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
    // 0x14711c: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x14711Cu;
    {
        const bool branch_taken_0x14711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14711c) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x147124u;
    // 0x147124: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x147124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x147128: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x147128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14712c: 0x34463880  ori         $a2, $v0, 0x3880
    ctx->pc = 0x14712cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    // 0x147130: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147134: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x147134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x147138: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x147138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14713c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x14713Cu;
    SET_GPR_U32(ctx, 31, 0x147144u);
    ctx->pc = 0x147140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14713Cu;
    // 0x147140: 0x8e8503c8  lw          $a1, 0x3C8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x14713Cu, 0x147144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147144u;
label_147144:
    // 0x147144: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x147144u;
    {
        const bool branch_taken_0x147144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147144) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x14714Cu;
}
