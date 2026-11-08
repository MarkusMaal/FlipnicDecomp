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

// Function: caseD_5
// Address: 0x123fc4 - 0x123ff0
void caseD_5_0x123fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x123fc4");
#endif

    ctx->pc = 0x123fc4u;

    // 0x123fc4: 0x0  nop
    ctx->pc = 0x123fc4u;
    // NOP
    // 0x123fc8: 0x9284007c  lbu         $a0, 0x7C($s4)
    ctx->pc = 0x123fc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x123fcc: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x123fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x123fd0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x123fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x123fd4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x123fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x123fd8: 0x2402ff03  addiu       $v0, $zero, -0xFD
    ctx->pc = 0x123fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x123fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x123fe0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x123fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x123fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x123fe8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x123FE8u;
    {
        const bool branch_taken_0x123fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FE8u;
        // 0x123fec: 0xa282007c  sb          $v0, 0x7C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fe8) {
            ctx->pc = 0x124014u;
            return;
        }
    }
    ctx->pc = 0x123FF0u;
}
