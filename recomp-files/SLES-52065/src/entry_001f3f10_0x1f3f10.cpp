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

// Function: entry_001f3f10
// Address: 0x1f3f10 - 0x1f3f54
void entry_001f3f10_0x1f3f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3f10_0x1f3f10");
#endif

    switch (ctx->pc) {
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f50u: goto label_1f3f50;
        default: break;
    }

    ctx->pc = 0x1f3f10u;

    // 0x1f3f10: 0x2650aab8  addiu       $s0, $s2, -0x5548
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945464));
    // 0x1f3f14: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1f3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x1f3f18: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1f3f18u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x1f3f1c: 0x40f  sync.p
    ctx->pc = 0x1f3f1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f3f20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3f24: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3F24u;
    {
        const bool branch_taken_0x1f3f24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f3f24) {
            ctx->pc = 0x1F3F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3F24u;
            // 0x1f3f28: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3F8Cu;
            return;
        }
    }
    ctx->pc = 0x1F3F2Cu;
    // 0x1f3f2c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1f3f30: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1f3f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1f3f34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3F34u;
    {
        const bool branch_taken_0x1f3f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F34u;
        // 0x1f3f38: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f34) {
            ctx->pc = 0x1F3F54u;
            return;
        }
    }
    ctx->pc = 0x1F3F3Cu;
    // 0x1f3f3c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f3f40: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1F3F40u;
    SET_GPR_U32(ctx, 31, 0x1F3F48u);
    ctx->pc = 0x1F3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F40u;
    // 0x1f3f44: 0x248444e8  addiu       $a0, $a0, 0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1F3F40u, 0x1F3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F48u;
label_1f3f48:
    // 0x1f3f48: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1F3F48u;
    SET_GPR_U32(ctx, 31, 0x1F3F50u);
    ctx->pc = 0x1F3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F48u;
    // 0x1f3f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1F3F48u, 0x1F3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F50u;
label_1f3f50:
    // 0x1f3f50: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1f3f54u;
}
