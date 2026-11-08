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

// Function: entry_00199fb8
// Address: 0x199fb8 - 0x19a030
void entry_00199fb8_0x199fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199fb8_0x199fb8");
#endif

    ctx->pc = 0x199fb8u;

    // 0x199fb8: 0x8c870344  lw          $a3, 0x344($a0)
    ctx->pc = 0x199fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x199fbc: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x199fc0: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x199fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199fc4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x199FC4u;
    {
        const bool branch_taken_0x199fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FC4u;
        // 0x199fc8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fc4) {
            ctx->pc = 0x19A054u;
            return;
        }
    }
    ctx->pc = 0x199FCCu;
    // 0x199fcc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199fd0: 0x8cc30510  lw          $v1, 0x510($a2)
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1296)));
    // 0x199fd4: 0x4610016  bgez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x199FD4u;
    {
        const bool branch_taken_0x199fd4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x199fd4) {
            ctx->pc = 0x19A030u;
            return;
        }
    }
    ctx->pc = 0x199FDCu;
    // 0x199fdc: 0x8cc304d0  lw          $v1, 0x4D0($a2)
    ctx->pc = 0x199fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1232)));
    // 0x199fe0: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x199fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x199fe4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x199fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199fe8: 0xacc304d0  sw          $v1, 0x4D0($a2)
    ctx->pc = 0x199fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1232), GPR_U32(ctx, 3));
    // 0x199fec: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x199fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x199ff0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199ff8: 0x8c6604d0  lw          $a2, 0x4D0($v1)
    ctx->pc = 0x199ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1232)));
    // 0x199ffc: 0x246704d0  addiu       $a3, $v1, 0x4D0
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1232));
    // 0x19a000: 0x8c650510  lw          $a1, 0x510($v1)
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1296)));
    // 0x19a004: 0x51823  negu        $v1, $a1
    ctx->pc = 0x19a004u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x19a008: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x19a008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a00c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x19a00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x19a010: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A010u;
    {
        const bool branch_taken_0x19a010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A010u;
        // 0x19a014: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a010) {
            ctx->pc = 0x19A054u;
            return;
        }
    }
    ctx->pc = 0x19A018u;
    // 0x19a018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a01c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19a020: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x19a024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19A028u;
    {
        const bool branch_taken_0x19a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A028u;
        // 0x19a02c: 0xac83032c  sw          $v1, 0x32C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a028) {
            ctx->pc = 0x19A054u;
            return;
        }
    }
    ctx->pc = 0x19A030u;
}
