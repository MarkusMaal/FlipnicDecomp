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

// Function: entry_001a56e4
// Address: 0x1a56e4 - 0x1a5750
void entry_001a56e4_0x1a56e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a56e4_0x1a56e4");
#endif

    ctx->pc = 0x1a56e4u;

    // 0x1a56e4: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x1a56e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a56e8: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a56ec: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a56ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a56f0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a56f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a56f4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a56f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a56f8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1a56f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a56fc: 0x8cea0688  lw          $t2, 0x688($a3)
    ctx->pc = 0x1a56fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1672)));
    // 0x1a5700: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A5750u;
            return;
        }
    }
    ctx->pc = 0x1A5708u;
    // 0x1a5708: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a570c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a570cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a5710: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a5710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a5714: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a5714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a5718: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1a5718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a571c: 0x8ce70688  lw          $a3, 0x688($a3)
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1672)));
    // 0x1a5720: 0x1547000b  bne         $t2, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5720u;
    {
        const bool branch_taken_0x1a5720 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a5720) {
            ctx->pc = 0x1A5750u;
            return;
        }
    }
    ctx->pc = 0x1A5728u;
    // 0x1a5728: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x1a5728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a572c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a572cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a5730: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a5734: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a5738: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a573c: 0x8ce70688  lw          $a3, 0x688($a3)
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1672)));
    // 0x1a5740: 0x15470003  bne         $t2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5740u;
    {
        const bool branch_taken_0x1a5740 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5740u;
        // 0x1a5744: 0xdd3821  addu        $a3, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5740) {
            ctx->pc = 0x1A5750u;
            return;
        }
    }
    ctx->pc = 0x1A5748u;
    // 0x1a5748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5748u;
    {
        const bool branch_taken_0x1a5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0xacea0060  sw          $t2, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5748) {
            ctx->pc = 0x1A5758u;
            return;
        }
    }
    ctx->pc = 0x1A5750u;
}
