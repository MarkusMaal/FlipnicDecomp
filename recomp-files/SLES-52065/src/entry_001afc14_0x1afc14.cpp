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

// Function: entry_001afc14
// Address: 0x1afc14 - 0x1afc50
void entry_001afc14_0x1afc14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc14_0x1afc14");
#endif

    switch (ctx->pc) {
        case 0x1afc20u: goto label_1afc20;
        default: break;
    }

    ctx->pc = 0x1afc14u;

    // 0x1afc14: 0x0  nop
    ctx->pc = 0x1afc14u;
    // NOP
    // 0x1afc18: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1AFC18u;
    SET_GPR_U32(ctx, 31, 0x1AFC20u);
    ctx->pc = 0x1AFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC18u;
    // 0x1afc1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1AFC18u, 0x1AFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC20u;
label_1afc20:
    // 0x1afc20: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afc24: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFC24u;
    {
        const bool branch_taken_0x1afc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC24u;
        // 0x1afc28: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc24) {
            ctx->pc = 0x1AFC74u;
            return;
        }
    }
    ctx->pc = 0x1AFC2Cu;
    // 0x1afc2c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afc30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afc34: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afc38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afc3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFC3Cu;
    {
        const bool branch_taken_0x1afc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC3Cu;
        // 0x1afc40: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc3c) {
            ctx->pc = 0x1AFC50u;
            return;
        }
    }
    ctx->pc = 0x1AFC44u;
    // 0x1afc44: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afc48: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afc4c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1afc50u;
}
