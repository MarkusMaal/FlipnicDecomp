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

// Function: entry_00116f44
// Address: 0x116f44 - 0x116f70
void entry_00116f44_0x116f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f44_0x116f44");
#endif

    ctx->pc = 0x116f44u;

label_116f44:
    // 0x116f44: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x116f44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116f48: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x116f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116f4c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x116f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x116f50: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x116f54: 0x1071026  xor         $v0, $t0, $a3
    ctx->pc = 0x116f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x116f58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116f5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x116f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x116f60: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x116f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116f64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116f68: 0x4a1fff6  bgez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x116F68u;
    {
        const bool branch_taken_0x116f68 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x116F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F68u;
        // 0x116f6c: 0x621026  xor         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f68) {
            ctx->pc = 0x116F44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116f44;
        }
    }
    ctx->pc = 0x116F70u;
}
