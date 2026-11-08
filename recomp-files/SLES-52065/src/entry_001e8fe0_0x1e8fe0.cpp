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

// Function: entry_001e8fe0
// Address: 0x1e8fe0 - 0x1e9020
void entry_001e8fe0_0x1e8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8fe0_0x1e8fe0");
#endif

    ctx->pc = 0x1e8fe0u;

    // 0x1e8fe0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e8fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e8fe4: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x1e8fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1e8fe8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E8FE8u;
    {
        const bool branch_taken_0x1e8fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FE8u;
        // 0x1e8fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fe8) {
            ctx->pc = 0x1E8FC8u;
            return;
        }
    }
    ctx->pc = 0x1E8FF0u;
    // 0x1e8ff0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1e8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e8ff4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8ff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8ff8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E8FF8u;
    {
        const bool branch_taken_0x1e8ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ff8) {
            ctx->pc = 0x1E9054u;
            return;
        }
    }
    ctx->pc = 0x1E9000u;
    // 0x1e9000: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e9004: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9004u;
    {
        const bool branch_taken_0x1e9004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9004) {
            ctx->pc = 0x1E9054u;
            return;
        }
    }
    ctx->pc = 0x1E900Cu;
    // 0x1e900c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9010: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9014: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1e9014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e9018: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E9018u;
    {
        const bool branch_taken_0x1e9018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9018u;
        // 0x1e901c: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9018) {
            ctx->pc = 0x1E9044u;
            return;
        }
    }
    ctx->pc = 0x1E9020u;
}
