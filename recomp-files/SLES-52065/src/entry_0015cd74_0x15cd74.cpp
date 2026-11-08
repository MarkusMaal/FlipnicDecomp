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

// Function: entry_0015cd74
// Address: 0x15cd74 - 0x15cdac
void entry_0015cd74_0x15cd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cd74_0x15cd74");
#endif

    ctx->pc = 0x15cd74u;

label_15cd74:
    // 0x15cd74: 0x8ea62c1c  lw          $a2, 0x2C1C($s5)
    ctx->pc = 0x15cd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15cd78: 0x13d2021  addu        $a0, $t1, $sp
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x15cd7c: 0x808500b0  lb          $a1, 0xB0($a0)
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x15cd80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15cd84: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x15cd84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x15cd88: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x15cd88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x15cd8c: 0x91470041  lbu         $a3, 0x41($t2)
    ctx->pc = 0x15cd8cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 65)));
    // 0x15cd90: 0x70202a  slt         $a0, $v1, $s0
    ctx->pc = 0x15cd90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cd94: 0x91460042  lbu         $a2, 0x42($t2)
    ctx->pc = 0x15cd94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x15cd98: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x15cd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x15cd9c: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x15cd9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x15cda0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15cda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15cda4: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x15CDA4u;
    {
        const bool branch_taken_0x15cda4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDA4u;
        // 0x15cda8: 0xa1450042  sb          $a1, 0x42($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 66), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cda4) {
            ctx->pc = 0x15CD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cd74;
        }
    }
    ctx->pc = 0x15CDACu;
}
