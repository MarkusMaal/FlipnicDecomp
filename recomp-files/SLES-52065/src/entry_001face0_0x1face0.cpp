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

// Function: entry_001face0
// Address: 0x1face0 - 0x1fad08
void entry_001face0_0x1face0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001face0_0x1face0");
#endif

    ctx->pc = 0x1face0u;

    // 0x1face0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1face4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1face4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1face8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FACE8u;
    {
        const bool branch_taken_0x1face8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACE8u;
        // 0x1facec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1face8) {
            ctx->pc = 0x1FAD50u;
            return;
        }
    }
    ctx->pc = 0x1FACF0u;
    // 0x1facf0: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x1facf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1facf4: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FACF4u;
    {
        const bool branch_taken_0x1facf4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1FACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF4u;
        // 0x1facf8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facf4) {
            ctx->pc = 0x1FAD54u;
            return;
        }
    }
    ctx->pc = 0x1FACFCu;
    // 0x1facfc: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fad00: 0x3c0b0022  lui         $t3, 0x22
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34 << 16));
    // 0x1fad04: 0x0  nop
    ctx->pc = 0x1fad04u;
    // NOP
    ctx->pc = 0x1fad08u;
}
