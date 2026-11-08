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

// Function: entry_001096cc
// Address: 0x1096cc - 0x1096f0
void entry_001096cc_0x1096cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001096cc_0x1096cc");
#endif

    switch (ctx->pc) {
        case 0x1096dcu: goto label_1096dc;
        default: break;
    }

    ctx->pc = 0x1096ccu;

label_1096cc:
    // 0x1096cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1096ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1096d0:
    // 0x1096d0: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x1096d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_1096d4:
    // 0x1096d4: 0x320f809  jalr        $t9
label_1096d8:
    if (ctx->pc == 0x1096D8u) {
        ctx->pc = 0x1096D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096D4u;
        // 0x1096d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096DCu;
        goto label_1096dc;
    }
    ctx->pc = 0x1096D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1096DCu);
        ctx->pc = 0x1096D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096D4u;
        // 0x1096d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1096D4u, 0x1096DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1096DCu;
label_1096dc:
    // 0x1096dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1096dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1096e0:
    // 0x1096e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1096e4:
    if (ctx->pc == 0x1096E4u) {
        ctx->pc = 0x1096E8u;
        goto label_1096e8;
    }
    ctx->pc = 0x1096E0u;
    {
        const bool branch_taken_0x1096e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1096e0) {
            ctx->pc = 0x1096F0u;
            return;
        }
    }
    ctx->pc = 0x1096E8u;
label_1096e8:
    // 0x1096e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1096ec:
    if (ctx->pc == 0x1096ECu) {
        ctx->pc = 0x1096ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096E8u;
        // 0x1096ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096F0u;
        goto label_fallthrough_0x1096e8;
    }
    ctx->pc = 0x1096E8u;
    {
        const bool branch_taken_0x1096e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096E8u;
        // 0x1096ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096e8) {
            ctx->pc = 0x109738u;
            return;
        }
    }
label_fallthrough_0x1096e8:
    ctx->pc = 0x1096F0u;
}
