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

// Function: entry_001fce90
// Address: 0x1fce90 - 0x1fcec0
void entry_001fce90_0x1fce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce90_0x1fce90");
#endif

    ctx->pc = 0x1fce90u;

    // 0x1fce90: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fce94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCE94u;
    {
        const bool branch_taken_0x1fce94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE94u;
        // 0x1fce98: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce94) {
            ctx->pc = 0x1FCEC0u;
            return;
        }
    }
    ctx->pc = 0x1FCE9Cu;
    // 0x1fce9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fcea0: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x1fcea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1fcea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcea8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fceac: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fceb0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fceb4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fceb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FCEB8u;
    {
        const bool branch_taken_0x1fceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB8u;
        // 0x1fcebc: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb8) {
            ctx->pc = 0x1FCEE4u;
            return;
        }
    }
    ctx->pc = 0x1FCEC0u;
}
