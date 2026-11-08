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

// Function: entry_001feb94
// Address: 0x1feb94 - 0x1febc4
void entry_001feb94_0x1feb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feb94_0x1feb94");
#endif

    ctx->pc = 0x1feb94u;

    // 0x1feb94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1feb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1feb98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1feb9c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1feb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1feba0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1feba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1feba4: 0x54202b  sltu        $a0, $v0, $s4
    ctx->pc = 0x1feba4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1feba8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEBA8u;
    {
        const bool branch_taken_0x1feba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feba8) {
            ctx->pc = 0x1FEBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEBA8u;
            // 0x1febac: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEBC4u;
            return;
        }
    }
    ctx->pc = 0x1FEBB0u;
    // 0x1febb0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x1febb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1febb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1febb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1febb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1febb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1febbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBBCu;
    {
        const bool branch_taken_0x1febbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBBCu;
        // 0x1febc0: 0x2202f  dsubu       $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febbc) {
            ctx->pc = 0x1FEBCCu;
            return;
        }
    }
    ctx->pc = 0x1FEBC4u;
}
