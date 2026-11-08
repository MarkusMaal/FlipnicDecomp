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

// Function: entry_001fed3c
// Address: 0x1fed3c - 0x1fed6c
void entry_001fed3c_0x1fed3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed3c_0x1fed3c");
#endif

    ctx->pc = 0x1fed3cu;

    // 0x1fed3c: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1fed3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    // 0x1fed40: 0x8fc2ddf8  lw          $v0, -0x2208($fp)
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21DDF8u));
    // 0x1fed44: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fed48: 0x16350008  bne         $s1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FED48u;
    {
        const bool branch_taken_0x1fed48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1FED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED48u;
        // 0x1fed4c: 0xafc3ddf8  sw          $v1, -0x2208($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294958584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed48) {
            ctx->pc = 0x1FED6Cu;
            return;
        }
    }
    ctx->pc = 0x1FED50u;
    // 0x1fed50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1fed50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1fed54: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1fed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1fed58: 0x24a5d9c8  addiu       $a1, $a1, -0x2638
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957512));
    // 0x1fed5c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fed60: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9D0u));
    // 0x1fed64: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1FED64u;
    {
        const bool branch_taken_0x1fed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED64u;
        // 0x1fed68: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed64) {
            ctx->pc = 0x1FEE64u;
            return;
        }
    }
    ctx->pc = 0x1FED6Cu;
}
