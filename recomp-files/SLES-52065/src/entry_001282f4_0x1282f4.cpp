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

// Function: entry_001282f4
// Address: 0x1282f4 - 0x128318
void entry_001282f4_0x1282f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001282f4_0x1282f4");
#endif

    ctx->pc = 0x1282f4u;

    // 0x1282f4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1282F4u;
    {
        const bool branch_taken_0x1282f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F4u;
        // 0x1282f8: 0xae740000  sw          $s4, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282f4) {
            ctx->pc = 0x128340u;
            return;
        }
    }
    ctx->pc = 0x1282FCu;
    // 0x1282fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x128300: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x128304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128308: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x128308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12830c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128310: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128310u;
        // 0x128314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x128334u;
            return;
        }
    }
    ctx->pc = 0x128318u;
}
