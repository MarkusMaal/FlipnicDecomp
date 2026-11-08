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

// Function: entry_00192b24
// Address: 0x192b24 - 0x192b68
void entry_00192b24_0x192b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b24_0x192b24");
#endif

    ctx->pc = 0x192b24u;

    // 0x192b24: 0x0  nop
    ctx->pc = 0x192b24u;
    // NOP
    // 0x192b28: 0x106b0039  beq         $v1, $t3, . + 4 + (0x39 << 2)
    ctx->pc = 0x192B28u;
    {
        const bool branch_taken_0x192b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b28) {
            ctx->pc = 0x192C10u;
            return;
        }
    }
    ctx->pc = 0x192B30u;
    // 0x192b30: 0x14a40012  bne         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x192B30u;
    {
        const bool branch_taken_0x192b30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x192B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B30u;
        // 0x192b34: 0x351c0  sll         $t2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b30) {
            ctx->pc = 0x192B7Cu;
            return;
        }
    }
    ctx->pc = 0x192B38u;
    // 0x192b38: 0x91a4282b  lbu         $a0, 0x282B($t5)
    ctx->pc = 0x192b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10283)));
    // 0x192b3c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x192B3Cu;
    {
        const bool branch_taken_0x192b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x192B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B3Cu;
        // 0x192b40: 0x682821  addu        $a1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b3c) {
            ctx->pc = 0x192B68u;
            return;
        }
    }
    ctx->pc = 0x192B44u;
    // 0x192b44: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x192b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x192b48: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x192b48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192b4c: 0x90a41684  lbu         $a0, 0x1684($a1)
    ctx->pc = 0x192b4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5764)));
    // 0x192b50: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x192b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x192b54: 0xa0a41684  sb          $a0, 0x1684($a1)
    ctx->pc = 0x192b54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5764), (uint8_t)GPR_U32(ctx, 4));
    // 0x192b58: 0x80a41694  lb          $a0, 0x1694($a1)
    ctx->pc = 0x192b58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5780)));
    // 0x192b5c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x192b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x192b60: 0xa0a41694  sb          $a0, 0x1694($a1)
    ctx->pc = 0x192b60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5780), (uint8_t)GPR_U32(ctx, 4));
    // 0x192b64: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x192b68u;
}
