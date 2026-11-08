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

// Function: entry_0019ecbc
// Address: 0x19ecbc - 0x19ece0
void entry_0019ecbc_0x19ecbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ecbc_0x19ecbc");
#endif

    ctx->pc = 0x19ecbcu;

    // 0x19ecbc: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ecc0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19ecc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ecc8: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
    // 0x19eccc: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ecd0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ecd4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x19ecd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19ECD8u;
    {
        const bool branch_taken_0x19ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECD8u;
        // 0x19ecdc: 0xac4328f0  sw          $v1, 0x28F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecd8) {
            ctx->pc = 0x19ED00u;
            return;
        }
    }
    ctx->pc = 0x19ECE0u;
}
