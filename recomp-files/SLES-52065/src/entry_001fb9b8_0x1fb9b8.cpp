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

// Function: entry_001fb9b8
// Address: 0x1fb9b8 - 0x1fb9d0
void entry_001fb9b8_0x1fb9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb9b8_0x1fb9b8");
#endif

    ctx->pc = 0x1fb9b8u;

    // 0x1fb9b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fb9bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB9BCu;
    {
        const bool branch_taken_0x1fb9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9BCu;
        // 0x1fb9c0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9bc) {
            ctx->pc = 0x1FB9D0u;
            return;
        }
    }
    ctx->pc = 0x1FB9C4u;
    // 0x1fb9c4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1fb9c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb9c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1FB9C8u;
    {
        const bool branch_taken_0x1fb9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9C8u;
        // 0x1fb9cc: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9c8) {
            ctx->pc = 0x1FBA78u;
            return;
        }
    }
    ctx->pc = 0x1FB9D0u;
}
