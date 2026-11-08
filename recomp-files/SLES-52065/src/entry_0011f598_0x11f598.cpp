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

// Function: entry_0011f598
// Address: 0x11f598 - 0x11f5dc
void entry_0011f598_0x11f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f598_0x11f598");
#endif

    ctx->pc = 0x11f598u;

    // 0x11f598: 0x8d06200c  lw          $a2, 0x200C($t0)
    ctx->pc = 0x11f598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8204)));
    // 0x11f59c: 0x8d022014  lw          $v0, 0x2014($t0)
    ctx->pc = 0x11f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8212)));
    // 0x11f5a0: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x11f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x11f5a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f5a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11F5A8u;
    {
        const bool branch_taken_0x11f5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5A8u;
        // 0x11f5ac: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5a8) {
            ctx->pc = 0x11F580u;
            return;
        }
    }
    ctx->pc = 0x11F5B0u;
    // 0x11f5b0: 0xad00200c  sw          $zero, 0x200C($t0)
    ctx->pc = 0x11f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8204), GPR_U32(ctx, 0));
    // 0x11f5b4: 0xad002014  sw          $zero, 0x2014($t0)
    ctx->pc = 0x11f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8212), GPR_U32(ctx, 0));
    // 0x11f5b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f5bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f5c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11f5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11f5c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x11f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x11f5cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f5d0: 0xac822028  sw          $v0, 0x2028($a0)
    ctx->pc = 0x11f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8232), GPR_U32(ctx, 2));
    // 0x11f5d4: 0x8c822028  lw          $v0, 0x2028($a0)
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8232)));
    // 0x11f5d8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x11f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x11f5dcu;
}
