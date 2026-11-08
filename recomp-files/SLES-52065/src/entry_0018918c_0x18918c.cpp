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

// Function: entry_0018918c
// Address: 0x18918c - 0x1891c4
void entry_0018918c_0x18918c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018918c_0x18918c");
#endif

    ctx->pc = 0x18918cu;

    // 0x18918c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18918Cu;
    {
        const bool branch_taken_0x18918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18918Cu;
        // 0x189190: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18918c) {
            ctx->pc = 0x1891FCu;
            return;
        }
    }
    ctx->pc = 0x189194u;
    // 0x189194: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189194u;
    {
        const bool branch_taken_0x189194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189194u;
        // 0x189198: 0x8e66005c  lw          $a2, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189194) {
            ctx->pc = 0x1891E8u;
            return;
        }
    }
    ctx->pc = 0x18919Cu;
    // 0x18919c: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1891a0: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1891a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1891a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1891a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1891a8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1891a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1891ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1891acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1891b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1891B0u;
    {
        const bool branch_taken_0x1891b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891B0u;
        // 0x1891b4: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891b0) {
            ctx->pc = 0x1891C4u;
            return;
        }
    }
    ctx->pc = 0x1891B8u;
    // 0x1891b8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1891b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1891bc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1891bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1891c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1891c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1891c4u;
}
