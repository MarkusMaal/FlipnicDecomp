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

// Function: entry_001d396c
// Address: 0x1d396c - 0x1d3998
void entry_001d396c_0x1d396c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d396c_0x1d396c");
#endif

    ctx->pc = 0x1d396cu;

    // 0x1d396c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1d396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1d3970: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d3970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d3974: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1d3974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1d3978: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d3978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1d397c: 0x1012  mflo        $v0
    ctx->pc = 0x1d397cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1d3980: 0x1ac00068  blez        $s6, . + 4 + (0x68 << 2)
    ctx->pc = 0x1D3980u;
    {
        const bool branch_taken_0x1d3980 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1D3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3980u;
        // 0x1d3984: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3980) {
            ctx->pc = 0x1D3B24u;
            return;
        }
    }
    ctx->pc = 0x1D3988u;
    // 0x1d3988: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d398c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1d398cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3990: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1d3990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1d3994: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d3994u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3998u;
}
