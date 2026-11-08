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

// Function: entry_001d3ef0
// Address: 0x1d3ef0 - 0x1d3f04
void entry_001d3ef0_0x1d3ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ef0_0x1d3ef0");
#endif

    ctx->pc = 0x1d3ef0u;

    // 0x1d3ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ef4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d3ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ef8: 0x1442014  dsllv       $a0, $a0, $t2
    ctx->pc = 0x1d3ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 10) & 0x3F));
    // 0x1d3efc: 0x8078286  j           func_1E0A18
    ctx->pc = 0x1D3EFCu;
    ctx->pc = 0x1D3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EFCu;
    // 0x1d3f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A18u;
    FUN_001e0a18_0x1e0a18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3F04u;
}
