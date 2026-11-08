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

// Function: entry_001ce244
// Address: 0x1ce244 - 0x1ce26c
void entry_001ce244_0x1ce244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce244_0x1ce244");
#endif

    ctx->pc = 0x1ce244u;

    // 0x1ce244: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce248: 0x8022fb38  lb          $v0, -0x4C8($at)
    ctx->pc = 0x1ce248u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB38u));
    // 0x1ce24c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE24Cu;
    {
        const bool branch_taken_0x1ce24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE24Cu;
        // 0x1ce250: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce24c) {
            ctx->pc = 0x1CE26Cu;
            return;
        }
    }
    ctx->pc = 0x1CE254u;
    // 0x1ce254: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce258: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce25c: 0xac23fb30  sw          $v1, -0x4D0($at)
    ctx->pc = 0x1ce25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB30u, _value); } while (0);
    // 0x1ce260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce264: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce268: 0xa022fb38  sb          $v0, -0x4C8($at)
    ctx->pc = 0x1ce268u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB38u, _value); } while (0);
    ctx->pc = 0x1ce26cu;
}
