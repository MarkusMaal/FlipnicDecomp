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

// Function: entry_0015f0b4
// Address: 0x15f0b4 - 0x15f0cc
void entry_0015f0b4_0x15f0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f0b4_0x15f0b4");
#endif

    ctx->pc = 0x15f0b4u;

    // 0x15f0b4: 0x0  nop
    ctx->pc = 0x15f0b4u;
    // NOP
    // 0x15f0b8: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15f0b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15f0bc: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x15F0BCu;
    {
        const bool branch_taken_0x15f0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0BCu;
        // 0x15f0c0: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0bc) {
            ctx->pc = 0x15EF5Cu;
            return;
        }
    }
    ctx->pc = 0x15F0C4u;
    // 0x15f0c4: 0x1000028b  b           . + 4 + (0x28B << 2)
    ctx->pc = 0x15F0C4u;
    {
        const bool branch_taken_0x15f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C4u;
        // 0x15f0c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0c4) {
            ctx->pc = 0x15FAF4u;
            return;
        }
    }
    ctx->pc = 0x15F0CCu;
}
