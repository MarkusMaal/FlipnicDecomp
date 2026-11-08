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

// Function: entry_00209ca0
// Address: 0x209ca0 - 0x209cdc
void entry_00209ca0_0x209ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209ca0_0x209ca0");
#endif

    switch (ctx->pc) {
        case 0x209cd8u: goto label_209cd8;
        default: break;
    }

    ctx->pc = 0x209ca0u;

    // 0x209ca0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x209ca4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x209ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x209ca8: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x209cac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x209cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209cb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209cb4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209cb8: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x209cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x209cbc: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x209cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x209cc0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x209cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x209cc4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x209cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x209cc8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x209CC8u;
    {
        const bool branch_taken_0x209cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CC8u;
        // 0x209ccc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cc8) {
            ctx->pc = 0x209CDCu;
            return;
        }
    }
    ctx->pc = 0x209CD0u;
    // 0x209cd0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x209CD0u;
    SET_GPR_U32(ctx, 31, 0x209CD8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x209CD0u, 0x209CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CD8u;
label_209cd8:
    // 0x209cd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209cdcu;
}
