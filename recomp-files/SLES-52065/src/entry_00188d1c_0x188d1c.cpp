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

// Function: entry_00188d1c
// Address: 0x188d1c - 0x188d5c
void entry_00188d1c_0x188d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d1c_0x188d1c");
#endif

    switch (ctx->pc) {
        case 0x188d2cu: goto label_188d2c;
        default: break;
    }

    ctx->pc = 0x188d1cu;

    // 0x188d1c: 0x0  nop
    ctx->pc = 0x188d1cu;
    // NOP
    // 0x188d20: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x188d24: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x188D24u;
    SET_GPR_U32(ctx, 31, 0x188D2Cu);
    ctx->pc = 0x188D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D24u;
    // 0x188d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x188D24u, 0x188D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D2Cu;
label_188d2c:
    // 0x188d2c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x188d30: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x188D30u;
    {
        const bool branch_taken_0x188d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D30u;
        // 0x188d34: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d30) {
            ctx->pc = 0x188D80u;
            return;
        }
    }
    ctx->pc = 0x188D38u;
    // 0x188d38: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x188d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x188d3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188d40: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x188d44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x188d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D48u;
    {
        const bool branch_taken_0x188d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D48u;
        // 0x188d4c: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d48) {
            ctx->pc = 0x188D5Cu;
            return;
        }
    }
    ctx->pc = 0x188D50u;
    // 0x188d50: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x188d54: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x188d58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x188d5cu;
}
