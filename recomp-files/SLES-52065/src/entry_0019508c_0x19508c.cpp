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

// Function: entry_0019508c
// Address: 0x19508c - 0x1950d0
void entry_0019508c_0x19508c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019508c_0x19508c");
#endif

    ctx->pc = 0x19508cu;

    // 0x19508c: 0x0  nop
    ctx->pc = 0x19508cu;
    // NOP
    // 0x195090: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x195094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195098: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x19509c: 0xac700490  sw          $s0, 0x490($v1)
    ctx->pc = 0x19509cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 16));
    // 0x1950a0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x1950a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1950a8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1950ac: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x1950acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x1950b0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x1950b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1950b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1950bc: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x1950bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x1950c0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x1950c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1950c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1950c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1950C8u;
    {
        const bool branch_taken_0x1950c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950C8u;
        // 0x1950cc: 0xae830340  sw          $v1, 0x340($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950c8) {
            ctx->pc = 0x19512Cu;
            return;
        }
    }
    ctx->pc = 0x1950D0u;
}
