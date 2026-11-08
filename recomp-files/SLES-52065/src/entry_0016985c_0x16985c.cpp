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

// Function: entry_0016985c
// Address: 0x16985c - 0x169880
void entry_0016985c_0x16985c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016985c_0x16985c");
#endif

    ctx->pc = 0x16985cu;

    // 0x16985c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16985Cu;
    {
        const bool branch_taken_0x16985c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16985Cu;
        // 0x169860: 0xae200228  sw          $zero, 0x228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16985c) {
            ctx->pc = 0x169880u;
            return;
        }
    }
    ctx->pc = 0x169864u;
    // 0x169864: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x169864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169868: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x169868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x16986c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16986Cu;
    {
        const bool branch_taken_0x16986c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16986Cu;
        // 0x169870: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16986c) {
            ctx->pc = 0x169880u;
            return;
        }
    }
    ctx->pc = 0x169874u;
    // 0x169874: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x169878: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x169878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x16987c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16987cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x169880u;
}
