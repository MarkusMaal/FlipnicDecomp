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

// Function: entry_001977b0
// Address: 0x1977b0 - 0x1977d8
void entry_001977b0_0x1977b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001977b0_0x1977b0");
#endif

    ctx->pc = 0x1977b0u;

    // 0x1977b0: 0x2a61821  addu        $v1, $s5, $a2
    ctx->pc = 0x1977b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1977b4: 0x8c630674  lw          $v1, 0x674($v1)
    ctx->pc = 0x1977b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
    // 0x1977b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1977b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1977bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1977bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1977c0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1977c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1977c4: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1977c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1977c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1977C8u;
    {
        const bool branch_taken_0x1977c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977c8) {
            ctx->pc = 0x1977D8u;
            return;
        }
    }
    ctx->pc = 0x1977D0u;
    // 0x1977d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1977D0u;
    {
        const bool branch_taken_0x1977d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977D0u;
        // 0x1977d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977d0) {
            ctx->pc = 0x1977E8u;
            return;
        }
    }
    ctx->pc = 0x1977D8u;
}
