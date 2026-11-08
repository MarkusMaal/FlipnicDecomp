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

// Function: entry_00179024
// Address: 0x179024 - 0x179040
void entry_00179024_0x179024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179024_0x179024");
#endif

    ctx->pc = 0x179024u;

    // 0x179024: 0x0  nop
    ctx->pc = 0x179024u;
    // NOP
    // 0x179028: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x179028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17902c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179030: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x179030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x179034: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x179034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179038: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x179038u;
    {
        const bool branch_taken_0x179038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179038u;
        // 0x17903c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179038) {
            ctx->pc = 0x1790ECu;
            return;
        }
    }
    ctx->pc = 0x179040u;
}
