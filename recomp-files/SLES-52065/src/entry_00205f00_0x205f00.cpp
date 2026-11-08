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

// Function: entry_00205f00
// Address: 0x205f00 - 0x205f1c
void entry_00205f00_0x205f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f00_0x205f00");
#endif

    ctx->pc = 0x205f00u;

    // 0x205f00: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x205f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205f04: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x205f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x205f08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205F08u;
    {
        const bool branch_taken_0x205f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F08u;
        // 0x205f0c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f08) {
            ctx->pc = 0x205F1Cu;
            return;
        }
    }
    ctx->pc = 0x205F10u;
    // 0x205f10: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205f14: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F14u;
    {
        const bool branch_taken_0x205f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f14) {
            ctx->pc = 0x205F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F14u;
            // 0x205f18: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F34u;
            return;
        }
    }
    ctx->pc = 0x205F1Cu;
}
