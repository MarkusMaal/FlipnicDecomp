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

// Function: entry_00208e4c
// Address: 0x208e4c - 0x208eb0
void entry_00208e4c_0x208e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208e4c_0x208e4c");
#endif

    ctx->pc = 0x208e4cu;

    // 0x208e4c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x208e50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x208e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208e54: 0x820019  multu       $a0, $v0
    ctx->pc = 0x208e54u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x208e58: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x208e5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208e60: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x208e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x208e64: 0x2812  mflo        $a1
    ctx->pc = 0x208e64u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x208e68: 0x2010  mfhi        $a0
    ctx->pc = 0x208e68u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x208e6c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x208e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x208e70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x208e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x208e74: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x208e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x208e78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208e7c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x208e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x208e80: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x208e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x208e84: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x208e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208e88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x208e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x208e8c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x208e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x208e90: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x208e94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x208e94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x208e98: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x208e98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x208e9c: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x208E9Cu;
    {
        const bool branch_taken_0x208e9c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x208EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E9Cu;
        // 0x208ea0: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e9c) {
            ctx->pc = 0x208ED0u;
            return;
        }
    }
    ctx->pc = 0x208EA4u;
    // 0x208ea4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x208ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x208ea8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x208ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x208eac: 0x0  nop
    ctx->pc = 0x208eacu;
    // NOP
    ctx->pc = 0x208eb0u;
}
