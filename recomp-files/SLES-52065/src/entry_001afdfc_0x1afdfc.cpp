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

// Function: entry_001afdfc
// Address: 0x1afdfc - 0x1afe3c
void entry_001afdfc_0x1afdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afdfc_0x1afdfc");
#endif

    switch (ctx->pc) {
        case 0x1afe0cu: goto label_1afe0c;
        default: break;
    }

    ctx->pc = 0x1afdfcu;

    // 0x1afdfc: 0x0  nop
    ctx->pc = 0x1afdfcu;
    // NOP
    // 0x1afe00: 0x8fb500d8  lw          $s5, 0xD8($sp)
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1afe04: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1AFE04u;
    SET_GPR_U32(ctx, 31, 0x1AFE0Cu);
    ctx->pc = 0x1AFE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE04u;
    // 0x1afe08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1AFE04u, 0x1AFE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFE0Cu;
label_1afe0c:
    // 0x1afe0c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afe10: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFE10u;
    {
        const bool branch_taken_0x1afe10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE10u;
        // 0x1afe14: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe10) {
            ctx->pc = 0x1AFE60u;
            return;
        }
    }
    ctx->pc = 0x1AFE18u;
    // 0x1afe18: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afe1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afe20: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afe24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afe24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afe28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFE28u;
    {
        const bool branch_taken_0x1afe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE28u;
        // 0x1afe2c: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe28) {
            ctx->pc = 0x1AFE3Cu;
            return;
        }
    }
    ctx->pc = 0x1AFE30u;
    // 0x1afe30: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afe34: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afe38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afe38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1afe3cu;
}
