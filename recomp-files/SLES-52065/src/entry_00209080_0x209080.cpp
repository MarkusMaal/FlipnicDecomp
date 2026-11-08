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

// Function: entry_00209080
// Address: 0x209080 - 0x2090ac
void entry_00209080_0x209080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209080_0x209080");
#endif

    ctx->pc = 0x209080u;

    // 0x209080: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x209080u;
    {
        const bool branch_taken_0x209080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209080u;
        // 0x209084: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209080) {
            ctx->pc = 0x209068u;
            return;
        }
    }
    ctx->pc = 0x209088u;
    // 0x209088: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x209088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x20908c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x209090: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209090u;
    {
        const bool branch_taken_0x209090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209090) {
            ctx->pc = 0x209094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209090u;
            // 0x209094: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090B4u;
            return;
        }
    }
    ctx->pc = 0x209098u;
    // 0x209098: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x209098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x20909c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20909Cu;
    {
        const bool branch_taken_0x20909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20909Cu;
        // 0x2090a0: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20909c) {
            ctx->pc = 0x2090ACu;
            return;
        }
    }
    ctx->pc = 0x2090A4u;
    // 0x2090a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2090A4u;
    {
        const bool branch_taken_0x2090a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A4u;
        // 0x2090a8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090a4) {
            ctx->pc = 0x2090B0u;
            return;
        }
    }
    ctx->pc = 0x2090ACu;
}
