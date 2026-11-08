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

// Function: entry_0013fac4
// Address: 0x13fac4 - 0x13fb08
void entry_0013fac4_0x13fac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fac4_0x13fac4");
#endif

    ctx->pc = 0x13fac4u;

    // 0x13fac4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fac8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13fac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13facc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13faccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13fad0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x13fad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fad4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13fad8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x13fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x13fadc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fae0: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13fae4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x13fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x13fae8: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x13fae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13faec: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x13faecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13faf0: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13faf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13faf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13faf8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x13faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x13fafc: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FAFCu;
    {
        const bool branch_taken_0x13fafc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fafc) {
            ctx->pc = 0x13FB08u;
            return;
        }
    }
    ctx->pc = 0x13FB04u;
    // 0x13fb04: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x13fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x13fb08u;
}
