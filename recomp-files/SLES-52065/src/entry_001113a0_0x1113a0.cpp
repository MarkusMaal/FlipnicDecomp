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

// Function: entry_001113a0
// Address: 0x1113a0 - 0x1113e0
void entry_001113a0_0x1113a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113a0_0x1113a0");
#endif

    switch (ctx->pc) {
        case 0x1113d8u: goto label_1113d8;
        default: break;
    }

    ctx->pc = 0x1113a0u;

    // 0x1113a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1113a4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1113a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1113a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1113a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1113ac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1113acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1113b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1113b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1113b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1113b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1113b8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1113b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1113bc: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x1113bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1113c0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1113c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1113c4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1113c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1113C8u;
    {
        const bool branch_taken_0x1113c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C8u;
        // 0x1113cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113c8) {
            ctx->pc = 0x1113E0u;
            return;
        }
    }
    ctx->pc = 0x1113D0u;
    // 0x1113d0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1113D0u;
    SET_GPR_U32(ctx, 31, 0x1113D8u);
    ctx->pc = 0x1113D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113D0u;
    // 0x1113d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1113D0u, 0x1113D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D8u;
label_1113d8:
    // 0x1113d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1113D8u;
    {
        const bool branch_taken_0x1113d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113d8) {
            ctx->pc = 0x1113ECu;
            return;
        }
    }
    ctx->pc = 0x1113E0u;
}
