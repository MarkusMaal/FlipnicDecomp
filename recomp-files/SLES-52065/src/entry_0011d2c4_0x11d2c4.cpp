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

// Function: entry_0011d2c4
// Address: 0x11d2c4 - 0x11d31c
void entry_0011d2c4_0x11d2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d2c4_0x11d2c4");
#endif

    ctx->pc = 0x11d2c4u;

    // 0x11d2c4: 0x0  nop
    ctx->pc = 0x11d2c4u;
    // NOP
    // 0x11d2c8: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x11d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x11d2cc: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x11d2d0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x11d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d2d4: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x11d2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d2d8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x11D2D8u;
    {
        const bool branch_taken_0x11d2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d2d8) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D2E0u;
    // 0x11d2e0: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x11d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11d2e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x11d2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x11d2e8: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x11d2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d2ec: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x11d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d2f0: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x11d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x11d2f4: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x11d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11d2f8: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x11d2f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d2fc: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x11d2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x11d300: 0x63480  sll         $a2, $a2, 18
    ctx->pc = 0x11d300u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 18));
    // 0x11d304: 0x281082a  slt         $at, $s4, $at
    ctx->pc = 0x11d304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11d308: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x11d308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11d30c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D30Cu;
    {
        const bool branch_taken_0x11d30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D30Cu;
        // 0x11d310: 0xa6b021  addu        $s6, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d30c) {
            ctx->pc = 0x11D31Cu;
            return;
        }
    }
    ctx->pc = 0x11D314u;
    // 0x11d314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D314u;
    {
        const bool branch_taken_0x11d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D314u;
        // 0x11d318: 0x8ea50538  lw          $a1, 0x538($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d314) {
            ctx->pc = 0x11D324u;
            return;
        }
    }
    ctx->pc = 0x11D31Cu;
}
