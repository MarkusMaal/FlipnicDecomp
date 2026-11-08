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

// Function: entry_001f8f00
// Address: 0x1f8f00 - 0x1f8f3c
void entry_001f8f00_0x1f8f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8f00_0x1f8f00");
#endif

    switch (ctx->pc) {
        case 0x1f8f28u: goto label_1f8f28;
        default: break;
    }

    ctx->pc = 0x1f8f00u;

    // 0x1f8f00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f04: 0x245016b0  addiu       $s0, $v0, 0x16B0
    ctx->pc = 0x1f8f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f8f08: 0xac5616b0  sw          $s6, 0x16B0($v0)
    ctx->pc = 0x1f8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 22));
    // 0x1f8f0c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1f8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x1f8f10: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1f8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1f8f14: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1f8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1f8f18: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f8f1c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1f8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1f8f20: 0xc080804  jal         func_202010
    ctx->pc = 0x1F8F20u;
    SET_GPR_U32(ctx, 31, 0x1F8F28u);
    ctx->pc = 0x1F8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F20u;
    // 0x1f8f24: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F8F20u, 0x1F8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F28u;
label_1f8f28:
    // 0x1f8f28: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F28u;
    {
        const bool branch_taken_0x1f8f28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F28u;
        // 0x1f8f2c: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f28) {
            ctx->pc = 0x1F8F3Cu;
            return;
        }
    }
    ctx->pc = 0x1F8F30u;
    // 0x1f8f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f34: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F8F34u;
    SET_GPR_U32(ctx, 31, 0x1F8F3Cu);
    ctx->pc = 0x1F8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F34u;
    // 0x1f8f38: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F8F34u, 0x1F8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F3Cu;
}
