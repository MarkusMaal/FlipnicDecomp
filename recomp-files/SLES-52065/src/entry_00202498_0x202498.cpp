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

// Function: entry_00202498
// Address: 0x202498 - 0x2024bc
void entry_00202498_0x202498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202498_0x202498");
#endif

    ctx->pc = 0x202498u;

    // 0x202498: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202498u;
    {
        const bool branch_taken_0x202498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202498u;
        // 0x20249c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202498) {
            ctx->pc = 0x2024BCu;
            return;
        }
    }
    ctx->pc = 0x2024A0u;
    // 0x2024a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2024a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2024a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2024a8: 0xc00013  mtlo        $a2
    ctx->pc = 0x2024a8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x2024ac: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x2024acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2024b0: 0x2012  mflo        $a0
    ctx->pc = 0x2024b0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2024b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2024B4u;
    {
        const bool branch_taken_0x2024b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B4u;
        // 0x2024b8: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024b4) {
            ctx->pc = 0x2024D4u;
            return;
        }
    }
    ctx->pc = 0x2024BCu;
}
