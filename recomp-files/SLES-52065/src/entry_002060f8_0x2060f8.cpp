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

// Function: entry_002060f8
// Address: 0x2060f8 - 0x206118
void entry_002060f8_0x2060f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002060f8_0x2060f8");
#endif

    ctx->pc = 0x2060f8u;

    // 0x2060f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2060f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2060fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2060FCu;
    {
        const bool branch_taken_0x2060fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060FCu;
        // 0x206100: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060fc) {
            ctx->pc = 0x206118u;
            return;
        }
    }
    ctx->pc = 0x206104u;
    // 0x206104: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x206108: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x206108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20610c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x206110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206110u;
    {
        const bool branch_taken_0x206110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206110u;
        // 0x206114: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206110) {
            ctx->pc = 0x206128u;
            return;
        }
    }
    ctx->pc = 0x206118u;
}
