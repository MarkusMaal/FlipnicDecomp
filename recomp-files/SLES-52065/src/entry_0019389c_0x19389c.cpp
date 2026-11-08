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

// Function: entry_0019389c
// Address: 0x19389c - 0x1938f4
void entry_0019389c_0x19389c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019389c_0x19389c");
#endif

    ctx->pc = 0x19389cu;

    // 0x19389c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1938a0: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x1938a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1938a4: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x1938a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1938a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1938a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1938ac: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x1938acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1938b0: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1938b4: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
    // 0x1938b8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1938b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1938bc: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x1938bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1938c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1938c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1938c4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1938c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1938cc: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1938d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1938d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1938d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1938d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1938d8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1938d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1938dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1938dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1938e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1938e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1938e4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1938E4u;
    {
        const bool branch_taken_0x1938e4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1938E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938E4u;
        // 0x1938e8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938e4) {
            ctx->pc = 0x1938F4u;
            return;
        }
    }
    ctx->pc = 0x1938ECu;
    // 0x1938ec: 0x252200ff  addiu       $v0, $t1, 0xFF
    ctx->pc = 0x1938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 255));
    // 0x1938f0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    ctx->pc = 0x1938f4u;
}
