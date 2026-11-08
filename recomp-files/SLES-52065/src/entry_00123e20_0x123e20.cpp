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

// Function: entry_00123e20
// Address: 0x123e20 - 0x123e64
void entry_00123e20_0x123e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123e20_0x123e20");
#endif

    ctx->pc = 0x123e20u;

    // 0x123e20: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x123e24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x123e28: 0x24420b30  addiu       $v0, $v0, 0xB30
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2864));
    // 0x123e2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x123e2cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x210B30u));
    // 0x123e30: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x123e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x123e34: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x123e34u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x210B40u));
    // 0x123e38: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x123e38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x123e3c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x123e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x123e40: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x123e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x123e44: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x123e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x123e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x123e4c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x123e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x123e50: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x123e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123E54u;
    {
        const bool branch_taken_0x123e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E54u;
        // 0x123e58: 0x8c7700b0  lw          $s7, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e54) {
            ctx->pc = 0x123E64u;
            return;
        }
    }
    ctx->pc = 0x123E5Cu;
    // 0x123e5c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x123e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x123e60: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x123e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->pc = 0x123e64u;
}
