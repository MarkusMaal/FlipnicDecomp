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

// Function: entry_001ff3e0
// Address: 0x1ff3e0 - 0x1ff408
void entry_001ff3e0_0x1ff3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff3e0_0x1ff3e0");
#endif

    ctx->pc = 0x1ff3e0u;

    // 0x1ff3e0: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x1ff3e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1ff3e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ff3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3e8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ff3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff3ec: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FF3ECu;
    {
        const bool branch_taken_0x1ff3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3ec) {
            ctx->pc = 0x1FF3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF3ECu;
            // 0x1ff3f0: 0x2683d9c8  addiu       $v1, $s4, -0x2638 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF44Cu;
            return;
        }
    }
    ctx->pc = 0x1FF3F4u;
    // 0x1ff3f4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FF3F4u;
    {
        const bool branch_taken_0x1ff3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3F4u;
        // 0x1ff3f8: 0x831024  and         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3f4) {
            ctx->pc = 0x1FF448u;
            return;
        }
    }
    ctx->pc = 0x1FF3FCu;
    // 0x1ff3fc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1FF3FCu;
    {
        const bool branch_taken_0x1ff3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3FCu;
        // 0x1ff400: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3fc) {
            ctx->pc = 0x1FF328u;
            return;
        }
    }
    ctx->pc = 0x1FF404u;
    // 0x1ff404: 0x0  nop
    ctx->pc = 0x1ff404u;
    // NOP
    ctx->pc = 0x1ff408u;
}
