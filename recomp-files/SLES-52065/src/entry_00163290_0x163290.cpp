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

// Function: entry_00163290
// Address: 0x163290 - 0x1632b0
void entry_00163290_0x163290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163290_0x163290");
#endif

    ctx->pc = 0x163290u;

    // 0x163290: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x163294: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x163294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x163298: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x163298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16329c: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x16329cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x1632a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1632A0u;
    {
        const bool branch_taken_0x1632a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1632A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632A0u;
        // 0x1632a4: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632a0) {
            ctx->pc = 0x1632B4u;
            return;
        }
    }
    ctx->pc = 0x1632A8u;
    // 0x1632a8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1632A8u;
    {
        const bool branch_taken_0x1632a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632A8u;
        // 0x1632ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632a8) {
            ctx->pc = 0x163508u;
            return;
        }
    }
    ctx->pc = 0x1632B0u;
}
