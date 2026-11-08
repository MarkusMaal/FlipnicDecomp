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

// Function: entry_001dea94
// Address: 0x1dea94 - 0x1deaf4
void entry_001dea94_0x1dea94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dea94_0x1dea94");
#endif

    ctx->pc = 0x1dea94u;

    // 0x1dea94: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x1dea94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x1dea98: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dea9c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1deaa0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1deaa4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1deaa8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1deaac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1deaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deab0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1deab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1deab4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1deab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1deab8: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x1deab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1deabc: 0xb1200  sll         $v0, $t3, 8
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x1deac0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1deac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1deac4: 0x53600  sll         $a2, $a1, 24
    ctx->pc = 0x1deac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1deac8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1deac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1deacc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1deaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1dead0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1dead0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1dead4: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x1dead4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1dead8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEAD8u;
    {
        const bool branch_taken_0x1dead8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAD8u;
        // 0x1deadc: 0xcc3025  or          $a2, $a2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dead8) {
            ctx->pc = 0x1DEAF4u;
            return;
        }
    }
    ctx->pc = 0x1DEAE0u;
    // 0x1deae0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1deae4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1deae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1deae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1deaec: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x1deaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x1deaf0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1deaf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->pc = 0x1deaf4u;
}
