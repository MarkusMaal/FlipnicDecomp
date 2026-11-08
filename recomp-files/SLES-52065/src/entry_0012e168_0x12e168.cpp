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

// Function: entry_0012e168
// Address: 0x12e168 - 0x12e18c
void entry_0012e168_0x12e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e168_0x12e168");
#endif

    switch (ctx->pc) {
        case 0x12e174u: goto label_12e174;
        default: break;
    }

    ctx->pc = 0x12e168u;

    // 0x12e168: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e16c: 0xc04b8e8  jal         func_12E3A0
    ctx->pc = 0x12E16Cu;
    SET_GPR_U32(ctx, 31, 0x12E174u);
    ctx->pc = 0x12E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E16Cu;
    // 0x12e170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E3A0u, 0x12E16Cu, 0x12E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E174u;
label_12e174:
    // 0x12e174: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x12e178: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x12e17c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x12e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x12e180: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x12e180u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x12e184: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12E184u;
    {
        const bool branch_taken_0x12e184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E184u;
        // 0x12e188: 0x8fd00000  lw          $s0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e184) {
            ctx->pc = 0x12E294u;
            return;
        }
    }
    ctx->pc = 0x12E18Cu;
}
