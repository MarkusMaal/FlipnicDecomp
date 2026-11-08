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

// Function: entry_0014e538
// Address: 0x14e538 - 0x14e564
void entry_0014e538_0x14e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e538_0x14e538");
#endif

    ctx->pc = 0x14e538u;

    // 0x14e538: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14e538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14e53c: 0xafb000b0  sw          $s0, 0xB0($sp)
    ctx->pc = 0x14e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 16));
    // 0x14e540: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e544: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e548: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14e54c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e554: 0x234082b  sltu        $at, $s1, $s4
    ctx->pc = 0x14e554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14e558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e55c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E55Cu;
    {
        const bool branch_taken_0x14e55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E55Cu;
        // 0x14e560: 0x223b821  addu        $s7, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e55c) {
            ctx->pc = 0x14E5D4u;
            return;
        }
    }
    ctx->pc = 0x14E564u;
}
