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

// Function: entry_0013f968
// Address: 0x13f968 - 0x13f98c
void entry_0013f968_0x13f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f968_0x13f968");
#endif

    ctx->pc = 0x13f968u;

    // 0x13f968: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13f96c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f970: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x13f970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13f974: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f978: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13f978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13f97c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f980: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13f984: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x13F984u;
    {
        const bool branch_taken_0x13f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F984u;
        // 0x13f988: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f984) {
            ctx->pc = 0x13FB4Cu;
            return;
        }
    }
    ctx->pc = 0x13F98Cu;
}
