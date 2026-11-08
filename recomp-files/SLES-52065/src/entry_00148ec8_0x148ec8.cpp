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

// Function: entry_00148ec8
// Address: 0x148ec8 - 0x148f1c
void entry_00148ec8_0x148ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ec8_0x148ec8");
#endif

    ctx->pc = 0x148ec8u;

    // 0x148ec8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x148ecc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x148eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x148ed0: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x148ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x148ed4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x148ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x148ed8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148edc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x148edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x148ee0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x148ee4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148ee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x148ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x148eec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148ef0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x148ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148ef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x148ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148ef8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x148ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x148efc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148EFCu;
    {
        const bool branch_taken_0x148efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EFCu;
        // 0x148f00: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148efc) {
            ctx->pc = 0x148F1Cu;
            return;
        }
    }
    ctx->pc = 0x148F04u;
    // 0x148f04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x148f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x148f08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148f0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x148f10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148f18: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x148f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x148f1cu;
}
