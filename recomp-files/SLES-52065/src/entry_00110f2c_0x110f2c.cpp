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

// Function: entry_00110f2c
// Address: 0x110f2c - 0x110f6c
void entry_00110f2c_0x110f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f2c_0x110f2c");
#endif

    switch (ctx->pc) {
        case 0x110f64u: goto label_110f64;
        default: break;
    }

    ctx->pc = 0x110f2cu;

    // 0x110f2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110f30: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110f34: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x110f38: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110f3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110f44: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110f48: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110f4c: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x110f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x110f50: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110f54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F54u;
    {
        const bool branch_taken_0x110f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F54u;
        // 0x110f58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f54) {
            ctx->pc = 0x110F6Cu;
            return;
        }
    }
    ctx->pc = 0x110F5Cu;
    // 0x110f5c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110F5Cu;
    SET_GPR_U32(ctx, 31, 0x110F64u);
    ctx->pc = 0x110F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F5Cu;
    // 0x110f60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110F5Cu, 0x110F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F64u;
label_110f64:
    // 0x110f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x110F64u;
    {
        const bool branch_taken_0x110f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f64) {
            ctx->pc = 0x110F7Cu;
            return;
        }
    }
    ctx->pc = 0x110F6Cu;
}
