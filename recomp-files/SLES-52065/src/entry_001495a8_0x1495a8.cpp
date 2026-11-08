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

// Function: entry_001495a8
// Address: 0x1495a8 - 0x1495e8
void entry_001495a8_0x1495a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001495a8_0x1495a8");
#endif

    ctx->pc = 0x1495a8u;

    // 0x1495a8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1495ac: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1495acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1495b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1495b4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1495b8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1495bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1495bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1495c0: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x1495c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1495c4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1495c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1495c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1495cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1495ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1495d0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1495d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1495d4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1495d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1495d8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1495d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1495dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1495dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1495e0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x149560u;
            return;
        }
    }
    ctx->pc = 0x1495E8u;
}
