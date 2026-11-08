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

// Function: entry_00165614
// Address: 0x165614 - 0x165630
void entry_00165614_0x165614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165614_0x165614");
#endif

    ctx->pc = 0x165614u;

    // 0x165614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x165614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165618: 0x0  nop
    ctx->pc = 0x165618u;
    // NOP
    // 0x16561c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16561Cu;
    {
        const bool branch_taken_0x16561c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16561Cu;
        // 0x165620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16561c) {
            ctx->pc = 0x165630u;
            return;
        }
    }
    ctx->pc = 0x165624u;
    // 0x165624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165624u;
    {
        const bool branch_taken_0x165624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165624u;
        // 0x165628: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165624) {
            ctx->pc = 0x165630u;
            return;
        }
    }
    ctx->pc = 0x16562Cu;
    // 0x16562c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16562cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165630u;
}
