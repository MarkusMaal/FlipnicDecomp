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

// Function: entry_00141304
// Address: 0x141304 - 0x141348
void entry_00141304_0x141304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141304_0x141304");
#endif

    ctx->pc = 0x141304u;

    // 0x141304: 0x0  nop
    ctx->pc = 0x141304u;
    // NOP
    // 0x141308: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14130c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x14130cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x141310: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x141310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x141314: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x141314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x141318: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x141318u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14131c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x14131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x141320: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x141320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x141324: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x141328: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14132c: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x141330: 0x14e90005  bne         $a3, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141330u;
    {
        const bool branch_taken_0x141330 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x141330) {
            ctx->pc = 0x141348u;
            return;
        }
    }
    ctx->pc = 0x141338u;
    // 0x141338: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x141338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14133c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14133cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141340: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x141340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x141344: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x141344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x141348u;
}
