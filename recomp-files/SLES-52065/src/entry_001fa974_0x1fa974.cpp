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

// Function: entry_001fa974
// Address: 0x1fa974 - 0x1fa9a0
void entry_001fa974_0x1fa974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa974_0x1fa974");
#endif

    ctx->pc = 0x1fa974u;

    // 0x1fa974: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fa978: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FA978u;
    {
        const bool branch_taken_0x1fa978 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1fa978) {
            ctx->pc = 0x1FAA48u;
            return;
        }
    }
    ctx->pc = 0x1FA980u;
    // 0x1fa980: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fa984: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA984u;
    {
        const bool branch_taken_0x1fa984 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA984u;
        // 0x1fa988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa984) {
            ctx->pc = 0x1FA9CCu;
            return;
        }
    }
    ctx->pc = 0x1FA98Cu;
    // 0x1fa98c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1fa98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fa990: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa994: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1fa994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa998: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fa998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa99c: 0x0  nop
    ctx->pc = 0x1fa99cu;
    // NOP
    ctx->pc = 0x1fa9a0u;
}
