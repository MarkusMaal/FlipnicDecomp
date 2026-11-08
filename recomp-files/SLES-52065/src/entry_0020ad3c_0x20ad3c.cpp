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

// Function: entry_0020ad3c
// Address: 0x20ad3c - 0x20ad60
void entry_0020ad3c_0x20ad3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ad3c_0x20ad3c");
#endif

    ctx->pc = 0x20ad3cu;

    // 0x20ad3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ad40: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x20ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x20ad44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x20ad48: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x20ad48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x20ad4c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20AD4Cu;
    {
        const bool branch_taken_0x20ad4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD4Cu;
        // 0x20ad50: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad4c) {
            ctx->pc = 0x20AD7Cu;
            return;
        }
    }
    ctx->pc = 0x20AD54u;
    // 0x20ad54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20ad58: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x20ad58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x20ad5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ad5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20ad60u;
}
