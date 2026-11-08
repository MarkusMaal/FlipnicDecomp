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

// Function: entry_00133c14
// Address: 0x133c14 - 0x133c38
void entry_00133c14_0x133c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c14_0x133c14");
#endif

    switch (ctx->pc) {
        case 0x133c24u: goto label_133c24;
        default: break;
    }

    ctx->pc = 0x133c14u;

    // 0x133c14: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x133c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x133c18: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x133c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x133c1c: 0xc0507d0  jal         func_141F40
    ctx->pc = 0x133C1Cu;
    SET_GPR_U32(ctx, 31, 0x133C24u);
    ctx->pc = 0x133C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C1Cu;
    // 0x133c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141F40u, 0x133C1Cu, 0x133C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C24u;
label_133c24:
    // 0x133c24: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x133c28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c2c: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x133c30: 0xc050784  jal         func_141E10
    ctx->pc = 0x133C30u;
    SET_GPR_U32(ctx, 31, 0x133C38u);
    ctx->pc = 0x133C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C30u;
    // 0x133c34: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E10u, 0x133C30u, 0x133C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C38u;
}
