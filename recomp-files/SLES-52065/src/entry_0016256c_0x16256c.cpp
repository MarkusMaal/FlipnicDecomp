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

// Function: entry_0016256c
// Address: 0x16256c - 0x1625a0
void entry_0016256c_0x16256c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016256c_0x16256c");
#endif

    ctx->pc = 0x16256cu;

    // 0x16256c: 0x864401f4  lh          $a0, 0x1F4($s2)
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x162570: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x162574: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x162574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x162578: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x162578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16257c: 0x0  nop
    ctx->pc = 0x16257cu;
    // NOP
    // 0x162580: 0x0  nop
    ctx->pc = 0x162580u;
    // NOP
    // 0x162584: 0x1810  mfhi        $v1
    ctx->pc = 0x162584u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x162588: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162588u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x16258c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162590: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162590u;
    {
        const bool branch_taken_0x162590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x162594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162590u;
        // 0x162594: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162590) {
            ctx->pc = 0x1625A0u;
            return;
        }
    }
    ctx->pc = 0x162598u;
    // 0x162598: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16259c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16259cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1625a0u;
}
