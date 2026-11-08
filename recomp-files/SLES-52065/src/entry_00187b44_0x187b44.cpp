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

// Function: entry_00187b44
// Address: 0x187b44 - 0x187b64
void entry_00187b44_0x187b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b44_0x187b44");
#endif

    ctx->pc = 0x187b44u;

    // 0x187b44: 0x0  nop
    ctx->pc = 0x187b44u;
    // NOP
    // 0x187b48: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187b4c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x187b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x187b50: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187B50u;
    {
        const bool branch_taken_0x187b50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x187b50) {
            ctx->pc = 0x187B64u;
            return;
        }
    }
    ctx->pc = 0x187B58u;
    // 0x187b58: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x187b58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x187b5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B5Cu;
        // 0x187b60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187BC0u;
            return;
        }
    }
    ctx->pc = 0x187B64u;
}
