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

// Function: entry_00110cd0
// Address: 0x110cd0 - 0x110d10
void entry_00110cd0_0x110cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110cd0_0x110cd0");
#endif

    switch (ctx->pc) {
        case 0x110d08u: goto label_110d08;
        default: break;
    }

    ctx->pc = 0x110cd0u;

    // 0x110cd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110cd4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110cd8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x110cdc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110ce8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110cec: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110cf0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x110cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x110cf4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110CF8u;
    {
        const bool branch_taken_0x110cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CF8u;
        // 0x110cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cf8) {
            ctx->pc = 0x110D10u;
            return;
        }
    }
    ctx->pc = 0x110D00u;
    // 0x110d00: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110D00u;
    SET_GPR_U32(ctx, 31, 0x110D08u);
    ctx->pc = 0x110D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D00u;
    // 0x110d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110D00u, 0x110D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D08u;
label_110d08:
    // 0x110d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110D08u;
    {
        const bool branch_taken_0x110d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110d08) {
            ctx->pc = 0x110D1Cu;
            return;
        }
    }
    ctx->pc = 0x110D10u;
}
