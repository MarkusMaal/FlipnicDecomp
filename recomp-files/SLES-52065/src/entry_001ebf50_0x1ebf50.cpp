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

// Function: entry_001ebf50
// Address: 0x1ebf50 - 0x1ebf80
void entry_001ebf50_0x1ebf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebf50_0x1ebf50");
#endif

    switch (ctx->pc) {
        case 0x1ebf64u: goto label_1ebf64;
        default: break;
    }

    ctx->pc = 0x1ebf50u;

    // 0x1ebf50: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1ebf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1ebf54: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1ebf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1ebf58: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1ebf58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1ebf5c: 0xc07af9c  jal         func_1EBE70
    ctx->pc = 0x1EBF5Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF64u);
    ctx->pc = 0x1EBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF5Cu;
    // 0x1ebf60: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE70u, 0x1EBF5Cu, 0x1EBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF64u;
label_1ebf64:
    // 0x1ebf64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBF64u;
    {
        const bool branch_taken_0x1ebf64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF64u;
        // 0x1ebf68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf64) {
            ctx->pc = 0x1EBF80u;
            return;
        }
    }
    ctx->pc = 0x1EBF6Cu;
    // 0x1ebf6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebf6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebf70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ebf70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebf74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebf74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebf78: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1EBF78u;
    ctx->pc = 0x1EBF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF78u;
    // 0x1ebf7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1EBF80u;
}
