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

// Function: entry_001420ac
// Address: 0x1420ac - 0x142100
void entry_001420ac_0x1420ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420ac_0x1420ac");
#endif

    ctx->pc = 0x1420acu;

    // 0x1420ac: 0x0  nop
    ctx->pc = 0x1420acu;
    // NOP
    // 0x1420b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1420b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1420b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1420b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1420B8u;
    {
        const bool branch_taken_0x1420b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420b8) {
            ctx->pc = 0x142100u;
            return;
        }
    }
    ctx->pc = 0x1420C0u;
    // 0x1420c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1420c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1420c4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1420c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1420c8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1420c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1420cc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1420ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1420d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1420d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1420d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1420d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1420dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1420DCu;
    {
        const bool branch_taken_0x1420dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420dc) {
            ctx->pc = 0x142100u;
            return;
        }
    }
    ctx->pc = 0x1420E4u;
    // 0x1420e4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1420e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1420e8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1420e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1420ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1420ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1420f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1420f4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1420f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1420f8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1420f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1420fc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1420fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x142100u;
}
