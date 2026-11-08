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

// Function: entry_00112e0c
// Address: 0x112e0c - 0x112e44
void entry_00112e0c_0x112e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e0c_0x112e0c");
#endif

    switch (ctx->pc) {
        case 0x112e14u: goto label_112e14;
        case 0x112e3cu: goto label_112e3c;
        default: break;
    }

    ctx->pc = 0x112e0cu;

    // 0x112e0c: 0xc044254  jal         func_110950
    ctx->pc = 0x112E0Cu;
    SET_GPR_U32(ctx, 31, 0x112E14u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112E0Cu, 0x112E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E14u;
label_112e14:
    // 0x112e14: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x112e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x112e18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112e1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x112e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112e20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x112e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x112e24: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112e2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x112e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112e30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e34: 0xc043da0  jal         func_10F680
    ctx->pc = 0x112E34u;
    SET_GPR_U32(ctx, 31, 0x112E3Cu);
    ctx->pc = 0x112E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E34u;
    // 0x112e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x112E34u, 0x112E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E3Cu;
label_112e3c:
    // 0x112e3c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x112e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x112e40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x112e44u;
}
