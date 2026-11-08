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

// Function: entry_00189790
// Address: 0x189790 - 0x1897c8
void entry_00189790_0x189790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189790_0x189790");
#endif

    ctx->pc = 0x189790u;

    // 0x189790: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x189794: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x189794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x189798: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189798u;
    {
        const bool branch_taken_0x189798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189798u;
        // 0x18979c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189798) {
            ctx->pc = 0x1897E0u;
            return;
        }
    }
    ctx->pc = 0x1897A0u;
    // 0x1897a0: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1897a4: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1897a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1897a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1897ac: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1897acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1897b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1897b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1897B4u;
    {
        const bool branch_taken_0x1897b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897B4u;
        // 0x1897b8: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897b4) {
            ctx->pc = 0x1897C8u;
            return;
        }
    }
    ctx->pc = 0x1897BCu;
    // 0x1897bc: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1897bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1897c0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1897c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1897c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1897c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1897c8u;
}
