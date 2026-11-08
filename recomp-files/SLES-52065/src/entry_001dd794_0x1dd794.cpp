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

// Function: entry_001dd794
// Address: 0x1dd794 - 0x1dd7e4
void entry_001dd794_0x1dd794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd794_0x1dd794");
#endif

    ctx->pc = 0x1dd794u;

    // 0x1dd794: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1dd798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd79c: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1dd7a0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd7a4: 0x46006064  .word       0x46006064                   # cvt.w.s     $f1, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd7a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd7ac: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1dd7acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd7b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd7b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd7bc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dd7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dd7c0: 0x248473c8  addiu       $a0, $a0, 0x73C8
    ctx->pc = 0x1dd7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    // 0x1dd7c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd7c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD7C8u;
    {
        const bool branch_taken_0x1dd7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7C8u;
        // 0x1dd7cc: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7c8) {
            ctx->pc = 0x1DD7E4u;
            return;
        }
    }
    ctx->pc = 0x1DD7D0u;
    // 0x1dd7d0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1dd7d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1dd7d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dd7d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd7d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd7dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd7dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd7e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1dd7e4u;
}
