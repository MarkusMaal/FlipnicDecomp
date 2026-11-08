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

// Function: entry_0014af40
// Address: 0x14af40 - 0x14af78
void entry_0014af40_0x14af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af40_0x14af40");
#endif

    ctx->pc = 0x14af40u;

    // 0x14af40: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x14af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14af44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14af44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14af48: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x14af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x14af4c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x14af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14af50: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x14af50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14af54: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x14af54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x14af58: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14af58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14af5c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x14af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14af60: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x14af60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14af64: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14af64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14af68: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14af6c: 0x14e50002  bne         $a3, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AF6Cu;
    {
        const bool branch_taken_0x14af6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x14af6c) {
            ctx->pc = 0x14AF78u;
            return;
        }
    }
    ctx->pc = 0x14AF74u;
    // 0x14af74: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x14af74u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x14af78u;
}
