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

// Function: entry_0010f984
// Address: 0x10f984 - 0x10f9a8
void entry_0010f984_0x10f984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f984_0x10f984");
#endif

    ctx->pc = 0x10f984u;

    // 0x10f984: 0xae480038  sw          $t0, 0x38($s2)
    ctx->pc = 0x10f984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 8));
    // 0x10f988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10f988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f98c: 0xae48003c  sw          $t0, 0x3C($s2)
    ctx->pc = 0x10f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 8));
    // 0x10f990: 0xa2470040  sb          $a3, 0x40($s2)
    ctx->pc = 0x10f990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 7));
    // 0x10f994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f998: 0xae450024  sw          $a1, 0x24($s2)
    ctx->pc = 0x10f998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 5));
    // 0x10f99c: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x10f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
    // 0x10f9a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10F9A0u;
    {
        const bool branch_taken_0x10f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9A0u;
        // 0x10f9a4: 0xa2490043  sb          $t1, 0x43($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9a0) {
            ctx->pc = 0x10F9D4u;
            return;
        }
    }
    ctx->pc = 0x10F9A8u;
}
