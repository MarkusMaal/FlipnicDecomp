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

// Function: entry_001dd8fc
// Address: 0x1dd8fc - 0x1dd94c
void entry_001dd8fc_0x1dd8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd8fc_0x1dd8fc");
#endif

    ctx->pc = 0x1dd8fcu;

    // 0x1dd8fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1dd8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1dd900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd904: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1dd908: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd90c: 0x46006064  .word       0x46006064                   # cvt.w.s     $f1, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd90cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd910: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd914: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1dd914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd91c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1dd920: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd924: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dd928: 0x248473cc  addiu       $a0, $a0, 0x73CC
    ctx->pc = 0x1dd928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29644));
    // 0x1dd92c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd930: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD930u;
    {
        const bool branch_taken_0x1dd930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD930u;
        // 0x1dd934: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd930) {
            ctx->pc = 0x1DD94Cu;
            return;
        }
    }
    ctx->pc = 0x1DD938u;
    // 0x1dd938: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1dd938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1dd93c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dd940: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dd940u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dd944: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dd944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dd948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dd948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1dd94cu;
}
