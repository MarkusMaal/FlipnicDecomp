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

// Function: FUN_001522a0
// Address: 0x1522a0 - 0x152314
void FUN_001522a0_0x1522a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001522a0_0x1522a0");
#endif

    ctx->pc = 0x1522a0u;

    // 0x1522a0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1522a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1522a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1522a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1522a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1522a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1522ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1522acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1522b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1522b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1522b4: 0x46026043  div.s       $f1, $f12, $f2
    ctx->pc = 0x1522b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x1522b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1522b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1522bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1522bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1522c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1522c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1522c4: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1522c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1522c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1522c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1522cc: 0x0  nop
    ctx->pc = 0x1522ccu;
    // NOP
    // 0x1522d0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1522d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1522d4: 0x0  nop
    ctx->pc = 0x1522d4u;
    // NOP
    // 0x1522d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1522D8u;
    {
        const bool branch_taken_0x1522d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1522DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522D8u;
        // 0x1522dc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522d8) {
            ctx->pc = 0x1522E8u;
            goto label_1522e8;
        }
    }
    ctx->pc = 0x1522E0u;
    // 0x1522e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1522E0u;
    {
        const bool branch_taken_0x1522e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522E0u;
        // 0x1522e4: 0x46026301  sub.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522e0) {
            ctx->pc = 0x152308u;
            goto label_152308;
        }
    }
    ctx->pc = 0x1522E8u;
label_1522e8:
    // 0x1522e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1522e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1522ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1522ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1522f0: 0x0  nop
    ctx->pc = 0x1522f0u;
    // NOP
    // 0x1522f4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1522f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1522f8: 0x0  nop
    ctx->pc = 0x1522f8u;
    // NOP
    // 0x1522fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1522FCu;
    {
        const bool branch_taken_0x1522fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522FCu;
        // 0x152300: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522fc) {
            ctx->pc = 0x15230Cu;
            goto label_15230c;
        }
    }
    ctx->pc = 0x152304u;
    // 0x152304: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x152304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_152308:
    // 0x152308: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x152308u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_15230c:
    // 0x15230c: 0x3e00008  jr          $ra
    ctx->pc = 0x15230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152314u;
}
