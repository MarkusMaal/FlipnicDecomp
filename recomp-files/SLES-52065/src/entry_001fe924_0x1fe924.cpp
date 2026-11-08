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

// Function: entry_001fe924
// Address: 0x1fe924 - 0x1fe94c
void entry_001fe924_0x1fe924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe924_0x1fe924");
#endif

    switch (ctx->pc) {
        case 0x1fe93cu: goto label_1fe93c;
        default: break;
    }

    ctx->pc = 0x1fe924u;

    // 0x1fe924: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1fe924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1fe928: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE928u;
    {
        const bool branch_taken_0x1fe928 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE928u;
        // 0x1fe92c: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe928) {
            ctx->pc = 0x1FE94Cu;
            return;
        }
    }
    ctx->pc = 0x1FE930u;
    // 0x1fe930: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe934: 0xc07f872  jal         func_1FE1C8
    ctx->pc = 0x1FE934u;
    SET_GPR_U32(ctx, 31, 0x1FE93Cu);
    ctx->pc = 0x1FE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE934u;
    // 0x1fe938: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1FE934u, 0x1FE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE93Cu;
label_1fe93c:
    // 0x1fe93c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE93Cu;
    {
        const bool branch_taken_0x1fe93c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE93Cu;
        // 0x1fe940: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe93c) {
            ctx->pc = 0x1FE95Cu;
            return;
        }
    }
    ctx->pc = 0x1FE944u;
    // 0x1fe944: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe948: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x1fe948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    ctx->pc = 0x1fe94cu;
}
