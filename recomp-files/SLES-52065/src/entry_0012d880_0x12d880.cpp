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

// Function: entry_0012d880
// Address: 0x12d880 - 0x12d8a4
void entry_0012d880_0x12d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d880_0x12d880");
#endif

    ctx->pc = 0x12d880u;

    // 0x12d880: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12d880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12d884: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x12d888: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x12d888u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d88c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x12d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x12d890: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x12d890u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d894: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x12d894u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12d898: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d89c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12D89Cu;
    {
        const bool branch_taken_0x12d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D89Cu;
        // 0x12d8a0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d89c) {
            ctx->pc = 0x12D8C4u;
            return;
        }
    }
    ctx->pc = 0x12D8A4u;
}
